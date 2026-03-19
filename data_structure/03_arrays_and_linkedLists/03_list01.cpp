#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/* 初始化列表 */

// 无初始值
vector<int> nums1;

// 有初始值
vector<int> nums = {1, 3, 2, 5, 4};


int main(){
    /* 1. 访问元素 */
    int num = nums[1];

    /* 更新元素 */
    nums[1] = 0;

    /* 清空列表 */
    nums.clear();
    cout << &nums << endl;

    /* 在尾部添加元素 */

    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(4);

    /* 在中间插入元素 */
    nums.insert(nums.begin() + 3, 6);  // 在索引 3 处插入数字 6

    /* 删除元素 */
    nums.erase(nums.begin() + 3);      // 删除索引 3 处的元素

    /* 遍历列表 */

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        count += nums[i];
        cout << nums[i] << endl;
    }

    /* 直接遍历列表元素 */
    count = 0;
    for (int num : nums) {
        count += num;
        cout << num << endl;
    }

    /* 拼接列表 */
    vector<int> nums1 = {6, 8, 7, 10, 9};
    // 将列表nums1 拼接到nums之后
    nums.insert(nums.end(), nums1.begin(), nums1.end());

    for (int num: nums){
        cout << num << ", ";
    }
    /* 排序列表 */
    sort(nums.begin(), nums.end()); // 排序后，列表元素从小到大排列
    for (int num: nums){
        cout << num << ", ";
    }
    return 0;
}