/*
* This header is generated by classdump-dyld 1.0
* on Saturday, February 25, 2017 at 6:58:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct _compressed_pair<BT::CallInfo *, std::__1::allocator<BT::CallInfo> > {
	CallInfo __first_;
} compressed_pair<BT::CallInfo *, std::__1::allocator<BT::CallInfo> >;

typedef struct vector<BT::CallInfo, std::__1::allocator<BT::CallInfo> > {
	CallInfo __begin_;
	CallInfo __end_;
	compressed_pair<BT::CallInfo *, std::__1::allocator<BT::CallInfo> > __end_cap_;
} vector<BT::CallInfo, std::__1::allocator<BT::CallInfo> >;

typedef struct CallList {
	vector<BT::CallInfo, std::__1::allocator<BT::CallInfo> > fCalls;
} CallList;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct UUID {
	unsigned char fUUID[16];
} UUID;

