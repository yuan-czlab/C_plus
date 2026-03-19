/* new 操作符 */
# include <iostream>


using namespace std;

int * func(){
  int *a = new int(10);
  return a;
}


int main(){

  int *p = func();

  cout << *p << endl;
  cout << *p << endl;

  delete p;
  //cout << *p << endl; //报错，释放的空间不可访问

  system("pause");

  return 0;
}