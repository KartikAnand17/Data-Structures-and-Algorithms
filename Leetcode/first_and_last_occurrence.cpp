//problem statement -> https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1,-1};
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end-start)/2;
        vector<int> ans{-1,-1};
        int first_occ;
        int last_occ;
        while(start <= end){
            if(nums[mid] == target){
                ans[0] = mid;
                first_occ = mid;
                end = mid - 1;
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else if(target < nums[mid]){
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        start = 0;
        end = nums.size() - 1;
        mid = start + (end-start)/2;
        while(start <= end){
            if(nums[mid] == target){
                ans[1] = mid;
                last_occ = mid;
                start =  mid + 1;
            }
            else if(target > nums[mid]){
                start = mid + 1;
            }
            else if(target < nums[mid]){
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
    return ans;
    }
};
