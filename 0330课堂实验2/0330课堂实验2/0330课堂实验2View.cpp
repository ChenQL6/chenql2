
// 0330����ʵ��2View.cpp : CMy0330����ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "0330����ʵ��2.h"
#endif

#include "0330����ʵ��2Doc.h"
#include "0330����ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330����ʵ��2View

IMPLEMENT_DYNCREATE(CMy0330����ʵ��2View, CView)

BEGIN_MESSAGE_MAP(CMy0330����ʵ��2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330����ʵ��2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330����ʵ��2View ����/����

CMy0330����ʵ��2View::CMy0330����ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy0330����ʵ��2View::~CMy0330����ʵ��2View()
{
}

BOOL CMy0330����ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy0330����ʵ��2View ����

void CMy0330����ʵ��2View::OnDraw(CDC* pDC)
{
	CMy0330����ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	this->GetClientRect(&cr);
	a.x = (cr.right - cr.left) / 2;
	a.y = (cr.bottom - cr.top) / 2;
	if (flag == 1)
	{
		img.Draw(pDC->m_hDC, a.x - img.GetWidth() / 2, a.y - img.GetWidth() / 2, img.GetWidth(), img.GetHeight());
	}
}

// CMy0330����ʵ��2View ���

#ifdef _DEBUG
void CMy0330����ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330����ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330����ʵ��2Doc* CMy0330����ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330����ʵ��2Doc)));
	return (CMy0330����ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330����ʵ��2View ��Ϣ�������


void CMy0330����ʵ��2View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//trueΪ�򿪣�falseΪ���Ϊ
	int r = cfd.DoModal();  //�����Ի���
	if (r == IDOK)
	{
		filename = cfd.GetPathName(); Invalidate();
		img.Load(filename);
		flag = 1;
	}
}
