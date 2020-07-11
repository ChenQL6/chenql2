
// 综合实验四Set.cpp : C综合实验四Set 类的实现
//

#include "stdafx.h"
#include "综合实验四.h"
#include "综合实验四Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验四Set 实现

// 代码生成在 2020年7月8日, 19:19

IMPLEMENT_DYNAMIC(C综合实验四Set, CRecordset)

C综合实验四Set::C综合实验四Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	m_nFields = 6;
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString C综合实验四Set::GetDefaultConnect()
{
	return _T("DSN=\x7efc\x5408\x5b9e\x9a8c\x56db;DBQ=C:\\Users\\16932\\Documents\\Database1.mdb;DefaultDir=C:\\Users\\16932\\Documents;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C综合实验四Set::GetDefaultSQL()
{
	return _T("[学生信息表]");
}

void C综合实验四Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Text(pFX, _T("[学号]"), column2);
	RFX_Text(pFX, _T("[年龄]"), column3);
	RFX_Text(pFX, _T("[手机号码]"), column4);
	RFX_Text(pFX, _T("[照片地址]"), column5);

}
/////////////////////////////////////////////////////////////////////////////
// C综合实验四Set 诊断

#ifdef _DEBUG
void C综合实验四Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C综合实验四Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

