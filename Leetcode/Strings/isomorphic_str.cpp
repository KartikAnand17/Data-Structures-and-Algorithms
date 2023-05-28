// https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0}; // mapping of each character of language 's' to language 't'
        bool isCharsMapped[256] = {0}; //stores if t[i] character already mapped with s[i]
        for(int i = 0; i< s.size();i++)
        {
            if(hash[s[i]] == 0 && isCharsMapped[t[i]] == 0){
                hash[s[i]] = t[i];
                isCharsMapped[t[i]] = true;
            }    
        } 
        for(int i = 0 ; i<s.size();i++)
        {
            if(char(hash[s[i]]) != t[i]){
                return false;
            }
        }  
        return true; 
        }
};
