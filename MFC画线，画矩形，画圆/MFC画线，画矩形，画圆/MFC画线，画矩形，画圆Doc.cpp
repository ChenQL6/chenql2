
// MFC���ߣ������Σ���ԲDoc.cpp : CMFC���ߣ������Σ���ԲDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC���ߣ������Σ���Բ.h"
#endif

#include "MFC���ߣ������Σ���ԲDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC���ߣ������Σ���ԲDoc

IMPLEMENT_DYNCREATE(CMFC���ߣ������Σ���ԲDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFC���ߣ������Σ���ԲDoc, CDocument)
END_MESSAGE_MAP()


// CMFC���ߣ������Σ���ԲDoc ����/����

CMFC���ߣ������Σ���ԲDoc::CMFC���ߣ������Σ���ԲDoc()
{
	// TODO: �ڴ����һ���Թ������
	flag = 0;

}

CMFC���ߣ������Σ���ԲDoc::~CMFC���ߣ������Σ���ԲDoc()
{
}

BOOL CMFC���ߣ������Σ���ԲDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFC���ߣ������Σ���ԲDoc ���л�

void CMFC���ߣ������Σ���ԲDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMFC���ߣ������Σ���ԲDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMFC���ߣ������Σ���ԲDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC���ߣ������Σ���ԲDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMFC���ߣ������Σ���ԲDoc ���

#ifdef _DEBUG
void CMFC���ߣ������Σ���ԲDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC���ߣ������Σ���ԲDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC���ߣ������Σ���ԲDoc ����
