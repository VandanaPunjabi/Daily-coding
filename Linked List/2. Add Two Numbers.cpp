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
       

        ListNode *p1 = l1, *p2 = l2;
        ListNode *ans =new ListNode(0);
        ListNode *curr = ans;
        int carry = 0 ;


        while(p1 != NULL || p2 != NULL){

              int x = (p1 != NULL) ?  p1->val : 0;
              int y = (p2 != NULL) ? p2->val : 0;

              int sum = x+y+carry;
              carry = sum/10;

              curr->next = new ListNode(sum%10);
              curr = curr->next;


              if(p1!=NULL) p1 = p1->next;

              if(p2 != NULL) p2 = p2->next;

        }

        if(carry>0){
            curr->next = new ListNode(carry);

        }

        return ans->next;
    }
};
