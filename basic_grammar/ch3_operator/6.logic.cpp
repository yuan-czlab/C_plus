# include<iostream>
using namespace std;

/*
! 非
&& 与
|| 或



*/
int main()
{
    int a = 10;

	cout << !a << endl; // 0

	cout << !!a << endl; // 1

    int b = 10;
    cout << (a && b) << endl;// 1
    cout << (a || b) << endl;// 1

    b = 0;
    cout << (a && b) << endl;// 0 
    cout << (a || b) << endl;// 1 

    a = 0;
    b = 0;
    cout << (a && b) << endl;// 0
    cout << (a || b) << endl;// 0
    return 0;
}