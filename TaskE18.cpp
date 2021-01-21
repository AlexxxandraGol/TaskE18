#define _CRT_SECURE_NO_WARNINGS
#define _AFXDLL
#include <afxwin.h>
#include <string.h>
#include "TaskE18.h"

CApp App;
CMainWin* win1;
CWin* win2;
// Реализация
BOOL CApp::InitInstance()
{

    // Создание главного окна приложения и его
    // отображение.

    // Член CApp::m_pMainWnd - это указатель на объект
    // главного окна.
    win1 = new CMainWin;
    win2 = new CWin;

    m_pMainWnd = win1;
    m_pMainWnd->ShowWindow(SW_RESTORE);
    m_pMainWnd->UpdateWindow();

    win2->ShowWindow(SW_RESTORE);
    win2->UpdateWindow();

    // Сигнализируем MFC об успешной инициализации
    // приложения. 

    return TRUE;
}

CMainWin::CMainWin()
{
    // Создание окна с заголовком. Используется
    // встроенный в MFC

    // класс окна, поэтому первый параметр 0.
    this->Create(0, "Окно 1");
    if (!LoadAccelTable("IDC_TASKE"))
        MessageBox("Cannot Load Accelerators", "Error");

}

CWin::CWin()
{
    // Создание окна с заголовком. Используется
    // встроенный в MFC

    // класс окна, поэтому первый параметр 0.
    this->Create(0, "Окно 2");
    if (!LoadAccelTable("IDC_TASKE"))
        MessageBox("Cannot Load Accelerators", "Error");
    

}
// Реализация карты сообщений
BEGIN_MESSAGE_MAP(CMainWin /*класс окна*/, CFrameWnd
    /*класс-предок*/)
    ON_WM_RBUTTONDOWN()
    ON_COMMAND(ID_SPC,OnSpc)
END_MESSAGE_MAP()
BEGIN_MESSAGE_MAP(CWin /*класс окна*/, CFrameWnd
    /*класс-предок*/)
    ON_WM_RBUTTONDOWN()
    ON_COMMAND(ID_SPC, OnSpc)
END_MESSAGE_MAP()
afx_msg void CMainWin::OnRButtonDown(UINT, CPoint loc)
{
    CRect rc;
    this->GetClientRect(&rc);
    if (loc.x < rc.right / 2 and this->flag) win2->SetFocus();
}

afx_msg void CMainWin::OnSpc()
{
    this->flag = false;
}

afx_msg void CWin::OnRButtonDown(UINT, CPoint loc)
{
    CRect rc;
    this->GetClientRect(&rc);
    if (loc.x < rc.right / 2 and this->flag) win1->SetFocus();
}

afx_msg void CWin::OnSpc()
{
    this->flag = false;
}