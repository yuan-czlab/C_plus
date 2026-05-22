# include <iostream>
# include <vector>

using namespace std;

// 定义 ListNode 结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

/* 函数 */
int func(){
  // 执行某些操作
  return 0;
}



/* 常数阶 */
void constant(int n){
  // 常量、变量、对象占用O(1)空间
  const int a = 0;
  int b = 0;
  vector<int> nums(10000);
  ListNode node(0);
}

int main(){
  return 0;

}