#pragma once
#include "afxwin.h"


// CDlgTab04 대화 상자입니다.

class CDlgTab04 : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgTab04)

public:
	CDlgTab04(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CDlgTab04();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAB4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CListBox m_List4;
	afx_msg void OnLbnSelchangeList1();
};
