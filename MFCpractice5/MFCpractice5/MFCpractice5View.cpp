
// MFCpractice5View.cpp : CMFCpractice5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCpractice5.h"
#endif

#include "MFCpractice5Doc.h"
#include "MFCpractice5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCpractice5View

IMPLEMENT_DYNCREATE(CMFCpractice5View, CView)

BEGIN_MESSAGE_MAP(CMFCpractice5View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCpractice5View ����/����

CMFCpractice5View::CMFCpractice5View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCpractice5View::~CMFCpractice5View()
{
}

BOOL CMFCpractice5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCpractice5View ����

void CMFCpractice5View::OnDraw(CDC* pDC)
{
	CMFCpractice5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CRect A(30, 30, 100, 100);
	pDC->Rectangle(pDoc->A);


	//CRect B(200, 200, 270, 270);
	pDC->Rectangle(pDoc->B);

	//CRect C(400, 400, 500, 500);
	pDC->Rectangle(pDoc->C);

	
}


// CMFCpractice5View ��ӡ

BOOL CMFCpractice5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFCpractice5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFCpractice5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFCpractice5View ���

#ifdef _DEBUG
void CMFCpractice5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCpractice5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCpractice5Doc* CMFCpractice5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCpractice5Doc)));
	return (CMFCpractice5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCpractice5View ��Ϣ�������


void CMFCpractice5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCpractice5Doc *pDoc = GetDocument();
	CString s;
	CClientDC dc(this);

	if (pDoc->A.PtInRect(point))
	{
		pDoc->a = rand() % 150 + 5;
		s.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
		//dc.TextOutW(200, 200, s);
	}
	else
	{
		if (pDoc->B.PtInRect(point))
		{
			pDoc->b = rand() % 150 + 5;
			s.Format(_T(" b=%d"), pDoc->b) ;
			dc.TextOutW(point.x, point.y, s);
		}
		else
		{
			s.Format(_T("�����Ч"));
			dc.TextOutW(point.x, point.y, s);
		}
	}

	CView::OnLButtonDown(nFlags, point);
}


void CMFCpractice5View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCpractice5Doc *pDoc = GetDocument();

	CClientDC dc(this);
	CString s;
	if (pDoc->C.PtInRect(point))
	{
		s.Format(_T("a+b=%d"), pDoc->a+ pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
			s.Format(_T("�����Ч"));
			dc.TextOutW(point.x, point.y, s);
	}

	CView::OnRButtonDown(nFlags, point);
}
