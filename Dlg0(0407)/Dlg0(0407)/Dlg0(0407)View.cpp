
// Dlg0(0407)View.cpp : CDlg00407View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Dlg0(0407).h"
#endif

#include "Dlg0(0407)Doc.h"
#include "Dlg0(0407)View.h"
#include "MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg00407View

IMPLEMENT_DYNCREATE(CDlg00407View, CView)

BEGIN_MESSAGE_MAP(CDlg00407View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg00407View::OnPopout)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CDlg00407View ����/����

CDlg00407View::CDlg00407View()
{
	// TODO: �ڴ˴���ӹ������

}

CDlg00407View::~CDlg00407View()
{
}

BOOL CDlg00407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CDlg00407View ����

void CDlg00407View::OnDraw(CDC* /*pDC*/)
{
	CDlg00407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CDlg00407View ��ӡ

BOOL CDlg00407View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDlg00407View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDlg00407View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CDlg00407View ���

#ifdef _DEBUG
void CDlg00407View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg00407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg00407Doc* CDlg00407View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg00407Doc)));
	return (CDlg00407Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg00407View ��Ϣ�������


void CDlg00407View::OnPopout()
{
	// TODO: �ڴ���������������
	/*MyDlg0 dlg;
	int t = dlg.DoModal();

	if (t == IDOK)
	{
		CString ss = _T("�����˳��Ի���");
		ss = dlg.s;
		CString A;
		A.Format(_T("%d"));
		GetDC()->TextOutW(200, 200, ss);
	}*/
	CClientDC dc(this);
	dc.TextOutW(200, 200, _T("�����˳��Ի���"));

}


void CDlg00407View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ


	CView::OnLButtonDblClk(nFlags, point);
}
