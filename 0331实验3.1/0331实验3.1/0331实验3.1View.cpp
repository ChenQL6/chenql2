
// 0331ʵ��3.1View.cpp : CMy0331ʵ��31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0331ʵ��3.1.h"
#endif

#include "0331ʵ��3.1Doc.h"
#include "0331ʵ��3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CString s;


// CMy0331ʵ��31View

IMPLEMENT_DYNCREATE(CMy0331ʵ��31View, CView)

BEGIN_MESSAGE_MAP(CMy0331ʵ��31View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy0331ʵ��31View ����/����

CMy0331ʵ��31View::CMy0331ʵ��31View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0331ʵ��31View::~CMy0331ʵ��31View()
{
}

BOOL CMy0331ʵ��31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0331ʵ��31View ����

void CMy0331ʵ��31View::OnDraw(CDC* pDC)
{
	CMy0331ʵ��31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr(30, 30, 300, 300);
	pDC->Rectangle(&cr);
}


// CMy0331ʵ��31View ��ӡ

BOOL CMy0331ʵ��31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0331ʵ��31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0331ʵ��31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0331ʵ��31View ���

#ifdef _DEBUG
void CMy0331ʵ��31View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331ʵ��31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331ʵ��31Doc* CMy0331ʵ��31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331ʵ��31Doc)));
	return (CMy0331ʵ��31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331ʵ��31View ��Ϣ�������


void CMy0331ʵ��31View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString ss;
	CClientDC dc(this);
	s += (char)nChar;
	dc.TextOutW(50, 80, s);


	CView::OnChar(nChar, nRepCnt, nFlags);
}
