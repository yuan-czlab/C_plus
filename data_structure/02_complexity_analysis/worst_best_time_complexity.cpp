# include <iostream>
# include <vector>
# include <chrono>
#include <algorithm>
#include <random>

using namespace std;

/* 生成一个数组，元素为 { 1, 2, ..., n }，顺序被打乱 */
vector<int> randomNumbers(int n){
  // 生成数组 nums = { 1, 2, 3, ..., n }
  vector<int> nums(n);

  for (int i = 0; i < n; i++){
    nums[i] = i + 1;
  }
  // 使用系统时间生成随机种子
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  // 随机打乱数组元素
  shuffle(nums.begin(), nums.end(), default_random_engine(seed));
  return nums;
}

/* 查找数组 nums 中数字 1 所在索引 */
int findOne(vector<int> &nums){
  for (int i = 0; i < nums.size(); i++){
    // 当元素 1 在数组头部时，达到最佳时间复杂度 O(1)
    // 当元素 1 在数组尾部时，达到最差时间复杂度 O(n)
    if (nums[i] == 1) return 1;
  }
  return -1;
}


int main(){
  vector<int> nums = randomNumbers(10);
  cout << findOne(nums) << endl;
  
  return 0;
}

