
// DB201800Set.cpp : CDB201800Set 类的实现
//

#include "stdafx.h"
#include "DB201800.h"
#include "DB201800Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB201800Set 实现

// 代码生成在 2020年5月9日, 12:36

IMPLEMENT_DYNAMIC(CDB201800Set, CRecordset)

CDB201800Set::CDB201800Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 4;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CDB201800Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868;DBQ=D:\\Database6.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CDB201800Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void CDB201800Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[字段1]"), m_1);
	RFX_Text(pFX, _T("[字段2]"), m_2);
	RFX_Text(pFX, _T("[字段3]"), m_3);
	RFX_Text(pFX, _T("[字段4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CDB201800Set 诊断

#ifdef _DEBUG
void CDB201800Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CDB201800Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

