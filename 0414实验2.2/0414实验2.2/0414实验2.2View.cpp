
// 0414ʵ��2.2View.cpp : CMy0414ʵ��22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414ʵ��2.2.h"
#endif

#include "0414ʵ��2.2Doc.h"
#include "0414ʵ��2.2View.h"
#include "Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414ʵ��22View

IMPLEMENT_DYNCREATE(CMy0414ʵ��22View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��22View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0414ʵ��22View::OnPopout)
END_MESSAGE_MAP()

// CMy0414ʵ��22View ����/����

CMy0414ʵ��22View::CMy0414ʵ��22View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 0;
	cr.top = 0;
	cr.right = 0;
	cr.bottom = 0;

}

CMy0414ʵ��22View::~CMy0414ʵ��22View()
{
}

BOOL CMy0414ʵ��22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��22View ����

void CMy0414ʵ��22View::OnDraw(CDC* pDC)
{
	CMy0414ʵ��22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(&cr);
}


// CMy0414ʵ��22View ���

#ifdef _DEBUG
void CMy0414ʵ��22View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��22Doc* CMy0414ʵ��22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��22Doc)));
	return (CMy0414ʵ��22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��22View ��Ϣ�������


void CMy0414ʵ��22View::OnPopout()
 	// TODO: �ڴ���������������
{
	Dlg1 dlg;
	int r = dlg.DoModal();
	if(r==IDOK)
	{
		UpdateData(true);
		cr.left = dlg.a;
		cr.top = dlg.b;
		cr.right = dlg.c;
		cr.bottom = dlg.d;
	
	}
	Invalidate();

}
