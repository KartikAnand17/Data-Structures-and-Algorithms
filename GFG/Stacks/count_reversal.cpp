// https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1


int countRev (string s)
{
    if(s.size() & 1){
        return -1;
    }
    int ans=0;
    stack<char> st;
    for(char curr:s){
        if(curr == '{'){
            st.push(curr);
        }
        else{
            if (!st.empty() && st.top() == '{'){
                st.pop();
            }
            else{
                st.push(curr);
            }
        }
    }
    while(!st.empty()){
        char curr1 = st.top(); st.pop();
        char curr2 = st.top(); st.pop();
        if(curr1 == curr2){
            ans++;
        }
        else{
            ans += 2;
        }
    }
    return ans;
    
}
