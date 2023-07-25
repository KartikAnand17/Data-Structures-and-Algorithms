// https://practice.geeksforgeeks.org/problems/badefd58bace4f2ca25267ccfe0c9dc844415e90/1?page=2&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> st;
        for(int i=0; i<arr.size(); i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else{
                if((st.top() >= 0 && arr[i] >= 0) || (st.top() < 0 && arr[i] < 0)){
                    st.push(arr[i]);
                }
                else{
                    st.pop();
                }
            }
        }
        while(!arr.empty()){
            arr.pop_back();
        }
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        reverse(arr.begin(),arr.end());

        return arr;

    }
};
