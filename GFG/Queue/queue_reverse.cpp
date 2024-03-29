// https://practice.geeksforgeeks.org/problems/queue-reversal/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Queue&sortBy=submissions

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }
};
