
// 0413ʵ��3View.cpp : CMy0413ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0413ʵ��3.h"
#endif

#include "0413ʵ��3Doc.h"
#include "0413ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy0413ʵ��3View

IMPLEMENT_DYNCREATE(CMy0413ʵ��3View, CView)

BEGIN_MESSAGE_MAP(CMy0413ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy0413ʵ��3View ����/����

CMy0413ʵ��3View::CMy0413ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	satus = 0;
	set = true;
	cr.left = 200;
	cr.top = 300;
	cr.right = 220;
	cr.bottom = 320;

}

CMy0413ʵ��3View::~CMy0413ʵ��3View()
{
}

BOOL CMy0413ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413ʵ��3View ����

void CMy0413ʵ��3View::OnDraw(CDC* pDC)
{
	CMy0413ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set)
	{
		SetTimer(0, 180, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMy0413ʵ��3View ���

#ifdef _DEBUG
void CMy0413ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413ʵ��3Doc* CMy0413ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413ʵ��3Doc)));
	return (CMy0413ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413ʵ��3View ��Ϣ�������

void CMy0413ʵ��3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cc;
	GetClientRect(&cc);
	if (satus == 1)
	{
		if (flag == 0 && cr.right < (cc.right - cc.left))
		{
			cr.left += 10;
			cr.right += 10;
		}
		else flag += 1;
		if (flag >= 1 && cr.left>0)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		else flag = 0;
	}
	Invalidate();

	CView::OnTimer(nIDEvent);
}



void CMy0413ʵ��3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	satus = 0;

	CView::OnLButtonDblClk(nFlags, point);
}


void CMy0413ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	satus = 1;

	CView::OnLButtonDown(nFlags, point);
}