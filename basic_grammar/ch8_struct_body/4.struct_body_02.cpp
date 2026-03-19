# include<iostream>
# include<string>
using namespace std;


struct student
{
  string name;
  int age;
  int score;
};

struct teacher
{
  // 成员列表
  int id; // 职工编号
  string name; // 教师姓名
  int age; // 教师年龄
  struct student stu; // 学生
};

int main()
{
  struct teacher t1;
  t1.id = 10000;
  t1.name = "老王";
  t1.age = 40;

  t1.stu.name = "zhangsan";
  t1.stu.age = 18;
  t1.stu.score = 100;

  cout << "教师 职工编号： " << t1.id << 
  " 姓名： " << t1.name << 
  " 年龄： " << t1.age << endl;
	
	cout << "辅导学员 姓名： " << t1.stu.name << 
  " 年龄：" << t1.stu.age << 
  " 考试分数： " << t1.stu.score << endl;
  
  return 0;   
}