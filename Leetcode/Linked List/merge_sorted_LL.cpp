//https://leetcode.com/problems/merge-two-sorted-lists/description/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
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
};
