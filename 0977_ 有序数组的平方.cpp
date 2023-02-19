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
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0, j = n - 1, pos = n - 1; i <= j;) {
            if (nums[i] * nums[i] > nums[j] * nums[j]) {
                ans[pos] = nums[i] * nums[i];
                ++i;
            }
            else {
                ans[pos] = nums[j] * nums[j];
                --j;
            }
            --pos;
        }
        return ans;
    }
};

int main() {
    //这里放入测试样例
    vector<int> nums = {-4,-1,0,3,10};
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    vector<int> results = solution.sortedSquares(nums);
    for (int j=0; j < results.size(); j++)
    {
        cout<<results[j]<<" ";
    }
    // cout << result << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
