# include<iostream>
using namespace std;

/*

将自定义的结构体放入到数组中方便维护
*/
// 结构体定义
struct student
{
  // 成员列表
  string name; // 姓名
  int age; // 年龄
  int score; // 分数
};

int main()
{
  struct student arr[3] = 
  {
    {"张三", 18, 80},
    {"李四", 19, 60},
    {"王五", 20, 70}

  };
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    cout << "姓名：" << arr[i].name 
    << " 年龄：" << arr[i].age 
    << " 分数：" << arr[i].score << endl;
  }

    return 0;   
}