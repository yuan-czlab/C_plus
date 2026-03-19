# include<iostream>
using namespace std;

/*
bool   1个字节
只有true(1) false(0)这两个值


*/

int main()
{
    bool flag = true;
	cout << flag << endl; // 1

	flag = false;
	cout << flag << endl; // 0

	cout << "size of bool = " << sizeof(bool) << endl; //1
	
    return 0;
}