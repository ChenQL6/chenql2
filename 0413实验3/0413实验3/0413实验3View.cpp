
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy0413ʵ��3View ����/����

CMy0413ʵ��3View::CMy0413ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

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

void CMy0413ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	CMy0413ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0413ʵ��3View ��ӡ

BOOL CMy0413ʵ��3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0413ʵ��3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0413ʵ��3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
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
