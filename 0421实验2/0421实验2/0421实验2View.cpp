
// 0421ʵ��2View.cpp : CMy0421ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0421ʵ��2.h"
#endif

#include "0421ʵ��2Doc.h"
#include "0421ʵ��2View.h"
#include "MyDlg.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0421ʵ��2View

IMPLEMENT_DYNCREATE(CMy0421ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy0421ʵ��2View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0421ʵ��2View::OnPopout)
END_MESSAGE_MAP()

// CMy0421ʵ��2View ����/����

CMy0421ʵ��2View::CMy0421ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0421ʵ��2View::~CMy0421ʵ��2View()
{
}

BOOL CMy0421ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0421ʵ��2View ����

void CMy0421ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	CMy0421ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy0421ʵ��2View ���

#ifdef _DEBUG
void CMy0421ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0421ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0421ʵ��2Doc* CMy0421ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0421ʵ��2Doc)));
	return (CMy0421ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0421ʵ��2View ��Ϣ�������

void CMy0421ʵ��2View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg cfd;
	int r = cfd.DoModal();
	if (r == IDOK)
	{

	}

}
