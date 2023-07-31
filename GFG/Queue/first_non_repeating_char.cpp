// https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1?page=1&difficulty%5B%5D=1&category%5B%5D=Queue&sortBy=submissions

class Solution{
  public:
  		string FirstNonRepeating(string A){
  		    int arr[26] = {0};
  		    string ans = "";
  		    queue<char> q;
  		    for(int i=0;i<A.length();i++){
  		        char ch = A[i];
  		        if(q.empty() && arr[ch - 'a'] == 0){
  		            q.push(ch);
  		            arr[ch - 'a']++;
  		            ans += ch;
  		        }
  		        else{
  		            arr[ch - 'a']++;
  		            q.push(ch);
  		            while(arr[q.front() - 'a'] > 1){
  		                if(q.empty()){
  		                    break;
  		                }
  		                q.pop();
  		            }
  		            if(q.empty()){
  		                ans += '#';
  		            }
  		            else{
  		                ans += q.front();
  		            }
  		        }
  		    }
  		    return ans;
  		}
}
