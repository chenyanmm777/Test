
// cyView.cpp : CcyView ���ʵ��
//

#include "stdafx.h"
#include "cy.h"

#include "cyDoc.h"
#include "cyView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcyView

IMPLEMENT_DYNCREATE(CcyView, CView)

BEGIN_MESSAGE_MAP(CcyView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CcyView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CcyView ����/����

CcyView::CcyView()
{
	// TODO: �ڴ˴���ӹ������

}

CcyView::~CcyView()
{
}

BOOL CcyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CcyView ����

void CcyView::OnDraw(CDC* /*pDC*/)
{
	CcyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CcyView ��ӡ


void CcyView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CcyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CcyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CcyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CcyView::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CcyView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CcyView ���

#ifdef _DEBUG
void CcyView::AssertValid() const
{
	CView::AssertValid();
}

void CcyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcyDoc* CcyView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcyDoc)));
	return (CcyDoc*)m_pDocument;
}
#endif //_DEBUG


// CcyView ��Ϣ�������
