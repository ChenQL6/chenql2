
// 0414ʵ��1View.cpp : CMy0414ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0414ʵ��1.h"
#endif

#include "0414ʵ��1Doc.h"
#include "0414ʵ��1View.h"
#include "MyDlg.h"
#include "MyDlg2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414ʵ��1View

IMPLEMENT_DYNCREATE(CMy0414ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0414ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0414ʵ��1View::OnFileOpen)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CMy0414ʵ��1View::OnPopout)
END_MESSAGE_MAP()

// CMy0414ʵ��1View ����/����

CMy0414ʵ��1View::CMy0414ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������
	filename = "";
}

CMy0414ʵ��1View::~CMy0414ʵ��1View()
{
}

BOOL CMy0414ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0414ʵ��1View ����

void CMy0414ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy0414ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

}


// CMy0414ʵ��1View ��ӡ

BOOL CMy0414ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0414ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0414ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0414ʵ��1View ���

#ifdef _DEBUG
void CMy0414ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414ʵ��1Doc* CMy0414ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414ʵ��1Doc)));
	return (CMy0414ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414ʵ��1View ��Ϣ�������


void CMy0414ʵ��1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r = IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
	}
}


void CMy0414ʵ��1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true); //�����ļ����ڶ���(cdf)
	int r = cfd.DoModal();//��������ʾ����
	CClientDC dc(this);
	if (r = IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy0414ʵ��1View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	dlg.s = filename;//���ļ��������Ի������(dlg)�ı༭�ؼ�(   .s)
	UpdateData(false);//��������   ��̨��ǰ̨
	dlg.DoModal();//��ʾ����
	CString s;
	s = filename;

}
