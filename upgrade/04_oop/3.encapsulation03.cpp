# include<iostream>
using namespace std;
/*
成员属性设置为私有
优点1：将所有成员属性设置为私有，可以自己控制读写权限

优点2：对于写权限，我们可以检测数据的有效性

*/
class Person{
public:

  //姓名设置可读可写
	void setName(string name) {
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}


	//获取年龄 
	int getAge() {
		return m_Age;
	}
	//设置年龄
	void setAge(int age) {
		if (age < 0 || age > 200) {
			cout << "年龄错误" << endl;
			return;
		}
		m_Age = age;
	}

	//身份证号码设置为只写
	void setId(string id) {
		m_id = id;
	}
private:

	string m_Name; //可读可写  姓名
	
	int m_Age; //只读  年龄

	string m_id; //只写  身份证号码
};





int main(){
  Person p;
  //姓名设置
	p.setName("张三");
	cout << "姓名： " << p.getName() << endl;

	//年龄设置
	p.setAge(50);
	cout << "年龄： " << p.getAge() << endl;

  p.setId("0101010010101");
  // cout << "身份证号码:" << p.m_id << endl; // 只写属性，不可以读取

  return 0;
  
}
