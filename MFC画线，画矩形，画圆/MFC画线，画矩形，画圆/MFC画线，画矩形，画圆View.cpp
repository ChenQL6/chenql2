
// MFC���ߣ������Σ���ԲView.cpp : CMFC���ߣ������Σ���ԲView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC���ߣ������Σ���Բ.h"
#endif

#include "MFC���ߣ������Σ���ԲDoc.h"
#include "MFC���ߣ������Σ���ԲView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC���ߣ������Σ���ԲView

IMPLEMENT_DYNCREATE(CMFC���ߣ������Σ���ԲView, CView)

BEGIN_MESSAGE_MAP(CMFC���ߣ������Σ���ԲView, CView)
	ON_COMMAND(ID_Line, &CMFC���ߣ������Σ���ԲView::OnLine)
	ON_COMMAND(ID_Rectangle, &CMFC���ߣ������Σ���ԲView::OnRectangle)
	ON_COMMAND(ID_Ellipse, &CMFC���ߣ������Σ���ԲView::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC���ߣ������Σ���ԲView ����/����

CMFC���ߣ������Σ���ԲView::CMFC���ߣ������Σ���ԲView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC���ߣ������Σ���ԲView::~CMFC���ߣ������Σ���ԲView()
{
}

BOOL CMFC���ߣ������Σ���ԲView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC���ߣ������Σ���ԲView ����

void CMFC���ߣ������Σ���ԲView::OnDraw(CDC* pDC)
{
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (pDoc->flag == 1)
	{
		pDC->MoveTo(pDoc->a);
		pDC->LineTo(pDoc->b);
	}

	if (pDoc->flag == 2)
	{
		pDC->Rectangle(pDoc->a.x, pDoc->a.y, pDoc->b.x, pDoc->b.y);
	}

	if (pDoc->flag == 3)
	{
		pDC->Ellipse(pDoc->a.x, pDoc->a.y, pDoc->b.x, pDoc->b.y);
	}
}


// CMFC���ߣ������Σ���ԲView ���

#ifdef _DEBUG
void CMFC���ߣ������Σ���ԲView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC���ߣ������Σ���ԲView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC���ߣ������Σ���ԲDoc* CMFC���ߣ������Σ���ԲView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC���ߣ������Σ���ԲDoc)));
	return (CMFC���ߣ������Σ���ԲDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC���ߣ������Σ���ԲView ��Ϣ�������


void CMFC���ߣ������Σ���ԲView::OnLine()
{
	// TODO: �ڴ���������������
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	pDoc->flag = 1;
}


void CMFC���ߣ������Σ���ԲView::OnRectangle()
{
	// TODO: �ڴ���������������
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	pDoc->flag = 2;
}


void CMFC���ߣ������Σ���ԲView::OnEllipse()
{
	// TODO: �ڴ���������������
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	pDoc->flag = 3;
}


void CMFC���ߣ������Σ���ԲView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect c1;
	this->GetClientRect(&c1);
	pDoc->a.x = point.x;
	pDoc->a.y = point.y;

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CMFC���ߣ������Σ���ԲView::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC���ߣ������Σ���ԲDoc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect c2;
	this->GetClientRect(&c2);
	pDoc->b.x = point.x;
	pDoc->b.y = point.y;

	Invalidate();


	CView::OnLButtonUp(nFlags, point);
}
