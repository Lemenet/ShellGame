
// Launcher.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLauncherApp: 
// �йش����ʵ�֣������ Launcher.cpp
//

class CLauncherApp : public CWinApp
{
public:
	CLauncherApp();





// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLauncherApp theApp;



class ConnectUtilBase
{
private:
	boost::asio::io_service Ioservice;
	boost::asio::ip::tcp::socket Socket;
	MessagePackage Msg;


public:
protected:
};


