
// 0413ʵ��2View.cpp : CMy0413ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0413ʵ��2.h"
#endif

#include "0413ʵ��2Doc.h"
#include "0413ʵ��2View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413ʵ��2View

IMPLEMENT_DYNCREATE(CMy0413ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy0413ʵ��2View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy0413ʵ��2View::OnPopout)
END_MESSAGE_MAP()

// CMy0413ʵ��2View ����/����

CMy0413ʵ��2View::CMy0413ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0413ʵ��2View::~CMy0413ʵ��2View()
{
}

BOOL CMy0413ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413ʵ��2View ����

void CMy0413ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy0413ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0413ʵ��2View ��ӡ

BOOL CMy0413ʵ��2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0413ʵ��2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0413ʵ��2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0413ʵ��2View ���

#ifdef _DEBUG
void CMy0413ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413ʵ��2Doc* CMy0413ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413ʵ��2Doc)));
	return (CMy0413ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413ʵ��2View ��Ϣ�������


void CMy0413ʵ��2View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		int A, B, C;
		A = dlg.a;
		B = dlg.b;
	}
}
