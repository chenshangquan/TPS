// handInputTabletDlg.h : header file
//

#if !defined(AFX_HANDINPUTTABLETDLG_H__7EE54504_1EE4_42C6_8D01_DE6119CAEC90__INCLUDED_)
#define AFX_HANDINPUTTABLETDLG_H__7EE54504_1EE4_42C6_8D01_DE6119CAEC90__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHandInputTabletDlg dialog

class CHandInputTabletDlg : public CDialog
{
// Construction
public:
	CHandInputTabletDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHandInputTabletDlg)
	enum { IDD = IDD_HANDINPUTTABLET_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHandInputTabletDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHandInputTabletDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HANDINPUTTABLETDLG_H__7EE54504_1EE4_42C6_8D01_DE6119CAEC90__INCLUDED_)
