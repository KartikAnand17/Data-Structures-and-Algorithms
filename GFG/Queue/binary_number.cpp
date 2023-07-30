// https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Queue&sortBy=submissions

vector<string> generate(int N)
{
	vector<string> ans;
	queue<string> q;
	q.push("1");
	for(int i=0;i<N;i++){
	    ans.push_back(q.front());
	    
	    q.push(q.front() + "0");
	    q.push(q.front() + "1");
	    q.pop();
	}
	return ans;
}
