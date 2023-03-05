//Problem Statement -> https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int initial = 0;
        vector<int> result;
        result.push_back(initial);
        for(int i = 0; i < gain.size(); i++){
            initial = result[i];
            initial = initial + gain[i];
            result.push_back(initial);
            
        }
        int max = INT_MIN;
        for(int i = 0; i<result.size();i++){
            if (result[i] > max){
                max = result[i];
            }
        }
        return max;   
    }
};
