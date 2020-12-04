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
ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0; ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
            if(count==k)
                break;
        }

        if(count<k)
            return head;

        struct ListNode *prev=NULL,*nex=NULL,*curr=head;
        int i=0;
        while(i<k and curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            i++;
        }

        if(curr){
            head->next=reverseKGroup(curr,k);
        }
            return prev;
    }
};
