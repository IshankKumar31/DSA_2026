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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        if(head == NULL) return NULL;
        if(nums.empty()) return head;

        int maxi = *max_element(nums.begin(), nums.end());
        vector<bool> visited(maxi + 1, false);

        for(int i = 0; i < nums.size(); i++){
            visited[nums[i]] = true;
        }

        // Remove starting nodes safely
        while(head != NULL && head->val <= maxi && visited[head->val]){
            head = head->next;
        }

        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL){
            int val = temp->next->val;

            if(val <= maxi && visited[val]){
                temp->next = temp->next->next;
            } 
            else{
                temp = temp->next;
            }
        }

        return head;
    }
};