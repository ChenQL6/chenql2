
// ��2�ܿ���ʵ��4View.cpp : C��2�ܿ���ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��2�ܿ���ʵ��4.h"
#endif

#include "��2�ܿ���ʵ��4Doc.h"
#include "��2�ܿ���ʵ��4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��2�ܿ���ʵ��4View

IMPLEMENT_DYNCREATE(C��2�ܿ���ʵ��4View, CView)

BEGIN_MESSAGE_MAP(C��2�ܿ���ʵ��4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// C��2�ܿ���ʵ��4View ����/����

C��2�ܿ���ʵ��4View::C��2�ܿ���ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

C��2�ܿ���ʵ��4View::~C��2�ܿ���ʵ��4View()
{
}

BOOL C��2�ܿ���ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��2�ܿ���ʵ��4View ����

void C��2�ܿ���ʵ��4View::OnDraw(CDC* pDC)
{
	C��2�ܿ���ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect cr;
	this->GetClientRect(&cr);
	pDC->Ellipse(cr);
	CBrush newBrush(RGB(200, 100, 180));
	CBrush *oldBrush = pDC->SelectObject(&newBrush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldBrush);
}


// C��2�ܿ���ʵ��4View ��ӡ

BOOL C��2�ܿ���ʵ��4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��2�ܿ���ʵ��4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��2�ܿ���ʵ��4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��2�ܿ���ʵ��4View ���

#ifdef _DEBUG
void C��2�ܿ���ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void C��2�ܿ���ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��2�ܿ���ʵ��4Doc* C��2�ܿ���ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��2�ܿ���ʵ��4Doc)));
	return (C��2�ܿ���ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// C��2�ܿ���ʵ��4View ��Ϣ�������
