
// �ۺ�ʵ��һView.cpp : C�ۺ�ʵ��һView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ۺ�ʵ��һ.h"
#endif

#include "�ۺ�ʵ��һSet.h"
#include "�ۺ�ʵ��һDoc.h"
#include "�ۺ�ʵ��һView.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��һView

IMPLEMENT_DYNCREATE(C�ۺ�ʵ��һView, CRecordView)

BEGIN_MESSAGE_MAP(C�ۺ�ʵ��һView, CRecordView)
	ON_WM_PAINT()
	ON_EN_CHANGE(IDC_EDIT1, &C�ۺ�ʵ��һView::OnEnChangeEdit1)
	ON_COMMAND(ID_RECORD_FIRST, &C�ۺ�ʵ��һView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C�ۺ�ʵ��һView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C�ۺ�ʵ��һView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C�ۺ�ʵ��һView::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &C�ۺ�ʵ��һView::OnBnClickedButton1)
END_MESSAGE_MAP()

// C�ۺ�ʵ��һView ����/����

C�ۺ�ʵ��һView::C�ۺ�ʵ��һView()
	: CRecordView(IDD_MY_FORM)
	, Name(_T(""))
	, major(_T(""))
	, gender(_T(""))
	, phone(_T(""))
	, address(_T(""))
	, ID(0)
	, Sno(_T(""))
	, year(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C�ۺ�ʵ��һView::~C�ۺ�ʵ��һView()
{
}

void C�ۺ�ʵ��һView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT2, Name);
	DDX_Text(pDX, IDC_EDIT4, major);
	DDX_Text(pDX, IDC_EDIT5, gender);
	DDX_Text(pDX, IDC_EDIT7, phone);
	DDX_Text(pDX, IDC_EDIT8, address);
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT3, Sno);
	DDX_Text(pDX, IDC_EDIT6, year);
}

BOOL C�ۺ�ʵ��һView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C�ۺ�ʵ��һView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_�ۺ�ʵ��һSet;
	CRecordView::OnInitialUpdate();

}


// C�ۺ�ʵ��һView ���

#ifdef _DEBUG
void C�ۺ�ʵ��һView::AssertValid() const
{
	CRecordView::AssertValid();
}

void C�ۺ�ʵ��һView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C�ۺ�ʵ��һDoc* C�ۺ�ʵ��һView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ۺ�ʵ��һDoc)));
	return (C�ۺ�ʵ��һDoc*)m_pDocument;
}
#endif //_DEBUG


// C�ۺ�ʵ��һView ���ݿ�֧��
CRecordset* C�ۺ�ʵ��һView::OnGetRecordset()
{
	return m_pSet;
}



// C�ۺ�ʵ��һView ��Ϣ�������


void C�ۺ�ʵ��һView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	GetDlgItem(IDC_STATIC1)->GetClientRect(&pic_rect);//ȡ��ͼƬ�ؼ�����
	CString filename;
	m_pSet->GetFieldValue(short(8), filename);//�Ӽ�¼����ǰ��¼����ȡ��8���ֶ�ֵ����Ƭ·��������filename
	CImage img;
	img.Load(filename);
	if (!img.IsNull())
	{
		int sx, sy, w, h;
		foo(img, sx, sy, w, h);
		CDC *pDC = GetDlgItem(IDC_STATIC1)->GetDC();//IDC_STATIC1ΪͼƬ�ؼ���ID
		pDC->SetStretchBltMode(HALFTONE);      //ͼ��ʧ��
		img.Draw(pDC->m_hDC, sx, sy, w, h);
		ReleaseDC(pDC);
	}
	else
	{
		MessageBox(_T("Load Error"));
	}
}

void C�ۺ�ʵ��һView::foo(CImage &img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);            //ȡ�ÿͻ���,IDC_STATIC1ΪͼƬ�ؼ���ID
	float rect_ratio = 1.0*rect.Width() / rect.Height();     //����ͻ����Ŀ�߱�
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();   //����ͼƬ�Ŀ�߱�
	if (rect_ratio > img_ratio)                             //����ͻ�����߱ȸ���ͬ���߶�ʱͼƬ�ؼ�����
	{
		h = rect.Height();                                 //�Կͻ����߶�Ϊ�߶�
		w = img_ratio*h;                                   //����������ͼƬ�Ŀ��
		sx = (rect.Width() - w) / 2;                      //���Ͻ��������
		sy = 0;                                          //����ڿͻ�������   y=0
	}
	else
	{
		w = rect.Width();                             //�Կͻ������Ϊ���
		h = w / img_ratio;                             //����������ͼƬ�ĸ߶�
		sx = 0;                                     //����ڿͻ�������   x=0
		sy = (rect.Height() - h) / 2;                //���Ͻ��������
	}

}




void C�ۺ�ʵ��һView::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void C�ۺ�ʵ��һView::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C�ۺ�ʵ��һView::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C�ۺ�ʵ��һView::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C�ۺ�ʵ��һView::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C�ۺ�ʵ��һView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString filename;
	//filename = "C:\\Users\\MI\\Pictures\\001��һ.jpg";
	m_pSet->GetFieldValue(short(8), filename);//�Ӽ�¼����ǰ��¼����ȡ��8���ֶ�ֵ����Ƭ·��������filename
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->getFilename(filename);
	dlg->ShowWindow(1);
}
