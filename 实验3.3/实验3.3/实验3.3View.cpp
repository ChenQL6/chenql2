
// ʵ��3.3View.cpp : Cʵ��33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.3.h"
#endif

#include "ʵ��3.3Doc.h"
#include "ʵ��3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��33View

IMPLEMENT_DYNCREATE(Cʵ��33View, CView)

BEGIN_MESSAGE_MAP(Cʵ��33View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cʵ��33View ����/����

Cʵ��33View::Cʵ��33View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

Cʵ��33View::~Cʵ��33View()
{
}

BOOL Cʵ��33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��33View ����

void Cʵ��33View::OnDraw(CDC* pDC)
{
	Cʵ��33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

		SetTimer(1, 200, NULL);

	pDC->Ellipse(pDoc->cr);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

// Cʵ��33View ��ӡ

BOOL Cʵ��33View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��33View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��33View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cʵ��33View ���

#ifdef _DEBUG
void Cʵ��33View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��33Doc* Cʵ��33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��33Doc)));
	return (Cʵ��33Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��33View ��Ϣ�������


void Cʵ��33View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��33Doc* pDoc = GetDocument();
	CRect A;
	GetClientRect(&A);  //��ÿͻ�����A

	if (pDoc->cr.bottom < A.bottom)
	{
		pDoc->cr.top += 20;
		pDoc->cr.bottom += 20;
	}
	else while(pDoc->cr.top>0)
	{
		pDoc->cr.top -= 30;
		pDoc->cr.bottom -= 30;
	}
	/*int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();*/

	Invalidate();

	CView::OnTimer(nIDEvent);
}
