// https://leetcode.com/problems/sort-list/description/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode(-1);

        ListNode* left = list1;
        ListNode* right = list2;
        if(left==0) return right;
        if(right==0) return left;

        ListNode* mptr = merged;

        while(left && right){
            if(left->val <= right->val){
                mptr->next = left;
                mptr = left;
                left=left->next;
            }
            else{
                mptr->next = right;
                mptr = right;
                right = right->next;
            }
        }
        while(left){
            mptr->next=left;
            mptr=left;
            left=left->next;
        }
        while(right){
            mptr->next=right;
            mptr=right;
            right=right->next;
        }
        return merged->next;

    }

    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == 0 || head->next == 0){
            return head;
        }

        ListNode*mid = findMid(head);
        ListNode*left = head;
        ListNode*right = mid->next;
        mid->next=0;

        left = sortList(left);
        right = sortList(right);

        ListNode*mergeLL = merge(left,right);
        return mergeLL;
        
    }
};
