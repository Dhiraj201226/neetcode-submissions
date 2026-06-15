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
      ListNode* reverseList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode*temp=head;
        ListNode*prev=nullptr;
        while(temp){
            ListNode*front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;     
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head->next==nullptr || head==nullptr){
            return ;
        }
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*head2=slow->next;
        slow->next=nullptr;
        head2=reverseList(head2);

        ListNode*temp1=head;
        ListNode*temp2=head2;
        while(temp2){
            ListNode*front=temp1->next;
            ListNode*front2=temp2->next;
            temp1->next=temp2;
            temp2->next=front;
             temp2=front2;
            temp1=front;
        }
    }
};
