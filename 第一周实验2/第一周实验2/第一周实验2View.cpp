
// ��һ��ʵ��2View.cpp : C��һ��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��һ��ʵ��2.h"
#endif

#include "��һ��ʵ��2Doc.h"
#include "��һ��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��һ��ʵ��2View

IMPLEMENT_DYNCREATE(C��һ��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C��һ��ʵ��2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��һ��ʵ��2View ����/����

C��һ��ʵ��2View::C��һ��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��һ��ʵ��2View::~C��һ��ʵ��2View()
{
}

BOOL C��һ��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��һ��ʵ��2View ����

void C��һ��ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C��һ��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��һ��ʵ��2View ��ӡ

BOOL C��һ��ʵ��2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��һ��ʵ��2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��һ��ʵ��2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��һ��ʵ��2View ���

#ifdef _DEBUG
void C��һ��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C��һ��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��һ��ʵ��2Doc* C��һ��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��һ��ʵ��2Doc)));
	return (C��һ��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��һ��ʵ��2View ��Ϣ�������


void C��һ��ʵ��2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��һ��ʵ��2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	dc.TextOutW(200, 200, pDoc->s);

	CView::OnLButtonDown(nFlags, point);
}
