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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        if(l1==NULL)    return l2;
        else if(l2==NULL)   return l1;
        else if(l1==NULL && l2==NULL)   return NULL;
        ListNode* temp;
        
        if(l1->val <= l2->val){
            head = new ListNode(l1->val);
            head->next==NULL;
            l1 = l1->next;
        }
        
        else if(l2->val <= l1->val){
            head = new ListNode(l2->val);
            head->next==NULL;
            l2 = l2->next;
        }
        
        temp = head;
        while(l1 && l2){
            ListNode *newNode = new ListNode(min(l1->val,l2->val));
            temp -> next = newNode;
            temp = temp->next;
            if(l1->val == min(l1->val,l2->val))
                l1=l1->next;
            else
                l2=l2->next;
        }
        
        while(l1){
            ListNode *newNode = new ListNode(l1->val);
            temp->next = newNode;
            temp = temp->next;
            l1 = l1->next;
        }
        
        while(l2){
            ListNode *newNode = new ListNode(l2->val);
            temp->next = newNode;
            temp = temp->next;
            l2 = l2->next;
        }
        
        return head;
        
    }
};
