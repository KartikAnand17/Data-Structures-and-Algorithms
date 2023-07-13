// Problem Statement -> https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

// Iterative Solutuon
// Step 1: Reverse the LL and find the node by iterating over the LL

#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

Node* reverse(Node* head){
  Node* curr = head;
  Node* prev = NULL;
  Node* nextptr = curr->next;

  while(curr != NULL){
    nextptr = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nextptr; 
  }
  return prev;
}

int kthnode(Node* head, int position){
  Node* temp_head = reverse(head);
  int count = 0;
  Node* temp = temp_head;
  while(count != position){
    temp = temp->next;
    count++;
  }
  int data = temp->data;
  return data;
}


// Recursive Soluton -> Submitted on HackerRank

void fun(SinglyLinkedListNode* head, int &positionFromTail, int &ans){
     if(head == 0){
         return;
     }
     fun(head->next, positionFromTail, ans);
     if(positionFromTail == 0){
         ans = head->data;
     }
     positionFromTail--;
 }

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int ans = -1;
    fun(llist,positionFromTail, ans);
    return ans;
}
