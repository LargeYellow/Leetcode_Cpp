#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// 双指针

class Solution {
public:
    //使用双指针解决
    //时间复杂度 n
    //空间复杂度 1
    int minSubArrayLen(int s, vector<int>& nums) {
            int n = nums.size();
            if (n == 0) {
                return 0;
            }
            int ans = INT_MAX;
            int start = 0, end = 0;
            int sum = 0;
            while (end < n) {
                sum += nums[end];
                while (sum >= s) {
                    ans = min(ans, end - start + 1);
                    sum -= nums[start];
                    start++;
                }
                end++;
            }
            if (ans == INT_MAX)
            {
                return 0;
            }
            else
            {
                return ans;
            }
        }
};

int main() {
    //这里放入测试样例
    int target = 7;
    vector<int> nums = {2,3,1,2,4,3};
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.minSubArrayLen(target, nums)  << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
