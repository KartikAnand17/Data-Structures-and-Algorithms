// Problem Statement-> https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        while(a->next != NULL && b->next!=NULL){
            if(a==b){
                return a;
            }
            a=a->next;
            b=b->next;
        }
        if(a->next == NULL){
            int blen = 0;
            while(b->next != NULL){
                blen ++;
                b = b->next;
            }
            while(blen--){
                headB = headB->next;
            }
        }
        else{
            int alen = 0;
            while(a->next != NULL){
                alen ++;
                a = a->next;
            }
            while(alen--){
                headA = headA->next;
            }
        }
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};
