// https://leetcode.com/problems/sliding-window-maximum/description/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;

        // first window answer
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }

        // store answer for first window
        ans.push_back(nums[dq.front()]);

        // remaining windows processing
        for(int i=k; i<nums.size(); i++){
            // out of window elements removal
            if(!dq.empty() && i-dq.front() >= k){
                dq.pop_front();
            }

            // remove smaller elements
            while(!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);

            //current windown answer to be stored in ans
            ans.push_back(nums[dq.front()]);
        }
        return ans;

    }
};
