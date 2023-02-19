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
    int fib(int n)
    {
        if(n < 2)
        {
            return n;
        }
        else
        {   
            int p = 0;
            int q = 1;
            int s = 0;
            for(int i=1; i<n; i++)
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
    int INPUT = 4;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.fib(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
