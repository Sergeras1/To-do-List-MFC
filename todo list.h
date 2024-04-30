
// todo list.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CtodolistApp:
// Сведения о реализации этого класса: todo list.cpp
//

class CtodolistApp : public CWinApp
{
public:
	CtodolistApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CtodolistApp theApp;
