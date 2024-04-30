
// todo listDlg.h: файл заголовка
//

#pragma once
#include <vector>
#include <string>

// Диалоговое окно CtodolistDlg
class CtodolistDlg : public CDialogEx
{
// Создание
public:
	CtodolistDlg(CWnd* pParent = nullptr);	// стандартный конструктор

// Данные диалогового окна
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TODO_LIST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV


// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAdd();
	std::vector<std::pair<CString, int>> mp;
	CEdit* edit;
	CEdit* preor;
	CListBox* lbox;
};
