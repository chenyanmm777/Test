
// cyDoc.h : CcyDoc ��Ľӿ�
//


#pragma once


class CcyDoc : public CDocument
{
protected: // �������л�����
	CcyDoc();
	DECLARE_DYNCREATE(CcyDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CcyDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


