// Problem Statement -> https://leetcode.com/problems/arranging-coins/description/
// BRUTE FORCE APPROACH

class Solution {
public:
    int arrangeCoins(int n) {
        int add = 1;
        int count = 0;
        while(n>=add){
            n = n - add;   
            addition ++;
            count ++;
        }
        return count;
    }
};


// Binary Search Approach

class Solution {
public:
    int arrangeCoins(int n) {
        int start = 1;
        int end = n;
        while(start<=end){
            int long long mid = start + (end-start)/2;
            int long long midf = (mid*(mid+1))/2;
            if(midf == n){
                return mid;
            }
            if(midf>n){
                end= mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return end;
    }
};
