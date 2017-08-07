#pragma once



namespace EMessageType
{
	enum Type
	{
		ConnectEnsure,		//����������
		PlayerInfo,			//�����Ϣ
		GameState,			//��Ϸ״̬
		Command,			//�������ָ��
		Prepare1,			//����ָ��1
		Prepare,			//����ָ��2
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