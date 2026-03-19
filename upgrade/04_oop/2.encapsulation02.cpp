# include<iostream>
using namespace std;
/*
封装意义二：

类在设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：

1. public        公共权限   类内可以访问  类外可以访问
2. protected     保护权限   类内可以访问  类外不可以访问
3. private       私有权限   类内可以访问  类外不可以访问
*/

class Person{

public:
  string m_name;

protected:
  string m_car;


private:
  int m_password;

public:
  void func(){
    m_name = "张三";
    m_car = "摩托车";
    m_password = 123456;

  }
};

int main(){
  Person p;
  p.m_name = "李四";
  //p.m_Car = "奔驰";  //保护权限类外访问不到
	//p.m_Password = 123; //私有权限类外访问不到
  p.func();

  cout << p.m_name << endl;

  return 0;
}

/*
struct和class区别

在C++中 struct和class唯一的**区别**就在于 **默认的访问权限不同**
区别：

* struct 默认权限为公共
* class   默认权限为私有
*/