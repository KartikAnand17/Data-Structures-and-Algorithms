 // https://practice.geeksforgeeks.org/problems/queue-designer/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Queue&sortBy=submissions

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> q;
   for(int i = 0; i<n;i++){
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>q)
{
    //print front and dequeue for each element until it becomes empty
    if(q.empty()){
        return;
    }
    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
} 
