
// ��2��ʵ��3View.cpp : C��2��ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��2��ʵ��3.h"
#endif

#include "��2��ʵ��3Doc.h"
#include "��2��ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��2��ʵ��3View

IMPLEMENT_DYNCREATE(C��2��ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C��2��ʵ��3View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// C��2��ʵ��3View ����/����

C��2��ʵ��3View::C��2��ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

C��2��ʵ��3View::~C��2��ʵ��3View()
{
}

BOOL C��2��ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��2��ʵ��3View ����

void C��2��ʵ��3View::OnDraw(CDC* pDC)
{
	C��2��ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int r;
	CRect cr;
	CClientDC dc(this);
	this->GetClientRect(&cr);
	dc.Ellipse(cr);

}


// C��2��ʵ��3View ��ӡ

BOOL C��2��ʵ��3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��2��ʵ��3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��2��ʵ��3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��2��ʵ��3View ���

#ifdef _DEBUG
void C��2��ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C��2��ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��2��ʵ��3Doc* C��2��ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��2��ʵ��3Doc)));
	return (C��2��ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��2��ʵ��3View ��Ϣ�������
