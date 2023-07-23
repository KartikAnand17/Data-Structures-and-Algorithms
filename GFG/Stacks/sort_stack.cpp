// https://practice.geeksforgeeks.org/problems/sort-a-stack/1?page=1&difficulty%5B%5D=0&category%5B%5D=Stack&sortBy=submissions

void insert(stack<int> &s, int curr){
    if(s.empty()){
        s.push(curr);
        return;
    }
    // if s.top() > curr
    int a = s.top();
    if(a > curr){
        s.pop();
        insert(s,curr);
        s.push(a);
    }
    // if curr > stack
    else{
        s.push(curr);
    }
}
void SortedStack :: sort()
{
    if(s.empty()){
        return;
    }
    
    int curr = s.top();
    s.pop();
    sort();
    insert(s,curr);
   
}
