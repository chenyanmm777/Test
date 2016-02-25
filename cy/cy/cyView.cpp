
// cyView.cpp : CcyView 类的实现
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CcyView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CcyView 构造/析构

CcyView::CcyView()
{
	// TODO: 在此处添加构造代码

}

CcyView::~CcyView()
{
}

BOOL CcyView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CcyView 绘制

void CcyView::OnDraw(CDC* /*pDC*/)
{
	CcyDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CcyView 打印


void CcyView::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CcyView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CcyView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CcyView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
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


// CcyView 诊断

#ifdef _DEBUG
void CcyView::AssertValid() const
{
	CView::AssertValid();
}

void CcyView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcyDoc* CcyView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcyDoc)));
	return (CcyDoc*)m_pDocument;
}
#endif //_DEBUG


// CcyView 消息处理程序
