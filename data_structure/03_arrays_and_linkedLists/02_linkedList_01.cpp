# include <iostream>

using namespace std;

/* 链表节点结构体 */

struct ListNode{
  int val;  // 节点值
  ListNode *next; // 指向下一节点指针
  ListNode(int x) : val(x), next(nullptr){}  // 构造函数
};


/* 双向链表节点结构体 */
struct BidListNode{
  int val;
  BidListNode *next;
  BidListNode * prev;
  BidListNode(int x) : val(x), next(nullptr), prev(nullptr){} 
};

// 链表常用操作

// 2.插入节点
void insert(ListNode *n0, ListNode *p){
  ListNode *n1 = n0->next;
  p->next = n1;
  n0->next = p; 
}

// 3.删除节点
/* 删除链表的节点 n0 之后的首个节点 */
void remove(ListNode *n0){
  if (n0->next == nullptr) return ;
  
  // 方式1
  ListNode *p = n0->next; // p就是要删除的节点
  ListNode *n1 = p->next; // n1 是 p 的下一个节点
  n0->next = n1;  // 让 n0 跳过 p，直接指向 n1

  // 方式2 不推荐,删除的节点资源得不到释放
  // n0->next = n0->next->next;
  delete p;
}

// 4.访问节点
/* 访问链表中索引为 index 的节点 */
ListNode* access(ListNode *head, int index){
  for(int i = 0; i < index; i++){
    if (head == nullptr) return nullptr;
    head = head->next;
    index++;
  }
  return head;
}
// 查找节点
int find(ListNode *head, int target){
  int index = 0;
  while (head != nullptr) {
    if (head->val == target) return index;
    head = head->next;
    index++;
  }
  return -1;

}

int main(){
  // 1.初始化链表
  ListNode* n0 = new ListNode(1);
  ListNode* n1 = new ListNode(3);
  ListNode* n2 = new ListNode(2);
  ListNode* n3 = new ListNode(5);
  ListNode* n4 = new ListNode(4);

  // 构建节点之间的引用
  n0->next = n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;

  // 插入节点

  return 0;
}