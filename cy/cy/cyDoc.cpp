
// cyDoc.cpp : CcyDoc ���ʵ��
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


// CcyDoc ����/����

CcyDoc::CcyDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CcyDoc::~CcyDoc()
{
}

BOOL CcyDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CcyDoc ���л�

void CcyDoc::Serialize(CArchive& ar)
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


// CcyDoc ���

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


// CcyDoc ����
