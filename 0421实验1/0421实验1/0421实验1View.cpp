
// 0421ʵ��1View.cpp : CMy0421ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0421ʵ��1.h"
#endif

#include "0421ʵ��1Doc.h"
#include "0421ʵ��1View.h"

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0421ʵ��1View

IMPLEMENT_DYNCREATE(CMy0421ʵ��1View, CView)

BEGIN_MESSAGE_MAP(CMy0421ʵ��1View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0421ʵ��1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0421ʵ��1View ����/����

CMy0421ʵ��1View::CMy0421ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0421ʵ��1View::~CMy0421ʵ��1View()
{
}

BOOL CMy0421ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0421ʵ��1View ����

void CMy0421ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	CMy0421ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0421ʵ��1View ��ӡ

BOOL CMy0421ʵ��1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy0421ʵ��1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy0421ʵ��1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy0421ʵ��1View ���

#ifdef _DEBUG
void CMy0421ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0421ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0421ʵ��1Doc* CMy0421ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0421ʵ��1Doc)));
	return (CMy0421ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0421ʵ��1View ��Ϣ�������


void CMy0421ʵ��1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(_T("D:\\abc.txt"));
		ofs << CT2A(filename.GetString());
	}
}
