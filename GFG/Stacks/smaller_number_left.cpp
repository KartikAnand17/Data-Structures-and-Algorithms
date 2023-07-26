// https://practice.geeksforgeeks.org/problems/smallest-number-on-left3403/1?page=1&difficulty%5B%5D=1&category%5B%5D=Stack&sortBy=submissions

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int> st;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(st.empty()){
                ans.push_back(-1);
                st.push(a[i]);
            }
            else{
                while(!st.empty()){
                    if(st.top() >= a[i]){
                        st.pop();

                    }
                    else{
                        ans.push_back(st.top());
                        st.push(a[i]);
                        break;
                    }
                }
            }
            if(st.empty()){
                st.push(a[i]);
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
