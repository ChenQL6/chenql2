
// 0413ʵ��1View.cpp : CMy0413ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0413ʵ��1.h"
#endif

#include "0413ʵ��1Doc.h"
#include "0413ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413ʵ��1View

IMPLEMENT_DYNCREATE(CMy0413ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0413ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0413ʵ��1View ����/����

CMy0413ʵ��1View::CMy0413ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0413ʵ��1View::~CMy0413ʵ��1View()
{
}

BOOL CMy0413ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413ʵ��1View ����

void CMy0413ʵ��1View::OnDraw(CDC* pDC)
{
	CMy0413ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	cr.left = x - 60;
	cr.top = y - 100;
	cr.right = x + 300;
	cr.bottom = y + 100;

	pDC->Rectangle(cr);
}


// CMy0413ʵ��1View ��ӡ

BOOL CMy0413ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0413ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0413ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0413ʵ��1View ���

#ifdef _DEBUG
void CMy0413ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413ʵ��1Doc* CMy0413ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413ʵ��1Doc)));
	return (CMy0413ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413ʵ��1View ��Ϣ�������


void CMy0413ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	ReleaseCapture();
	flag = 0;
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CMy0413ʵ��1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;

	CView::OnLButtonUp(nFlags, point);
}
