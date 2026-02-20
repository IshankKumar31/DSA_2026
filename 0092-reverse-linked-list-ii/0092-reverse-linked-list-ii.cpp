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
        ListNode* l= head;
        ListNode* prevNext= NULL;

        for(int i=1;i<left;i++){
            prevNext=l;
            l=l->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=l;
        ListNode* next = NULL;

        for(int i=left;i<=right;i++){
            next=curr->next;
            curr->next= prev;
            prev= curr;
            curr=next;
        }
        if(prevNext != NULL){
            prevNext->next = prev;
        }else{
            head=prev;
        }
        l->next= curr;

        return head;
        
    }
};