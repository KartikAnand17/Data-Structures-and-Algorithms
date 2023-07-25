// https://practice.geeksforgeeks.org/problems/print-bracket-number4058/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    vector<int> ans;
	    stack<pair<char,int>> st;
	    int count = 0;
	    for(int i=0;i<S.size();i++){
	        if(S[i] == '('){
	            count++;
	            pair<char,int> p;
	            p.first = S[i];
	            p.second = count;
	            ans.push_back(p.second);
	            st.push(p);
	        }
	        else if(S[i] == ')' && st.top().first == '('){
	            ans.push_back(st.top().second);
	            st.pop();
	        }
	    }
	    return ans;
	}
};
