
// 0330课堂实验1（图像编程）Doc.h : CMy0330课堂实验1（图像编程）Doc 类的接口
//


#pragma once


class CMy0330课堂实验1（图像编程）Doc : public CDocument
{
protected: // 仅从序列化创建
	CMy0330课堂实验1（图像编程）Doc();
	DECLARE_DYNCREATE(CMy0330课堂实验1（图像编程）Doc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy0330课堂实验1（图像编程）Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
