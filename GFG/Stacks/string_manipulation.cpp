// https://practice.geeksforgeeks.org/problems/string-manipulation3706/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        stack<string> st;
        int answer = 0;
        for(int i=0;i<v.size();i++){
            if(st.empty()){
                st.push(v[i]);
            }
            else{
                if(st.top() == v[i]){
                    st.pop();
            }
                else{
                    st.push(v[i]);
                }
            }

        }
        while(!st.empty()){
            st.pop();
            answer++;
        }
        return answer;
    } 
};
