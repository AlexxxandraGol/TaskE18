#pragma once
#include "resource.h"
#include <afxwin.h>
// Класс основного окна приложения

class CMainWin : public CFrameWnd {
public:
    CMainWin();
    afx_msg void OnRButtonDown(UINT, CPoint loc);
    afx_msg void OnSpc();
    bool flag = true;
    // Декларирование карты сообщений
    DECLARE_MESSAGE_MAP()
};

class CWin : public CFrameWnd {
public:
    CWin();
    afx_msg void OnRButtonDown(UINT, CPoint loc);
    afx_msg void OnSpc();
    bool flag = true;
    // Декларирование карты сообщений
    DECLARE_MESSAGE_MAP()
};
// Класс приложения. Должен существовать только
// один экземпляр этого класса.

// Член-функция InitInstance() вызывается при запуске
// приложения.

class CApp : public CWinApp {
public:
    BOOL InitInstance();
};


