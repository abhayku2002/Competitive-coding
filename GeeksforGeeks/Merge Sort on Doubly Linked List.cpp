/*
Given Pointer/Reference to the head of a doubly linked list of n nodes, the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing and non-increasing order.

Example 1:

Input:
n = 8
value[] = {7,3,5,2,6,4,1,8}
Output:
1 2 3 4 5 6 7 8
8 7 6 5 4 3 2 1
Explanation: After sorting the given
linked list in both ways, resultant
matrix will be as given in the first
two line of output, where first line
is the output for non-decreasing
order and next line is for non-
increasing order.

*/



class Solution {
  public:

    Node* merge(Node* left, Node* right){
        Node* ans = NULL;
        
        if(left->data<right->data){
            ans = left;
            left = left->next;
        }
        else{
            ans = right;
            right = right->next;
        }
        
        Node* tail = ans;
        
        while(left!=NULL && right!=NULL){
            if(left->data<right->data){
                Node* x = left;
                tail->next = x;
                x->prev = tail;
                tail = tail->next;
                left = left->next;
            }
            else{
                Node* x = right;
                tail->next = x;
                x->prev = tail;
                tail = tail->next;
                right = right->next;
            }
        }
        
        while(left!=NULL){
            Node* x = left;
            tail->next = x;
            x->prev = tail;
            tail = tail->next;
            left = left->next;
        }
        
        while(right!=NULL){
            Node* x = right;
            tail->next = x;
            x->prev = tail;
            tail = tail->next;
            right = right->next;
        }
        
        tail->next = NULL;
        return ans;
    }
    
    Node* mergesort(Node* head, int n){
        if(n<=1) return head;
        
        int mid = (n-1)/2;
        
        int i=0;
        Node* temp1 = head;
        while(i<mid){
            temp1 = temp1->next;
            i++;
        }
        Node* temp2 = temp1->next;
        temp1->next = NULL;
        temp2->prev = NULL;
        
        Node* left = mergesort(head, mid+1);
        
        Node* right = mergesort(temp2, n-mid-1);
        
        return merge(left, right);
        
    }
    
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
        int n = 0;
        Node* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        return mergesort(head, n);
    }
};
