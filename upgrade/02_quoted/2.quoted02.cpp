
# include <iostream>

using namespace std;

/* 引用做函数参数

作用：函数传参时，可以利用引用的技术让形参修饰实参

优点：可以简化指针修改实参
*/

//1. 值传递
void mySwap01(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

//2. 地址传递
void mySwap02(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
}


int main(){

  int a = 10;
  int b = 20;

  // 给值
  mySwap01(a, b);
  cout << "a:" << a << "  b:" << b << endl;

  // 给地址
  mySwap02(&a, &b);
  cout << "a:" << a << "  b:" << b << endl;


  // 给值，只是引用给mySwap中a和b
  mySwap03(a, b);
  cout << "a:" << a << "  b:" << b << endl;
  // 通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单

  system("pause");

  return 0;

}