// https://leetcode.com/problems/backspace-string-compare/description/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty() && s[i] != '#'){
                st.push(s[i]);
            }
            else if(st.empty() && s[i] == '#'){
                continue;
            }
            else if(!st.empty() &&s[i] == '#' ){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        s.clear();
        while(!st.empty()){
            s = s + st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<t.size();i++){
            if(st.empty() && t[i] != '#'){
                st.push(t[i]);
            }
            else if(st.empty() && t[i] == '#'){
                continue;
            }
            else if(!st.empty() &&t[i] == '#' ){
                st.pop();
            }
            else{
                st.push(t[i]);
            }
        }
        t.clear();
        while(!st.empty()){
            t = t + st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        if(s == t){
            return true;
        }
        else{return false;}
    }
};
