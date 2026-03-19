# include<iostream>
using namespace std;


// 函数的定义
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a = 10;
	int b = 10;
	//调用add函数
	int sum = add(a, b);//调用时的a，b称为实际参数，简称实参
	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add(a, b);
	cout << "sum = " << sum << endl;
    return 0;
}