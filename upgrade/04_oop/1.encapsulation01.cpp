# include<iostream>
using namespace std;
/*

面向对象

在设计类的时候，属性和行为写在一起，表现事物
语法： `class 类名{   访问权限： 属性  / 行为  };`
*/

// 实例1：设计一个圆类， 求园的周长和面积


const double PI = 3.14;


class Circle{

public: // 访问权限， 公共的权限
  // 属性
  int m_r; //半径

  // 行为
  double calculateZC(){
    return 2 * PI * m_r;
  }

private: // 访问权限， 私有的
  
  // 行为：计算面积
  double calculateArea(){
    return PI * m_r * m_r;
  }

};

// **示例2：**设计一个学生类，属性有姓名和学号，
// 可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student{

public:
  void setName(string name){
    m_name = name; 
  }

  void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name:" << m_name << " ID:" << m_id << endl;
	}

public:
  string m_name;
  int m_id;
};

int main(){
  //通过圆类，创建圆的对象
	// c1就是一个具体的圆
	Circle c1;

  c1.m_r = 10;
  cout << "圆的周长：" << c1.calculateZC() << endl;

  // cout << "圆的面积：" << c1.calculateArea() << endl; // 访问不到

  Student stu;
  stu.setName("小明");
  stu.setID(100);
  
  stu.showStudent();

  return 0;
}

