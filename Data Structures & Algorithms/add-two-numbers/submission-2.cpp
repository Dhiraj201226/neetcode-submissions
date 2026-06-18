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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode();
        ListNode*temp=dummy;
        int carry=0;
        while(l1 && l2){
            int add=l1->val+l2->val;
            add+=carry;
            carry=add/10;
            add=add%10;
            temp->next=new ListNode(add);
            temp=temp->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
           int add=l1->val+carry;
              carry=add/10;
                add=add%10;
            temp->next=new ListNode(add);
             l1=l1->next;
             temp=temp->next;
        }
         while(l2){
          int  add=l2->val+carry;
              carry=add/10;
                add=add%10;
            temp->next=new ListNode(add);
            temp=temp->next;
             l2=l2->next;
        }
if(carry==1){
            temp->next=new ListNode(1);
        }
        return dummy->next;
    }
};
