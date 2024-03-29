// problem -> https://leetcode.com/problems/remove-all-occurrences-of-a-substring/


class Solution {
public:
    void removeOCCRE(string &s, string &part){
        int found = s.find(part);
        if(found != string::npos){
            // part string has been located in string s
            string left_part = s.substr(0,found);
            string right_part = s.substr(found + part.size(), s.size());
            s = left_part + right_part;
            removeOCCRE(s,part);
        }
        else{
            // base case
            // all the occurrences of part have been removed
            return;
        }
    }

    string removeOccurrences(string s, string part) {
        removeOCCRE(s,part);
        return s;
    }
};
