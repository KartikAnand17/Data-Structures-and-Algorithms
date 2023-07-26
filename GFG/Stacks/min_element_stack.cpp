// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1?page=1&difficulty%5B%5D=1&category%5B%5D=Stack&sortBy=submissions
class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           stack<int> st = s;
           int ans = INT_MAX;
           if(st.empty()){
               return -1;
           }
           while(!st.empty()){
               int curr = st.top();
               ans = min(curr,ans);
               st.pop();
           }
           return ans;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty()){
               return -1;
           }
           int y = s.top();
           s.pop();
           return y;
       }
       
       /*push element x into the stack*/
       void push(int x){
           s.push(x);
       }
};
