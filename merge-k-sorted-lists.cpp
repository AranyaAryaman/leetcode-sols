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
        if(lists.size()==0) return NULL;
        if(lists.size()==1) return lists[0];
        vector<int> store;
        for(int i=0;i<lists.size();i++){
            if(lists[i]==0) continue;
            ListNode* head = lists[i];
            while(head){
                store.push_back(head->val);
                head = head->next;
            }
        }
        if(store.size()==0) return NULL;
        sort(store.begin(),store.end());
        ListNode *head = new ListNode(store[0]);
        ListNode *temp = head;
        for(int i=1;i<store.size();i++){
            ListNode *newNode = new ListNode(store[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        return head;
    }
};
