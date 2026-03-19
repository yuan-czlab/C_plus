# include <iostream>

using namespace std;
/* 函数占位参数

C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
语法: `返回值类型 函数名 (数据类型){}`

*/

void func(int a, int){
  cout << "this is func" << endl;
}

int main(){
 
  cout << "this is func" << endl;
  return 0;
}