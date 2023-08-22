// https://leetcode.com/problems/running-sum-of-1d-array/description/

class Solution {
    public int[] runningSum(int[] nums) {
        int arr[] = new int[nums.length];
        int pf = 0;
        for(int i=0; i<nums.length;i++){
            pf = pf + nums[i];
            arr[i] = pf;
        }
        return arr;
    }
}
