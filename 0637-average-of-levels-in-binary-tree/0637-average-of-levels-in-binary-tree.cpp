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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==NULL){
            return ans;
        }

        queue<TreeNode*> q1;
        q1.push(root);

        while(!q1.empty()){
            int size= q1.size();
            int s=0;
            double sum=0;

            for(int i=0;i<size;i++){
                TreeNode* curr= q1.front();
                q1.pop();
                sum+= curr->val;
                s++;

                if(curr->left != NULL) q1.push(curr->left);
                if(curr->right != NULL) q1.push(curr->right);
            }
            double avg = sum/s;
            ans.push_back(avg);
        }
        return ans;
    }
};