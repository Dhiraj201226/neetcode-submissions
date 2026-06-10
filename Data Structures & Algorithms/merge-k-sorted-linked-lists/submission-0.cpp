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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>res;
        int m=lists.size();
       for(ListNode*h:lists){
        ListNode*t=h;
        while(t){
         res.push_back(t->val);
         t=t->next;
        }
       }
        sort(res.begin(),res.end());
        int k=0;
        ListNode*head=new ListNode();
        ListNode*temp=head;
        while(k<res.size()){
            ListNode*vary=new ListNode(res[k]);
            temp->next=vary;
            temp=temp->next;
            k++;
        }
        return head->next;
    }
};
