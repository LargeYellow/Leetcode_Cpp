#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// 动态规划

class Solution {
public:
    //使用动态规划解决
    //时间复杂度 n
    //空间复杂度 1
    int minCostClimbingStairs(vector<int>& cost)
    {
        int n = cost.size();
        if (n<=2)
        {
            return min(cost[0],cost[1]);
        }
        else
        {
            int p = cost[0];
            int q = cost[1];
            int s ;
            int r = 0;
            for(int i=2; i<n; i++)
            {
                s = min(cost[i]+p , cost[i]+q);
                r = min(q, s);
                p = q;
                q = s;
            }
            return r;
        }
    }
};

int main() {
    //这里放入测试样例
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.minCostClimbingStairs(cost) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
