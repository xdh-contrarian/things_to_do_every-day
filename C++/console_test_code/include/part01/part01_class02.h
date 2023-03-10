#include <string>

using namespace std;

typedef struct tagSScreenPhysicsSize
{
	long x;
	long y;
}SScreenPhysicsSize;

class CPart01Class02Test
{
public:
	CPart01Class02Test();
	~CPart01Class02Test();

	static void setStaticVariable(int val);
	int			getStaticVariable();
	void		setName(string name);



public:
	string		m_sName;
private:
	static int  m_iTestVariable;

};

class CPart01Class02
{
public:
	CPart01Class02() {};
	~CPart01Class02() {};

	// 疑问1：包含静态成员变量和修改变量值的静态函数，是否以后每个实例的值都是改变后的值
	// 实验证明：静态成员变量和静态成员函数 已经存储到静态存储区，打断点从实例已经看不到这个成员了
	// 所以每个实例都可访问这个静态成员变量，值都一样。仿佛变成了类公共变量一样
	void				prove01();
	// windows 下 获取从屏物理尺寸大小
	void				getScreenScreenPhysicsSize(SScreenPhysicsSize& master, SScreenPhysicsSize& slave);
	void				getIntArrByteNum();




private:
	CPart01Class02Test		m_cTest01;
	CPart01Class02Test		m_cTest02;
};
