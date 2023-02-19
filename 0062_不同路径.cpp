#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// 动态规划

class Solution {
public:
    //使用动态规划解决
    //时间复杂度 mn
    //空间复杂度 mn
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> f(m, vector<int>(n));
        for (int i = 0; i<m; i++)
        {
            f[i][0] = 1;
        }
        for (int j=0; j<n; j++)
        {
            f[0][j] = 1;
        }
        for (int i=1; i<m; i++)
        {
            for (int j=1; j<n; j++)
            {
                f[i][j] = f[i-1][j] + f[i][j-1];
            }
        }
        return f[m-1][n-1];
    }
};

int main() {
    //这里放入测试样例
    int m = 3;
    int n = 7;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.uniquePaths(m, n) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
