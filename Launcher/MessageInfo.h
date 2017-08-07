#pragma once



namespace EMessageType
{
	enum Type
	{
		ConnectEnsure,		//建立连接用
		PlayerInfo,			//玩家信息
		GameState,			//游戏状态
		Command,			//玩家输入指令
		Prepare1,			//备用指令1
		Prepare,			//备用指令2
	};
}

class MessagePackage
{
private:
	EMessageType::Type MessageFlag;
	int DataLength;
	char Data[512];
public:
	inline EMessageType::Type MessageType() { return MessageFlag; }

	inline int MessageDataLength() { return DataLength; }

	inline char* MessageData() { return Data; }


protected:
};