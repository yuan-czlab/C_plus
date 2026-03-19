# include<iostream>
# include<string>
using namespace std;

/*
string 字符串
两种方式 C方式和C++方式
1. char str1[] = "hello world";
2. string str = "hello world";
 */
int main()
{
    char str1[] = "hello world";
	cout << str1 << endl;

    string str = "hello world";
	cout << str << endl;
    str = "hello world world";
	cout << str << endl;
    return 0;
}