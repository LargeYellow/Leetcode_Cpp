#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// 数组 双指针

class Solution {
public:
    //使用双指针解决
    //时间复杂度 n
    //空间复杂度 1
    int removeElement(vector<int>& nums, int val) 
    {
        int n = nums.size();
        int left = 0;
        for (int right=0; right < n; right++)
        {
            if (nums[right] != val)
            {
                nums[left] = nums[right];
                left++;
            }
        }
        return left;
    }
};

int main() {
    //这里放入测试样例
    vector<int> nums = {3,2,2,3};
    int val = 3;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.removeElement(nums, val) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
