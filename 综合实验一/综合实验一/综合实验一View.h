
// �ۺ�ʵ��һView.h : C�ۺ�ʵ��һView ��Ľӿ�
//

#pragma once

class C�ۺ�ʵ��һSet;

class C�ۺ�ʵ��һView : public CRecordView
{
protected: // �������л�����
	C�ۺ�ʵ��һView();
	DECLARE_DYNCREATE(C�ۺ�ʵ��һView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C�ۺ�ʵ��һSet* m_pSet;
	CRect  pic_rect;

// ����
public:
	C�ۺ�ʵ��һDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C�ۺ�ʵ��һView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	
	CString Name;
	CString major;
	CString gender;
	CString phone;
	CString address;
	void foo(CImage &img, int &sx, int &sy, int &w, int &h);
	afx_msg void OnEnChangeEdit1();
	int ID;
	CString Sno;
	CString year;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // �ۺ�ʵ��һView.cpp �еĵ��԰汾
inline C�ۺ�ʵ��һDoc* C�ۺ�ʵ��һView::GetDocument() const
   { return reinterpret_cast<C�ۺ�ʵ��һDoc*>(m_pDocument); }
#endif

