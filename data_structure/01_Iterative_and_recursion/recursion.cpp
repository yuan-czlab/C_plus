/*  递归  */

# include "iostream"

using namespace std;

int recur(int n){
  // 终止条件
  if (n == 1) return 1;

  // 递:递归调用
  int res = recur(n - 1);

  // 归:返回结果
  return n + res;
}

/* 尾递归 */
int tailRecur(int n, int res){
  // 终止条件
  if (n == 0) return res;
  // 尾递归调用
  return tailRecur(n - 1, res + n);

}

/* 斐波那契数列：数列 */
int fib(int n){
  // 终止条件 f(1) = 0, f(2) = 2
  if (n == 1 || n == 2) return n - 1;

  // 递归调用f(n) = f(n - 1) + f(n - 2)
  int res = fib(n - 1) + fib(n - 2);
  // 返回结果
  return res; 
}

int main(){
  // 测试递归

  cout << recur(10) << endl;
  cout << fib(10) << endl;


  return 1;
}