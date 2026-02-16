/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root == NULL){
            return -1;
        }

        queue<TreeNode*> q1;
        q1.push(root);
        
        vector<long long> ans;

        while(!q1.empty()){
            long long sum=0;
            int size= q1.size();

            for(int i=0;i<size;i++){
                TreeNode* curr= q1.front();
                q1.pop();
                sum+= curr->val;

                if(curr->left != NULL){
                    q1.push(curr->left);
                }
                if(curr->right != NULL){
                    q1.push(curr->right);
                }
            }
            ans.push_back(sum);

        }
        sort(ans.begin(),ans.end());
        int n= ans.size();
        if(n<k){
            return -1;
        }

        return ans[n-k];
    }
};