// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� WEEK103_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// WEEK103_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef WEEK103_EXPORTS
#define WEEK103_API __declspec(dllexport)
#else
#define WEEK103_API __declspec(dllimport)
#endif

// �����Ǵ� week10ʵ���ʵ��3.dll ������
class WEEK103_API Cweek10ʵ���ʵ��3 {
public:
	Cweek10ʵ���ʵ��3(void);
	// TODO:  �ڴ�������ķ�����
};
class  WEEK103_API FAC {
public:
	float convert(float deg);
};

extern WEEK103_API int nweek10ʵ���ʵ��3;

WEEK103_API int fnweek10ʵ���ʵ��3(void);
extern WEEK103_API int nweek10Test3;
WEEK103_API int factorial(int n);
WEEK103_API int fnweek10ʵ���ʵ��3(void);
