
// �ۺ�ʵ��һSet.cpp : C�ۺ�ʵ��һSet ���ʵ��
//

#include "stdafx.h"
#include "�ۺ�ʵ��һ.h"
#include "�ۺ�ʵ��һSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ۺ�ʵ��һSet ʵ��

// ���������� 2020��7��10��, 11:52

IMPLEMENT_DYNAMIC(C�ۺ�ʵ��һSet, CRecordset)

C�ۺ�ʵ��һSet::C�ۺ�ʵ��һSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}

// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C�ۺ�ʵ��һSet::GetDefaultConnect()
{
	return _T("DBQ=D:\\\x5b66\x751f\x4fe1\x606f\x6570\x636e\x5e93.mdb;DefaultDir=D:\\;Driver={Microsoft Access Driver (*.mdb)};DriverId=25;FIL=MS Access;FILEDSN=D:\\\x5b66\x751f\x4fe1\x606f\x6570\x636e\x6e90.dsn;MaxBufferSize=2048;MaxScanRows=8;PageTimeout=5;SafeTransactions=0;Threads=3;UID=admin;UserCommitSync=Yes;");
}

CString C�ۺ�ʵ��һSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void C�ۺ�ʵ��һSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Text(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[��Ƭ·��]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// C�ۺ�ʵ��һSet ���

#ifdef _DEBUG
void C�ۺ�ʵ��һSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void C�ۺ�ʵ��һSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

