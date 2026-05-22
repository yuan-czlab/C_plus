#include<iostream>

using namespace std;

/*for 循环 */

int forloop(int n){
  int res = 0;
  // 循环求和 1 - n
  for (int i = 1; i <= n; i++){
    res += i;
  }
  return res;
}

/* while 循环 */

int whileLoop(int n){
  int res = 0;
  int i = 1;

  while (i <= n){
    res = res + n;
    i++;
  }
  return res;
}
/* while 循环（两次更新） */

int whileLoopII(int n){
  int res = 0;
  int i = 1;

  while (i <= n){
    res += i;
    i++;
    i *= 2;
  }
  return res;
}

int main(){
  // for 循环测试
  cout << forloop(10) << endl;
  
  // while 循环测试
  cout << whileLoop(10) << endl;

  // while two 循环测试
  cout << whileLoopII(10) << endl;


  return 0;
}