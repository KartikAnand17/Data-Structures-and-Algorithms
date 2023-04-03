## Problem Statement -> https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty%5B%5D=0&status%5B%5D=solved&category%5B%5D=Arrays&sortBy=submissions

class Solution:
    def findMissing(self, arr, n):
        diff = (arr[n-1] - arr[0])//n
        i = 0
        j = i + 1
        while(j<n):
            if arr[j] - arr[i] != diff:
                ans = arr[i] + diff
                return ans
            else:
                i += 1
                j += 1
