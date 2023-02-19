#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

// 题目类型
// XXX XXX XXX

class Solution {
public:
    //使用...解决
    //时间复杂度xxx
    //空间复杂度xxx
    int method1(int x) 
    {
        return 0;
    }

    //使用...解决
    //时间复杂度xxx
    //空间复杂度xxx
    int method2(int x) 
    {
        return 0;
    }
};

int main() {
    //这里放入测试样例
    int INPUT = 0;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.method1(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
