
// TestComDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CTestComDlg �Ի���
class CTestComDlg : public CDialogEx
{
// ����
public:
	CTestComDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTCOM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CButton m_btnDVRVideoRecordSearch;
	afx_msg void OnBnClickedButton();
	CButton m_btnHUSVideoRecordSearch;
	afx_msg void OnClickedButton2();
};
