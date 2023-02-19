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
    int climbStairs(int n) 
    {
        if (n<4)
        {
            return n;
        }
        else
        {
            int p = 2;
            int q = 3;
            int s;
            for(int i=3; i<n; i++)
            {
                s = p + q;
                p = q;
                q = s;
            }
            return s;
        }
    }
};

int main() {
    //这里放入测试样例
    int INPUT = 5;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.climbStairs(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
