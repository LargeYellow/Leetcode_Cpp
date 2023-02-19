#include <iostream>
#include<time.h>
#include <vector>
using namespace std;

// 题目类型
// 判断回文

class Solution {
public:
    //使用...解决
    //时间复杂度
    //空间复杂度
    bool isPalindrome(int x) 
    {
        // 特殊情况：
        // 如上所述，当 x < 0 时，x 不是回文数。
        // 同样地，如果数字的最后一位是 0，为了使该数字为回文，
        // 则其第一位数字也应该是 0
        // 只有 0 满足这一属性
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // 当数字长度为奇数时，我们可以通过 revertedNumber/10 去除处于中位的数字。
        // 例如，当输入为 12321 时，在 while 循环的末尾我们可以得到 x = 12，revertedNumber = 123，
        // 由于处于中位的数字不影响回文（它总是与自己相等），所以我们可以简单地将其去除。
        return x == revertedNumber || x == revertedNumber / 10;
    }

    //使用...解决
    //时间复杂度
    //空间复杂度
    int method2(int x) 
    {
        return 0;
    }
};

int main() {
    long long INPUT = 999999999999999;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.isPalindrome(INPUT) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;
    
    system("pause");
    return 0;
}