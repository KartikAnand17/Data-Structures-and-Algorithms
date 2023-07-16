// https://leetcode.com/problems/rotate-list/description/

class Solution {
public:
    int Length(ListNode* head1)
    {
        int count=1;
        while(head1->next!=NULL)
        {
            count++;
            head1=head1->next;
        }
        return count;
    } 

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return head;
        }
        else if(head->next==NULL){
            return head;
        }
        else{
            int l = Length(head);
            k = k%l;
            for(int i=1;i<=k;i++){
                ListNode* prev = NULL;
                ListNode* tail = head;
                while(tail->next!=NULL){
                    prev = tail;
                    tail = tail->next;
                }
                tail->next = head;
                prev->next = NULL;
                head = tail;
            }
        }
    return head;
    }
};
