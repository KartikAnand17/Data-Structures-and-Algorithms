// Problem Statement -> https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int binarySearch(vector<int> arr, int target,int start, int end){
        int mid = start + (end - start)/2;
        while(start<=end){
            if(arr[mid] == target){
                return mid;
            }
            else if(target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start)/2;
        }
        return -1;
    }

    int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e){
        if( mid+1 < arr.size() && arr[mid] > arr[mid +1]){
        return mid;
        }
        if(mid-1 >= 0 && arr[mid-1] > arr[mid]){
        return mid - 1;
        }
        if(arr[s] >= arr[mid]){
        e = mid - 1;
        }
        else{
        s = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    }
    int search(vector<int>& nums, int target) {
        int pivot_index = findPivot(nums);
        if(target >= nums[0] && target <=nums[pivot_index]){
            int ans = binarySearch(nums,target,0,pivot_index);
            return ans;
        }
        if(pivot_index+1 < nums.size() && target >= nums[pivot_index+1] && target <= nums[nums.size() - 1]){
            int ans = binarySearch(nums,target,pivot_index+1,nums.size() - 1);
            return ans;
        }
        return -1;   
    }
};
