
// 0413ʵ��4View.cpp : CMy0413ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0413ʵ��4.h"
#endif

#include "0413ʵ��4Doc.h"
#include "0413ʵ��4View.h"
#include"MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413ʵ��4View

IMPLEMENT_DYNCREATE(CMy0413ʵ��4View, CView)

BEGIN_MESSAGE_MAP(CMy0413ʵ��4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CMy0413ʵ��4View::OnPopout)
END_MESSAGE_MAP()

// CMy0413ʵ��4View ����/����

CMy0413ʵ��4View::CMy0413ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0413ʵ��4View::~CMy0413ʵ��4View()
{
}

BOOL CMy0413ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0413ʵ��4View ����

void CMy0413ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	CMy0413ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0413ʵ��4View ��ӡ

BOOL CMy0413ʵ��4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0413ʵ��4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0413ʵ��4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0413ʵ��4View ���

#ifdef _DEBUG
void CMy0413ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413ʵ��4Doc* CMy0413ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413ʵ��4Doc)));
	return (CMy0413ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413ʵ��4View ��Ϣ�������


void CMy0413ʵ��4View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString A, C;
		int B;
		A = dlg.s1;
		B = dlg.s2;
		C = dlg.s3;
	}
}
