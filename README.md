## MetaRTC Overview
**Code once run everywhere, A pure C version of webRTC**    
MetaRTC是一个跨平台的webRTC SDK,更适合嵌入式/物联网的webRTC应用  
MetaRTC is a cross-platform webRTC SDK, more suitable for embedded/Internet of Things webRTC applications.    
**Remark:metaRTC6.0 is stable**  
 
## Key Features
+ Audio/Video Support  
  + H264/H265(HEVC) 
  + OPUS/G711A/G711U/AAC/MP3/SPEEX  
  + AEC/ANS/AGC/VAD/CNG 

+ DataChannels
+ NACK/PLI/FIR/FEC/TWCC
+ STUN/TURN Support
+ IPv4/IPv6
+ Whip/Whep  
+ Linux/Windows/Mac/Android/IOS
+ ARM/MIPS/Loongson/RISC-V/X86
+ MP4/FLV Recording  
  + AAC/H264  
  + AAC/H265(HEVC)
## module
### libmetartccore7(pure C)
Implementation of webRTC protocol stack    
AEC/ANS/AGC and other audio and video processing libraries
### libmetartc7(C++)
Realize audio and video collection, encoding, decoding, transmission, rendering, and push-pull streaming  

## Dependencies
To compile libmetartccore7, you'll need to satisfy the following dependencies:  
[OpenSSL](https://www.openssl.org/) or [Mbedtls](https://github.com/Mbed-TLS/mbedtls)  
[libsrtp](https://github.com/cisco/libsrtp)  
[usrsctp](https://github.com/sctplab/usrsctp)  



## metaRTC服务支持(service support)
微信号: taihang82  
email: yangrtc@aliyun.com yangrtc@outlook.com   
twitter: metaRTC@metartc_sdk  
 
### metaRTC问答星球      
  ![xingqiu2](https://user-images.githubusercontent.com/87118023/227077884-0163fcb6-ab0d-4933-88c9-0164b80f4d02.jpg)  
https://t.zsxq.com/0cfpXQYoX

## Compile

### linux/android

#### cmake

`./cmake_lib_x64.sh `

`./cmake_lib_android.sh `

##### module

./cmake_mips32.sh  

#arm64

./cmake_arm.sh  

./cmake_x64.sh 

#arm64-v8a armeabi x86_64

./cmake_android.sh  

#### Qt

libmetartccore7/libmetartccore7.pro

libmetartc7/libmetartc7.pro

### windows

#### visual studio

project_msvc/

#### Qt(msvc)

libmetartccore7/libmetartccore7.pro

libmetartc7/libmetartc7.pro
### mac/ios
### xcode
project_xcode/

## demo compile
### Qt demo
demo/metapushstream6/metapushstream7.pro  
demo/metaplayer6/metaplayer7.pro
### android demo
android studio ide(api:29)  
demo/metapushstream7_android  
demo/metaplayer7_android  

## metaRTC streams to janus via the whip protocol  
https://github.com/metartc/metaRTC/wiki/metaRTC-streams-to-janus-via-the-whip-protocol

## Learning metaRTC 
https://github.com/metartc/metaRTC/wiki/metaRTC-Learning   
## MetaRTC vs webrtc
https://github.com/metartc/metaRTC/wiki/metaRTC-vs-webrtc
## metaRTC features
https://github.com/metartc/metaRTC/wiki/metaRTC-Features



