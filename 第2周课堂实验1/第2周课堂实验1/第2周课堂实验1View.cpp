
// ��2�ܿ���ʵ��1View.cpp : C��2�ܿ���ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��2�ܿ���ʵ��1.h"
#endif

#include "��2�ܿ���ʵ��1Doc.h"
#include "��2�ܿ���ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��2�ܿ���ʵ��1View

IMPLEMENT_DYNCREATE(C��2�ܿ���ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C��2�ܿ���ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��2�ܿ���ʵ��1View ����/����

C��2�ܿ���ʵ��1View::C��2�ܿ���ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��2�ܿ���ʵ��1View::~C��2�ܿ���ʵ��1View()
{
}

BOOL C��2�ܿ���ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��2�ܿ���ʵ��1View ����

void C��2�ܿ���ʵ��1View::OnDraw(CDC* pDC)
{
	C��2�ܿ���ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

}


// C��2�ܿ���ʵ��1View ��ӡ

BOOL C��2�ܿ���ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��2�ܿ���ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��2�ܿ���ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��2�ܿ���ʵ��1View ���

#ifdef _DEBUG
void C��2�ܿ���ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��2�ܿ���ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��2�ܿ���ʵ��1Doc* C��2�ܿ���ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��2�ܿ���ʵ��1Doc)));
	return (C��2�ܿ���ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��2�ܿ���ʵ��1View ��Ϣ�������


void C��2�ܿ���ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��2�ܿ���ʵ��1Doc* pDoc = GetDocument();
	int r = rand() % 50 + 5;
	CClientDC dc(this);
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);
	dc.Ellipse(&cr);

	CView::OnLButtonDown(nFlags, point);
}
