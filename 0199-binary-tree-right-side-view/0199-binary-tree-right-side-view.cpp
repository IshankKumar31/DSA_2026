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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==0){
            return ans;
        }

        queue<TreeNode*> q1;
        q1.push(root);

        while(!q1.empty()){
            int size=q1.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* curr= q1.front();
                q1.pop();
                level.push_back(curr->val);

                if(curr->left != NULL) q1.push(curr->left);
                if(curr->right != NULL) q1.push(curr->right);
            }
            int x= level[level.size()-1];
            ans.push_back(x);
        }
        return ans;
    }
};