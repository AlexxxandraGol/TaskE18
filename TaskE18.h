#pragma once
#include "resource.h"
#include <afxwin.h>
// ����� ��������� ���� ����������

class CMainWin : public CFrameWnd {
public:
    CMainWin();
    afx_msg void OnRButtonDown(UINT, CPoint loc);
    afx_msg void OnSpc();
    bool flag = true;
    // �������������� ����� ���������
    DECLARE_MESSAGE_MAP()
};

class CWin : public CFrameWnd {
public:
    CWin();
    afx_msg void OnRButtonDown(UINT, CPoint loc);
    afx_msg void OnSpc();
    bool flag = true;
    // �������������� ����� ���������
    DECLARE_MESSAGE_MAP()
};
// ����� ����������. ������ ������������ ������
// ���� ��������� ����� ������.

// ����-������� InitInstance() ���������� ��� �������
// ����������.

class CApp : public CWinApp {
public:
    BOOL InitInstance();
};


