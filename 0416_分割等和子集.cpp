#include <iostream>
#include <algorithm>
#include <time.h>
#include <vector>
#include <numeric>
using namespace std;

// 题目类型
// 动态规划

class Solution {
public:
    //使用动态规划解决
    //时间复杂度xxx
    //空间复杂度xxx
    bool canPartition(vector<int>& nums)
    {
        int n = nums.size();
        int s = accumulate(nums.begin(), nums.end(), 0);
        int max_num = *max_element(nums.begin(), nums.end());
        // 排除奇数和
        if (s%2 == 1)
        {
            return false;
        }

        int target_num = s/2;
        // 最大数超过一半，排除
        if (max_num > target_num)
        {
            return false;
        }

        //创建一个二维vector作为Dp表
        vector<vector<int>> dp(n, vector<int>(target_num + 1, 0));

        for (int i = 0; i < n; i++) 
        {
            dp[i][0] = true;
        }
        dp[0][nums[0]] = true;
        for (int i = 1; i < n; i++) 
        {
            int num = nums[i];
            for (int j = 1; j <= target_num; j++) 
            {
                if (j >= num) 
                {
                    dp[i][j] = dp[i - 1][j] | dp[i - 1][j - num];
                } 
                else 
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n - 1][target_num];
    }
};

int main() {
    //这里放入测试样例
    vector<int> INPUT= {1,5,11,5};
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.canPartition(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
