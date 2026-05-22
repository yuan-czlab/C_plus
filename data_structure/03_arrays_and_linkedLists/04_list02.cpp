# include <iostream>
using namespace std;

/* 列表类 */
class MyList{
private:
  int *arr; // 数组（存储列表元素）
  int arrCapacity = 10; // 列表容量
  int arrSize = 0; // 列表长度（当前元素数量）
  int extendRatio = 2;  // 每次列表扩容倍数

public:
  /* 构造方法 */
  MyList(){
    arr = new int[arrCapacity];
  }

  /* 析构方法 */
  ~MyList(){
    delete[] arr;

  }

  /* 获取列表长度（当前元素数量）*/
  int size(){
    return arrSize;
  }

  /* 获取列表容量 */
  int capacity(){
    return arrCapacity;
  }

  /* 访问元素 */
  int get(int index){
    // 索引如果越界，则抛出异常，下同
    if (index < 0 || index  >= size()) throw out_of_range("索引越界");
    return arr[index];
  }

  /* 更新元素 */
  void set(int index, int num){
    if (index  < 0 || index >= size()) throw out_of_range("索引越界");
    arr[index] = num;
  }

  /* 在尾部添加元素 */
  void add(int num){
    // 元素数量超出容量时，触发扩容机制
    if (size() == capacity()) ;
  }

  /* 列表扩容 */
  void extendCapacity(){
    // 创建一个给长度为原数组 extendRatio倍的新数组
    int newCapacity = capacity() * extendRatio;
    int *tmp = arr;
    arr = new int[newCapacity];
    
  }

};



int main(){

  return 0;
}