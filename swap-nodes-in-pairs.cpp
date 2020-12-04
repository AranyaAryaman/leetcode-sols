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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* temp = head;
        int count=0,i=0;
        
        while(temp){
            count++;
            temp = temp->next;
            if(count==2)    break;
        }
        if(count<2) return head;
        
        ListNode* prev=NULL, *nex = NULL, *curr=head;
        while(curr && i<2){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
            i++;
        }
        if(curr)
            head->next = swapPairs(curr);
        return prev;
    }
};
