
// 0414ʵ��2.1View.cpp : CMy0414ʵ��21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414ʵ��2.1.h"
#endif

#include "0414ʵ��2.1Doc.h"
#include "0414ʵ��2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414ʵ��21View

IMPLEMENT_DYNCREATE(CMy0414ʵ��21View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0414ʵ��21View ����/����

CMy0414ʵ��21View::CMy0414ʵ��21View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
}

CMy0414ʵ��21View::~CMy0414ʵ��21View()
{
}

BOOL CMy0414ʵ��21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��21View ����

void CMy0414ʵ��21View::OnDraw(CDC* pDC)
{
	CMy0414ʵ��21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr(a,b);
	pDC->Ellipse(&cr);

}


// CMy0414ʵ��21View ���

#ifdef _DEBUG
void CMy0414ʵ��21View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��21Doc* CMy0414ʵ��21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��21Doc)));
	return (CMy0414ʵ��21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��21View ��Ϣ�������


void CMy0414ʵ��21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	a = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void CMy0414ʵ��21View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void CMy0414ʵ��21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	b = point;
	flag = 0;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
