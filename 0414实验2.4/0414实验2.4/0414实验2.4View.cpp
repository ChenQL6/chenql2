
// 0414ʵ��2.4View.cpp : CMy0414ʵ��24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414ʵ��2.4.h"
#endif

#include "0414ʵ��2.4Doc.h"
#include "0414ʵ��2.4View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414ʵ��24View

IMPLEMENT_DYNCREATE(CMy0414ʵ��24View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��24View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0414ʵ��24View::OnPopout)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0414ʵ��24View ����/����

CMy0414ʵ��24View::CMy0414ʵ��24View()
{
	// TODO: �ڴ˴���ӹ������
	cr.SetRect(100, 300, 400,500);
	r = g = b = 0;
}

CMy0414ʵ��24View::~CMy0414ʵ��24View()
{
}

BOOL CMy0414ʵ��24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��24View ����

void CMy0414ʵ��24View::OnDraw(CDC* /*pDC*/)
{
	CMy0414ʵ��24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0414ʵ��24View ���

#ifdef _DEBUG
void CMy0414ʵ��24View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��24Doc* CMy0414ʵ��24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��24Doc)));
	return (CMy0414ʵ��24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��24View ��Ϣ�������


void CMy0414ʵ��24View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if(r == IDOK)
	{
		UpdateData(true);
		r = dlg.R;
		g = dlg.G;
		b = dlg.B;

	}
	CClientDC dc(this);
	CPen newpen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *oldpen = dc.SelectObject(&newpen);

	//dc.SelectObject(oldpen);
	dc.Ellipse(cr);
	CBrush newbrush(RGB(r, g, b));
	CBrush *oldbrush = dc.SelectObject(&newbrush);
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);
	

}


void CMy0414ʵ��24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	

	CView::OnLButtonDown(nFlags, point);
}
