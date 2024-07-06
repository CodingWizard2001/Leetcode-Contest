// You are given a binary array nums. You can do the following operation on the array any number of times (possibly zero): Choose any index i from the array and flip all the elements from index i to the end of the array. Flipping an element means changing its value from 0 to 1, and from 1 to 0. Return the minimum number of operations required to make all elements in nums equal to 1.


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int target = 1;

        for (const int num : nums)
        if (num != target) {
            target ^= 1;
            ++ans;
        }

        return ans;
    }
};

int main(){
    Solution solve;
    vector<int>nums = {0,1,1,0,1};

    cout<<solve.minOperations(nums)<<endl;

    nums = {1,0,0,0};

    cout<<solve.minOperations(nums)<<endl;
}