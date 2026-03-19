# include<iostream>
using namespace std;

/*
cin关键字
作用：用于从键盘获取数据



*/
int main()
{
    // 输入一个整数
    int a = 0;
    cout << "请输入一个整数：";
    cin >> a;
    cout << a << endl;

    // 输入一个浮点数
    float b = 0.0;
    cout << "请输入一个浮点数:";
    cin >> b;
    cout << b << endl;

    // 输入一个字符
    char c = 0;
    cout << "请输入一个字符：";
    cin >> c;
    cout << c << endl;

    // 输入一个字符串
    string str;
    cout << "请输入一个字符串:";
    cin >> str;
    cout << str << endl;

    // 布尔类型
    bool flag = true;
    cout << "请输入布尔型变量：";
    cin >> flag;
    cout << flag << endl;
    
    return 0;
}