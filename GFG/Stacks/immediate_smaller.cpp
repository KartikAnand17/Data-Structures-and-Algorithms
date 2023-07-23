// https://practice.geeksforgeeks.org/problems/immediate-smaller-element1142/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Stack&sortBy=submissions
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    stack<int>s;
	    int i=0; 
	    if(s.empty()){
	        s.push(i);
	    }
	    i++;
	    while(i<arr.size()){
	        if(arr[i] < arr[s.top()]){
	            arr[s.top()] = arr[i];
	            s.pop();
	            s.push(i);
	        }
	        else{
	            s.push(i);
	        }
	        i++;
	    }
	    while(!s.empty()){
	        arr[s.top()] = -1;
	        s.pop();
	    }
	    
	}

};
