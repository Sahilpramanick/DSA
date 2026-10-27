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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right){
            return head;
        }

        ListNode* temp = head;
        ListNode* before = NULL;

        for(int i = 1; i < left; i++){
            before = temp;
            temp = temp->next;
        }

        int rev = right - left + 1;

        ListNode* last = temp;
        ListNode* curr = temp;
        ListNode* prev = NULL;

        // Reverse
        while(rev--){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Reconnect
        last->next = curr;

        if(before == NULL){
            return prev;
        }

        before->next = prev;
        return head;
    }
};
