
// 0331ʵ��3View.cpp : CMy0331ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0331ʵ��3.h"
#endif

#include "0331ʵ��3Doc.h"
#include "0331ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0331ʵ��3View

IMPLEMENT_DYNCREATE(CMy0331ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy0331ʵ��3View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy0331ʵ��3View ����/����

CMy0331ʵ��3View::CMy0331ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	cr.left = 100;
	cr.top = 300;
	cr.bottom = 500;
	cr.right = 700;
	x =101;
	y = 315;
}

CMy0331ʵ��3View::~CMy0331ʵ��3View()
{
}

BOOL CMy0331ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0331ʵ��3View ����

void CMy0331ʵ��3View::OnDraw(CDC* pDC)
{
	CMy0331ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
}


// CMy0331ʵ��3View ���

#ifdef _DEBUG
void CMy0331ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331ʵ��3Doc* CMy0331ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331ʵ��3Doc)));
	return (CMy0331ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331ʵ��3View ��Ϣ�������


void CMy0331ʵ��3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	s.AppendChar(nChar);
	c=dc.GetTextExtent(s);
	if (c.cx >= (cr.right - cr.left) && (c.cy<cr.Height()))
	{
		y= y + tm.tmHeight;
		s.Empty();
	}
	if (c.cx<(cr.right - cr.left))
		dc.TextOutW(x,y,s);

	CView::OnChar(nChar, nRepCnt, nFlags);
}
