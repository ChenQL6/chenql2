
// Dlg1(0407)View.cpp : CDlg10407View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg1(0407).h"
#endif

#include "Dlg1(0407)Doc.h"
#include "Dlg1(0407)View.h"
#include"MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg10407View

IMPLEMENT_DYNCREATE(CDlg10407View, CView)

BEGIN_MESSAGE_MAP(CDlg10407View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg10407View::OnPopout)
END_MESSAGE_MAP()

// CDlg10407View ����/����

CDlg10407View::CDlg10407View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg10407View::~CDlg10407View()
{
}

BOOL CDlg10407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg10407View ����

void CDlg10407View::OnDraw(CDC* /*pDC*/)
{
	CDlg10407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg10407View ��ӡ

BOOL CDlg10407View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDlg10407View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDlg10407View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CDlg10407View ���

#ifdef _DEBUG
void CDlg10407View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg10407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg10407Doc* CDlg10407View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg10407Doc)));
	return (CDlg10407Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg10407View ��Ϣ�������


void CDlg10407View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg1 dlg;
	int t = dlg.DoModal();

	if (t == IDOK)
	{
		CString A, B, C;
		A = dlg.a;
		B = dlg.b;
		C = dlg.c;
	}
}
