
// MFC��Ӳ˵���Դ����ʾ����Doc.cpp : CMFC��Ӳ˵���Դ����ʾ����Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC��Ӳ˵���Դ����ʾ����.h"
#endif

#include "MFC��Ӳ˵���Դ����ʾ����Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC��Ӳ˵���Դ����ʾ����Doc

IMPLEMENT_DYNCREATE(CMFC��Ӳ˵���Դ����ʾ����Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFC��Ӳ˵���Դ����ʾ����Doc, CDocument)
END_MESSAGE_MAP()


// CMFC��Ӳ˵���Դ����ʾ����Doc ����/����

CMFC��Ӳ˵���Դ����ʾ����Doc::CMFC��Ӳ˵���Դ����ʾ����Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CMFC��Ӳ˵���Դ����ʾ����Doc::~CMFC��Ӳ˵���Դ����ʾ����Doc()
{
}

BOOL CMFC��Ӳ˵���Դ����ʾ����Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFC��Ӳ˵���Դ����ʾ����Doc ���л�

void CMFC��Ӳ˵���Դ����ʾ����Doc::Serialize(CArchive& ar)
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
void CMFC��Ӳ˵���Դ����ʾ����Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void CMFC��Ӳ˵���Դ����ʾ����Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC��Ӳ˵���Դ����ʾ����Doc::SetSearchContent(const CString& value)
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

// CMFC��Ӳ˵���Դ����ʾ����Doc ���

#ifdef _DEBUG
void CMFC��Ӳ˵���Դ����ʾ����Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC��Ӳ˵���Դ����ʾ����Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC��Ӳ˵���Դ����ʾ����Doc ����
