// https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

class Solution{
    public:
    void deleteEle(stack<int>&s, int middle,int count){
        if(count==middle){
            s.pop();
            return;
        }
        int top=s.top();
        s.pop();
        count++;
        deleteEle(s,middle,count);
        
        s.push(top);
    }
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int middle=sizeOfStack-((sizeOfStack+1)/2);
       
       int count=0;
       
        deleteEle(s,middle,count);
    }
    
};
