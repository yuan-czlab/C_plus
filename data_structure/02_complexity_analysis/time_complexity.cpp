/* 时间复杂度 */

# include<iostream>
# include<vector>


using namespace std;
/* 常数阶 */
int constant(int n){
  int count = 0;
  int size = 100000;
  for (int i = 0; i < size; i++){
    count++;
  }
  return count;
}

/* 线性阶 */
int linear(int n){
  int count = 0;
  for (int i = 0; i < n; i++){
    count++;
  }
  return count;
}

/* 线性阶（遍历数组）*/
int arrayTraversal(vector<int> &nums){
  int count = 0;
  // 循环次数与数组长度成正比
  for (int num: nums){
    count++;
  }
  return count;
}

/* 平方阶 */
int quadratic(int n){
  int count = 0;
  // 循环次数与数据大小 n 成平方关系
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      count++;
    }
  }
  return count;
}


/* 平方阶(冒泡排序) */
int bubbleSort(vector<int> &nums){
  int count = 0; //  计数器
  // 外循环： 未排序区间为[0, i]
  for (int i = nums.size() - 1; i > 0; i--){
    // 内循环：将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
    for (int j = 0; j < i; j++){
      if (nums[j] > nums[j + 1]){
        // 交换 nums[j] 与 nums[j + 1]
        int tmp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = tmp;
        count += 3;  // 元素交换包含 3 个单元操作
      }
    }
  }
  return count;
}

/* 指数阶(循环实现)*/
int exponential(int n){
  int count = 0, base = 1;
  for (int i = 0; i < n; i++){
    for(int j = 0; j < base; j ++){
      count++;
    }
    base *= 2;
  }
  // count = 1 + 2 + 4 + 8 + .. + 2^(n-1) = 2^n - 1
  return count;
}

/* 指数阶（递归实现）*/
int expRecur(int n){
  if ( n == 1){
    return 1;
  }
  // n次分裂，一分为二
  return expRecur(n - 1) + expRecur(n - 1) + 1;
}
/* 对数阶 */
int logarithmic(int n){
  int count = 0;
  while(n > 1){
    n = n / 2;
    count++;
  }
  return count;
}

/* 对数阶 （递归实现）*/
int logRecur(int n){
  if (n <= 1) return 0;
  return logRecur(n / 2) + 1;
}

/* 线性对数阶 */
int linearLogRecur(int n){
  if (n <= 1) return 1;
  // 操作总数为log_{2} ^{n}
  int count = linearLogRecur(n / 2) + linearLogRecur(n / 2);
  // 操作总数为 n
  for (int i = 0; i < n; i++){
    count++;
  }
  return count;
}

/* 阶乘阶O(n!) */
int factorialRecur(int n){
  if(n == 0) return 1;
  int count = 0;
  // 从1个分裂出n个
  for (int i = 0; i < n; i++){
    count += factorialRecur(n - 1);
  }
  return count;
}

int main(){

  vector<int> nums = {5,4,6,7,3,2,1,8,9,10};
  cout << constant(10) << endl;
  cout << linear(10) << endl;
  cout << arrayTraversal(nums) << endl;
  cout << quadratic(10) << endl;
  cout << bubbleSort(nums) << endl;
  cout << exponential(10) << endl;
  cout << expRecur(10) << endl;
  cout << linearLogRecur(10) << endl;
  cout << factorialRecur(10) << endl;


  

  return 0;
}