// https://leetcode.com/problems/merge-nodes-in-between-zeros/description/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(!head) return 0;
        ListNode* slow = head;
        ListNode* fast = head->next;
        ListNode* lastNode = 0;
        int sum = 0;
        while(fast){
            if(fast->val != 0){
                sum = sum + fast->val;
            }
            else{
                slow->val = sum;
                lastNode = slow;
                slow = slow->next;
                sum = 0;
            }
            fast = fast->next;
        }
        ListNode* temp = lastNode->next;
        lastNode->next = NULL;
        while(temp){
            ListNode* newTemp = temp->next;
            delete(temp);
            temp = newTemp;
        }
        return head;
    }
};
