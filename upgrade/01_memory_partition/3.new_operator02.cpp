/* 开辟数组 */
# include <iostream>

using namespace std;

int main(){

  int * arr = new int[10];
  for (int i = 0; i < 10; i++){
    arr[i] = i + 100;
  }

  for (int i = 0; i < 10; i++){
    cout << arr[i] << endl;
  }

  cout << "arr=" << *arr << endl;  // 第一个元素
  cout << "arr=" << arr << endl;  // 第一个元素的地址

  // 释放数组 delete 后加[]
  delete[] arr;
  system("pause");
  return 0;
}