// https://leetcode.com/problems/find-pivot-index/description/
class Solution {
    public int pivotIndex(int[] nums) {
        int totalsum = 0;
        int leftsum = 0;
        int rightsum = 0;
        for(int ele : nums){
            totalsum += ele;
        }
        for(int i=0;i<nums.length;i++){
            if(totalsum-leftsum-nums[i] == leftsum){
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
}
