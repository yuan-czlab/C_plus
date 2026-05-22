# include <iostream>
using namespace std;

/*
继承中的对象模型

**问题：**从父类继承过来的成员，哪些属于子类对象中？

*/
class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C; //私有成员只是不能被子类访问，但它依然属于子类对象的一部分
};

class Son :public Base
{
public:
    int m_D;

};


