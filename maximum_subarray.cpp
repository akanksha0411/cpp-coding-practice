// Given an integer array nums, find the contiguous subarray (containing at least one number) 
// which has the largest sum and return its sum.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
// Using Kadane's algorithm. Only comparing the element itself at
// any index i and element itself combined with the previous
// maximum sub array. 
    // O(N) time complexity.
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int individual_sum = nums[0]; 
        for(int i=1; i<nums.size(); i++){
            individual_sum = max(nums[i], individual_sum+nums[i]);
            if(individual_sum>max_sum){
                max_sum = individual_sum;
            }
        }
    return max_sum;
    }
};

int main(){
    vector<int> v = {2, 3, -1, -4, 4, 8, 19};

    Solution x = Solution();
    cout << x.maxSubArray(v);
}