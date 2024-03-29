// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1?page=1&difficulty%5B%5D=0&category%5B%5D=Queue&sortBy=submissions

void QueueStack :: push(int x)
{
        if(q1.empty()){
            q1.push(x);
        }
        else{
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(x);
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty()){
        return -1;
    }
    int element = q1.front();
    q1.pop();
    return element;
    
}
