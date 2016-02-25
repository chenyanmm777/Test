
// cyDoc.cpp : CcyDoc 类的实现
//

#include "stdafx.h"
#include "cy.h"

#include "cyDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcyDoc

IMPLEMENT_DYNCREATE(CcyDoc, CDocument)

BEGIN_MESSAGE_MAP(CcyDoc, CDocument)
END_MESSAGE_MAP()


// CcyDoc 构造/析构

CcyDoc::CcyDoc()
{
	// TODO: 在此添加一次性构造代码

}

CcyDoc::~CcyDoc()
{
}

BOOL CcyDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// CcyDoc 序列化

void CcyDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}


// CcyDoc 诊断

#ifdef _DEBUG
void CcyDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CcyDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CcyDoc 命令
