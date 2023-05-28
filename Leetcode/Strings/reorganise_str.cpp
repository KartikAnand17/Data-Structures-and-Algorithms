// https://leetcode.com/problems/reorganize-string/

class Solution {
public:
    string reorganizeString(string s) {
        int hashTable[26] = {0};
        for(int i = 0 ; i< s.size();i++)
        {
            hashTable[s[i] - 'a']++;
        }
        // find the most frequent character
        char most_freq;
        int max_freq = INT_MIN;
        for(int i = 0; i<26;i++){
            if (hashTable[i] > max_freq){
                max_freq = hashTable[i];
                most_freq = i + 'a';
            }
        }
        // placing max freq character adjacently
        int index = 0;
        while(max_freq > 0 && index < s.size()){
            s[index] = most_freq;;
            max_freq--;
            index += 2;
        }
        if(max_freq !=0)
        {
            return "";
        }
        hashTable[most_freq - 'a'] = 0;

         // placing rest of characters
         for(int i=0; i<26;i++)
         {
             while(hashTable[i] > 0)
             {
                 index = index >=s.size() ? 1:index; // if index goes out of bound -> get index to 1.
                 s[index] = i + 'a';
                 hashTable[i]--;
                 index += 2;
             }
         }
         return s;
    }
};
