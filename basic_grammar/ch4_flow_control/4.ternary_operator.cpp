#include<iostream>

using namespace std;

int main()
{

    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;  // 当a > b为真返回a，当a > b为假返回b
    // C++中三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 100;

    cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

    return 0;
}