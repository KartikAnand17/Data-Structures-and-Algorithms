// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(auto curr:s){
            if(!st.empty() && st.top() == curr){
                st.pop();
            }
            else{
                st.push(curr);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = ans + st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;   
    }
};
