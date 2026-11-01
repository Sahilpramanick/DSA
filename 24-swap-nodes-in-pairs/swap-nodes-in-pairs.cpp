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
#define Node ListNode
    void reverse(Node* p, int n){
        Node* prev = NULL;
        Node* curr = p; 
        while(n--){
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int size = 2; //pair
        Node* left = head;
        Node* right;
        Node* prevleft = NULL;
        Node* res = NULL;
        while(true){
            right = left;
            for(int i=0;i<size-1;i++){
                if(right==NULL){
                    break;
                }
                right = right->next;
            }
            if(right){ // left right mil gya 
                Node* nextleft = right->next;
                reverse(left,2);
                if(prevleft) prevleft->next = right;
                prevleft = left;
                if(res==NULL) res = right;
                left = nextleft;
            }
            else{
                if(prevleft) prevleft->next = left;
                if(res==NULL){ // agar single node hua toh 
                    res= left;
                }
                break;
            }
        }
        return res;
    }
};