/*
运算符重载

运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
*/
// 加号运算符重载

# include <iostream>

using namespace std;

class Person{

public:
  Person(){};

  Person(int a, int b)
  {
    this->m_A = a;
    this->m_B = b;
  }
  // 成员函数实现 + 号运算符重载
  Person operator + (const Person& p){
    Person temp;
    temp.m_A = this->m_A + p.m_A;
    temp.m_B = this->m_B + p.m_B;
    return temp;
  }

public:
  int m_A;
  int m_B;

};

// 运算符重载 可以发生函数重载
Person operator + (const Person &p2, int val)
{
  Person temp;
  temp.m_A = p2.m_A + val;
  temp.m_B = p2.m_B + val;
  return temp;
}

void test(){
  Person p1(10, 10);
  Person p2(20, 20);

  // 成员函数方式
  Person p3 = p2 + p1; // 相当于 p2.operaor+(p1)
  cout << "m_A: " << p3.m_A << "  m_B: " << p3.m_B << endl;


  Person p4 = p3 + 10; // 相当于 operator+(p3,10)
  cout << "m_A: " << p4.m_A << "  m_B: " << p4.m_B << endl;
}


int main()
{
  test();
  return 0;
}
/*

总结1：对于内置的数据类型的表达式的的运算符是不可能改变的

总结2：不要滥用运算符重载

*/