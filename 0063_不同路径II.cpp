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
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m = obstacleGrid.size();
        int n = obstacleGrid.at(0).size();
        vector<vector<int>> f(m, vector<int>(n));
        if (obstacleGrid[0][0] == 1)
        {
            return 0;
        }
        else
        {
            f[0][0] = 1;
        }

        for (int i = 1; i < m; i++)
        {
            if (obstacleGrid[i][0] != 1 && f[i-1][0] != 0)
            {
                f[i][0] = 1;
            }
            else
            {
                f[i][0] = 0;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (obstacleGrid[0][i] != 1 && f[0][i-1] != 0)
            {
                f[0][i] = 1;
            }
            else
            {
                f[0][i] = 0;
            }
        }

        for (int i = 1; i < m;i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (obstacleGrid[i][j] != 1)
                {
                    f[i][j] = f[i-1][j]+f[i][j-1];
                }
                else
                {
                    f[i][j] = 0;
                }
                
            }
        }
        return f[m-1][n-1];
    }
};

int main() {
    //这里放入测试样例
    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.uniquePathsWithObstacles(obstacleGrid) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
