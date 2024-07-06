// You are given a binary array nums. You can do the following operation on the array any number of times (possibly zero): Choose any 3 consecutive elements from the array and flip all of them. Flipping an element means changing its value from 0 to 1, and from 1 to 0. Return the minimum number of operations required to make all elements in nums equal to 1. If it is impossible, return -1.



#include<bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int minOperations(vector<int>& nums) {
    const int n = nums.size();
    int ans = 0;

    for (int i = 0; i + 2 < n; ++i)
      if (nums[i] == 0) {
        nums[i + 1] ^= 1;
        nums[i + 2] ^= 1;
        ++ans;
      }

    return nums[n - 1] == 0 || nums[n - 2] == 0 ? -1 : ans;
  }
};

int main(){
    Solution solve;
    vector<int>nums = {0,1,1,1,0,0};

    cout<<solve.minOperations(nums)<<endl;

    nums = {0,1,1,1};

    cout<<solve.minOperations(nums)<<endl;
}