# include<iostream>
using namespace std;

/*
char 字符   1字节

注意：字符只能用''表示  字符串只能用 ""表示
字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

*/
int main()
{
    char ch = 'a';

    cout << ch << endl;
    cout << sizeof(char) << endl;
    //ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符
    cout << (int)ch << endl;  //查看字符a对应的ASCII码
	ch = 97; //可以直接用ASCII给字符型变量赋值
	cout << ch << endl;
    return 0;
}