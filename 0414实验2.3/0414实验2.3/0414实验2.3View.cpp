
// 0414ʵ��2.3View.cpp : CMy0414ʵ��23View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414ʵ��2.3.h"
#endif

#include "0414ʵ��2.3Doc.h"
#include "0414ʵ��2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414ʵ��23View

IMPLEMENT_DYNCREATE(CMy0414ʵ��23View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0414ʵ��23View ����/����

CMy0414ʵ��23View::CMy0414ʵ��23View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 100;
	cr.top = 300;
	cr.right = 400;
	cr.bottom = 500;

}

CMy0414ʵ��23View::~CMy0414ʵ��23View()
{
}

BOOL CMy0414ʵ��23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��23View ����

void CMy0414ʵ��23View::OnDraw(CDC* pDC)
{
	CMy0414ʵ��23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(&cr);

}


// CMy0414ʵ��23View ���

#ifdef _DEBUG
void CMy0414ʵ��23View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��23Doc* CMy0414ʵ��23View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��23Doc)));
	return (CMy0414ʵ��23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��23View ��Ϣ�������


void CMy0414ʵ��23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	
	CPen newpen(PS_DASH, 1, RGB(200, 100, 100));
	CPen *oldpen = dc.SelectObject(&newpen);

	dc.Rectangle(100, 300, 400, 500);
	dc.Ellipse(100, 300, 400, 500);

	dc.SelectObject(oldpen);
	CView::OnLButtonDown(nFlags, point);
}
