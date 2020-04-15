
// ʵ��3.2��0317��View.cpp : Cʵ��32��0317��View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ʵ��3.2��0317��.h"
#endif

#include "ʵ��3.2��0317��Doc.h"
#include "ʵ��3.2��0317��View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cʵ��32��0317��View

IMPLEMENT_DYNCREATE(Cʵ��32��0317��View, CView)

BEGIN_MESSAGE_MAP(Cʵ��32��0317��View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// Cʵ��32��0317��View ����/����

Cʵ��32��0317��View::Cʵ��32��0317��View()
{
	// TODO: �ڴ˴���ӹ������

}

Cʵ��32��0317��View::~Cʵ��32��0317��View()
{
}

BOOL Cʵ��32��0317��View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cʵ��32��0317��View ����

void Cʵ��32��0317��View::OnDraw(CDC* pDC)
{
	Cʵ��32��0317��Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->cr);
}


// Cʵ��32��0317��View ��ӡ

BOOL Cʵ��32��0317��View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cʵ��32��0317��View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cʵ��32��0317��View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cʵ��32��0317��View ���

#ifdef _DEBUG
void Cʵ��32��0317��View::AssertValid() const
{
	CView::AssertValid();
}

void Cʵ��32��0317��View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cʵ��32��0317��Doc* Cʵ��32��0317��View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cʵ��32��0317��Doc)));
	return (Cʵ��32��0317��Doc*)m_pDocument;
}
#endif //_DEBUG


// Cʵ��32��0317��View ��Ϣ�������


void Cʵ��32��0317��View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cʵ��32��0317��Doc* pDoc = GetDocument();
	pDoc->cr.left = 400;
	pDoc->cr.top = 300;
	pDoc->cr.right = 800;
	pDoc->cr.bottom = 500;
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void Cʵ��32��0317��View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cc;
	CClientDC dc(this);
	this->GetClientRect(&cc);
	Cʵ��32��0317��Doc* pDoc = GetDocument();
	switch(nChar)
	{ 
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 20;
			pDoc->cr.right -= 20;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right<=(cc.right-cc.left))
		{
			pDoc->cr.left += 20;
			pDoc->cr.right += 20;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 20;
			pDoc->cr.bottom -= 20;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (cc.bottom - cc.top))
		{
			pDoc->cr.top += 20;
			pDoc->cr.bottom += 20;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.top > 0 && pDoc->cr.left > 0)
		{
			pDoc->cr.top -= 20;
			pDoc->cr.left -= 20;
		}
		break;
	case VK_END:
		if (pDoc->cr.bottom > pDoc->cr.top&&(pDoc->cr.right>pDoc->cr.left))
		{
			pDoc->cr.top += 20;
			pDoc->cr.left += 20;
		}
		break;
	}
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
