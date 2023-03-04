// problem statement :- https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/


#include <iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int target, int start, int end){
  // binary search code 
  int mid = start + (end-start)/2;
  while(start<=end){
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] > target){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return -1;
}
int infiniteBinarySearch(vector<int> arr, int target){
  int start = 0;
  int end = 1;
  // condition for target to lie in the range
  while(target > arr[end]){
    // new start
    int temp = end + 1;
    // new end
    end = end +(end - start + 1);
    start = temp;
  }
  return BinarySearch(arr,target,start,end);
}

int main(){
  // we assue that the array is infinite and we don't know the size. Hence we cannot use the size function.
  vector<int> arr{2,3,4,5,6,7,8,10,11,12,15,20,23};
  int target = 15;
  int result = infiniteBinarySearch(arr,target); 
  cout << result;
}
