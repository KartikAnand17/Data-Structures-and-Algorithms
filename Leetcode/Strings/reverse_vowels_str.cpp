// https://leetcode.com/problems/reverse-vowels-of-a-string/

class Solution {
public:
    bool checkVowel(char a)
    {
        char ch = tolower(a);
        int v = ch;
        if(v == 97 || v == 101 || v == 105 || v == 111 || v == 117 )
        {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j)
        { 
            if(checkVowel(s[i]) && checkVowel(s[j]))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            } 
            else if(!checkVowel(s[i]))
            {
                i++;
            } 
            else{
                j--;
            }
        }
        return s;
    }
};
