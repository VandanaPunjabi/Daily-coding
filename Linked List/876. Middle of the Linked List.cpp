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
    queue<ListNode*> q1;
public:
    ListNode* middleNode(ListNode* head) {
        
         if(head != NULL){
            
            while(head != NULL){
                q1.push(head);
                head = head->next;
            }
         
            int n = q1.size()/2;

            while(n--)
                q1.pop();
                return q1.front();
            
         }
         
           return NULL;
    }
};
