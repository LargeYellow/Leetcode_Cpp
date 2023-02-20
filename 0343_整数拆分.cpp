#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// 动态规划

class Solution {
public:
    //使用动态规划解决
    //时间复杂度 n^2
    //空间复杂度 n
    int integerBreak(int n) 
    {
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<=n; i++)
        {
            int CurMax = 0;
            for(int j=1; j<i; j++)
            {
                CurMax = max(CurMax,max(j*(i-j), j*dp[i-j]));  // 当前i下最大值与新的j可以得到最大值做比较
            }
            dp[i] = CurMax;
        }
        return dp[n];
    }
};

int main() {
    //这里放入测试样例
    int INPUT = 10;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.integerBreak(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
