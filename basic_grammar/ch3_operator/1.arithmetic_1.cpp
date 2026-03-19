# include<iostream>
# include<string>
# include <typeinfo> 
using namespace std;

int main()
{
    int a = 18;
    int b = 5;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl; 
    cout << a / b << endl; 
    cout << (string)typeid (a / b).name() << endl; // 因为我们的除数和被除数都是整数，结果也会是整数，只取结果的整数部分

    int b1 = 0;
    // cout << a / b << endl;  不能除以0 会报错

    //两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;

    return 0;
}