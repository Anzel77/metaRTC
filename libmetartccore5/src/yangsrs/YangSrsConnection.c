﻿//
// Copyright (c) 2019-2022 yanggaofeng
//
#include <yangsrs/YangSrsConnection.h>
#include <yangsrs/YangSrsSdp.h>
#include <yangrtc/YangRtcConnection.h>
#include <yangrtc/YangRtcStun.h>
#include <yangrtc/YangRtcUdp.h>


#include <yangsdp/YangSdp.h>
#include <yangutil/sys/YangCString.h>
#include <yangutil/yangtype.h>
#include <yangutil/sys/YangLog.h>
int32_t yang_srs_handleRemoteSdp(YangRtcSession* session,char* sdpstr) ;

int32_t yang_srs_startRtc(YangRtcConnection* conn,char* sdp){
	YangRtcSession* session=conn->session;
	yang_srs_handleRemoteSdp(session,sdp);
	yang_create_rtcudp(session->context.udp,session->context.streamConfig->remoteIp,session->listenPort, session->context.streamConfig->localPort);
  	yang_stun_createRequestStunPacket(session,session->remoteIcePwd);
	conn->startudp(session);
	session->context.udp->start(&session->context.udp->session);
	return Yang_Ok;
}
int32_t yang_srs_connectRtcServer(YangRtcConnection* conn){

	int err=Yang_Ok;
	SrsSdpResponseType srs;
	memset(&srs,0,sizeof(SrsSdpResponseType));

	if ((err=yang_srs_getSignal(conn->session,&srs))  == Yang_Ok) {
		yang_srs_startRtc(conn,srs.sdp);
	}

	yang_destroy_srsresponse(&srs);
    return err;
}

int32_t yang_srs_handleRemoteSdp(YangRtcSession* session,char* sdpstr) {
	int32_t err = Yang_Ok;

	YangSdp sdp;
	memset(&sdp,0,sizeof(YangSdp));
	yang_create_rtcsdp(&sdp);
	if(session->remote_audio==NULL) session->remote_audio=(YangAudioParam*)calloc(sizeof(YangAudioParam),1);
	if(session->remote_video==NULL) session->remote_video=(YangVideoParam*)calloc(sizeof(YangVideoParam),1);

	yang_rtcsdp_parse(&sdp,sdpstr);
	yang_sdp_parseRemoteSdp(session,&sdp);

	yang_destroy_rtcsdp(&sdp);
	return err;
}

