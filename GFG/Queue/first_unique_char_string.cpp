// https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        int count = 0;
        int freq[26] = {0};
        queue<int> q;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            freq[ch - 'a']++;
            q.push(i);
        }
        while(!q.empty()){
            if(freq[s[q.front()] - 'a'] > 1){
                q.pop();
            }
            else{
                return q.front();
            }
        }
        return -1;
    }
};
