// Problem Statement -> https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int sum;
        vector<int> result;
        while(start<end){
            sum = nums[start] + nums[end];
            if(sum == target){
                result.push_back(start + 1);
                result.push_back(end + 1);
                return result;
            }
            else if(sum > target){
                end --;
            }
            else{
                start ++;
            }
        }
        return result;
    }
};
