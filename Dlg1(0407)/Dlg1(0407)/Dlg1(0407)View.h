
// Dlg1(0407)View.h : CDlg10407View ��Ľӿ�
//

#pragma once


class CDlg10407View : public CView
{
protected: // �������л�����
	CDlg10407View();
	DECLARE_DYNCREATE(CDlg10407View)

// ����
public:
	CDlg10407Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDlg10407View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // Dlg1(0407)View.cpp �еĵ��԰汾
inline CDlg10407Doc* CDlg10407View::GetDocument() const
   { return reinterpret_cast<CDlg10407Doc*>(m_pDocument); }
#endif

