// You are given an integer array nums. In one operation, you can add or subtract 1 from any element of nums. Return the minimum number of operations to make all elements of nums divisible by 3.



#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] % 3 != 0) count++;
        }
        return count;
    }
};

int main(){
    Solution solve;
    vector<int>nums = {1,2,3,4};

    cout<<solve.minimumOperations(nums)<<endl;

    nums = {3,6,9};

    cout<<solve.minimumOperations(nums)<<endl;
}