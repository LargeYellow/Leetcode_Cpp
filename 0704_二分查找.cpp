#include <iostream>
#include<time.h>
#include <vector>
using namespace std;

// 题目类型
// 二分

class Solution {
public:
    //使用二分法解决
    //时间复杂度 logn
    //空间复杂度 1
    int search(vector<int>& nums, int target) 
    {
        int left = 0, right = nums.size()-1;
        while(left<=right)
        {
            int mid = (right-left)/2+left;
            int num = nums[mid];
            if (num == target)
            {
                return mid;

            }
            else if (num > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    //这里放入测试样例
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    Solution solution;

    // 记录程序开始时间
    clock_t start,finish;
    double totaltime;
    start=clock();

    cout << solution.search(nums, target) << endl;

    // 记录程序运行时长并输出
    finish=clock();
    totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    cout << "总计运行时间："<<totaltime<<endl;

    system("pause");
    return 0;
}
