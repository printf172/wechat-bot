#pragma once
#include <queue>
#include <vector>
#include <string>

namespace arris {
namespace wechat {

	std::queue<std::string> kMsgQueue;

	const std::string kMsgOkStatus = "SUCCSESSED";
	const std::string kMsgFailedStatus = "FAILED";

	const std::string kServerSide = "SERVER";
	const std::string kClientSide = "CLIENT";

	enum class MsgType {
		kDestroyDllWin=9999,
		kPersonalInfo=6500,
		kListChatRoomMemberNick = 5020,
		kListChatRoomMember = 5010,
		kHeartBeat=5005,
		kUserListFromContact=5000,
		kSendTxtMsg = 555,
		kSendPicMsg = 500,
		kServerSideMsg = 1,
		kClientSideMsg = 0,
		kAbnormalMsg = 4,
		kHookTxtMsgType=0x1,
		kHookNewFriendRequest=0x25
	};

	/*enum MsgType {
		kHook = 0,
		kSend = 1
	};*/

	enum LogType {

	};


	/*
	struct MsgContent {
		int msgid;
		unsigned int type;
		std::wstring start_time;
		std::wstring end_time;
		std::wstring unique_id;//wx id ,chatroom id
		std::wstring sender;
		std::wstring receiver;
		std::wstring content;
	};*/

	
	

}//namespace net
}//namespace arris