
// 0323ʵ��2View.cpp : CMy0323ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0323ʵ��2.h"
#endif

#include "0323ʵ��2Doc.h"
#include "0323ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323ʵ��2View

IMPLEMENT_DYNCREATE(CMy0323ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy0323ʵ��2View, CView)
END_MESSAGE_MAP()

// CMy0323ʵ��2View ����/����

CMy0323ʵ��2View::CMy0323ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0323ʵ��2View::~CMy0323ʵ��2View()
{
}

BOOL CMy0323ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0323ʵ��2View ����

void CMy0323ʵ��2View::OnDraw(CDC* pDC)
{
	CMy0323ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int r ;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->a.x = (cr.left + cr.right) / 2;
	pDoc->a.y = (cr.top + cr.bottom) / 2;
	if (cr.bottom - cr.top>cr.right - cr.left)
		r = (cr.right - cr.left) / 2;
	else
		r = (cr.bottom + cr.top) / 2;
	for (int i = 1; i <= 10; i++)
	{
		CPen newpen(PS_SOLID, 3, RGB(200, 150, 100));
		CPen *oldpen = pDC->SelectObject(&newpen);

		pDC->Ellipse((cr.right - cr.left) / 2 - r, (cr.bottom - cr.top) / 2 - r, (cr.right - cr.left) / 2 + r, (cr.bottom - cr.top) / 2 + r);
		r -= 5;
		pDC->SelectObject(oldpen);
	}

}


// CMy0323ʵ��2View ���

#ifdef _DEBUG
void CMy0323ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323ʵ��2Doc* CMy0323ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323ʵ��2Doc)));
	return (CMy0323ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323ʵ��2View ��Ϣ�������
