# include<iostream>
// 常量：用于记录程序中不可更改的数据
# define day 7  // 使用define的方式
const int ERROR = -1;  // 使用const的方式 


using namespace std;


int main()
{
    cout << "一周里总共有 " << day << " 天" << endl;
	//day = 8;  //报错，宏常量不可以修改

	//2、const修饰变量
	const int month = 12;
	cout << "一年里总共有 " << month << " 个月份" << endl;
	//month = 24; //报错，常量是不可以修改的

    return 0;
}