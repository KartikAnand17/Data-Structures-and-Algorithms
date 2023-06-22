// problem -> https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSumArrayHelper(vector<int>& v, int start, int end){
        // base case
        int maxLeftSubArraySum = INT_MIN, maxRightSubArraySum = INT_MIN;
        if(start == end) return v[start];
        int mid = start + (end-start)/2;

        // recursive calls
        int LeftSum = maxSumArrayHelper(v,start,mid);
        int RightSum = maxSumArrayHelper(v,mid+1,end);
        
        int LeftSubArraySum = 0, RightSubArraySum=0;
        for(int i = mid; i>= start; i--){
            LeftSubArraySum += v[i];
            if(LeftSubArraySum > maxLeftSubArraySum){
                maxLeftSubArraySum = LeftSubArraySum;
            }
        }
        for(int i = mid+1; i <= end; i++){
            RightSubArraySum += v[i];
            if(RightSubArraySum > maxRightSubArraySum){
                maxRightSubArraySum = RightSubArraySum;
            }

        }
        int totalSubArraySum = maxLeftSubArraySum + maxRightSubArraySum;
        return max(LeftSum, max(RightSum,totalSubArraySum));
    }
    int maxSubArray(vector<int>& nums) {
        return maxSumArrayHelper(nums, 0, nums.size()-1);
    }
};
