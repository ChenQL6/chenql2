
// MFC��Ӳ˵���Դ����ʾ����View.cpp : CMFC��Ӳ˵���Դ����ʾ����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��Ӳ˵���Դ����ʾ����.h"
#endif

#include "MFC��Ӳ˵���Դ����ʾ����Doc.h"
#include "MFC��Ӳ˵���Դ����ʾ����View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC��Ӳ˵���Դ����ʾ����View

IMPLEMENT_DYNCREATE(CMFC��Ӳ˵���Դ����ʾ����View, CView)

BEGIN_MESSAGE_MAP(CMFC��Ӳ˵���Դ����ʾ����View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SHOWNAME, &CMFC��Ӳ˵���Դ����ʾ����View::OnShowname)
END_MESSAGE_MAP()

// CMFC��Ӳ˵���Դ����ʾ����View ����/����

CMFC��Ӳ˵���Դ����ʾ����View::CMFC��Ӳ˵���Դ����ʾ����View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC��Ӳ˵���Դ����ʾ����View::~CMFC��Ӳ˵���Դ����ʾ����View()
{
}

BOOL CMFC��Ӳ˵���Դ����ʾ����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC��Ӳ˵���Դ����ʾ����View ����

void CMFC��Ӳ˵���Դ����ʾ����View::OnDraw(CDC* /*pDC*/)
{
	CMFC��Ӳ˵���Դ����ʾ����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC��Ӳ˵���Դ����ʾ����View ��ӡ

BOOL CMFC��Ӳ˵���Դ����ʾ����View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMFC��Ӳ˵���Դ����ʾ����View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMFC��Ӳ˵���Դ����ʾ����View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMFC��Ӳ˵���Դ����ʾ����View ���

#ifdef _DEBUG
void CMFC��Ӳ˵���Դ����ʾ����View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC��Ӳ˵���Դ����ʾ����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC��Ӳ˵���Դ����ʾ����Doc* CMFC��Ӳ˵���Դ����ʾ����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC��Ӳ˵���Դ����ʾ����Doc)));
	return (CMFC��Ӳ˵���Դ����ʾ����Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC��Ӳ˵���Դ����ʾ����View ��Ϣ�������


void CMFC��Ӳ˵���Դ����ʾ����View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("������");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
