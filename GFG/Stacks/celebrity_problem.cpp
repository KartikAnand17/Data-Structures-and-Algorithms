// https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        //step 1: push all persons into stack
        for(int i=0;i<n;i++){
            st.push(i);
        }
        //step 2: take out an element and find a possible celebrity
        while(st.size() != 1){
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            // if a knows b ?
            if (M[a][b]){
                // a is not celebrity, b might be
                st.push(b);
            }
            else{
                // b is not celebrity, a might be
                st.push(a);
            }
        }
        // step 3: check the possible celebrity by verification
        int mightBeCelebrity = st.top(); st.pop();
        
        // Celebrity should not know anyone
        for(int i=0;i<n;i++){
            if(M[mightBeCelebrity][i] != 0){
                return -1;
            }
        }
        // everyone should know celebrity
        for(int i=0;i<n;i++){
            if(M[i][mightBeCelebrity] == 0 && i!= mightBeCelebrity){
                return -1;
            }
        }
        return mightBeCelebrity;
    }
    
};
