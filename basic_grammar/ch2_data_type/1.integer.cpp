# include<iostream>
using namespace std;

/*
整数类型
short 2
int 4
long  8
long long  8


*/
int main()
{
    // sizeof函数
    // 使用sizeof关键字可以统计数据类型所占内存大小 以字节为单位
    cout << "short 类型所占内存空间为： " << sizeof(short) << endl;

	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;

	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;

	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;
    return 0;
}