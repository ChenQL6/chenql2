
// ��2�ܿ���ʵ��4View.h : C��2�ܿ���ʵ��4View ��Ľӿ�
//

#pragma once


class C��2�ܿ���ʵ��4View : public CView
{
protected: // �������л�����
	C��2�ܿ���ʵ��4View();
	DECLARE_DYNCREATE(C��2�ܿ���ʵ��4View)

// ����
public:
	C��2�ܿ���ʵ��4Doc* GetDocument() const;

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
	virtual ~C��2�ܿ���ʵ��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��2�ܿ���ʵ��4View.cpp �еĵ��԰汾
inline C��2�ܿ���ʵ��4Doc* C��2�ܿ���ʵ��4View::GetDocument() const
   { return reinterpret_cast<C��2�ܿ���ʵ��4Doc*>(m_pDocument); }
#endif

