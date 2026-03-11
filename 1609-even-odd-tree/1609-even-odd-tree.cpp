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
    bool isEvenOddTree(TreeNode* root) {
        if(root==NULL){
            return false;
        }

        queue<TreeNode*> q1;
        q1.push(root);
        int l=0;
        while(!q1.empty()){
            int size=q1.size();
            vector<int> level;

            for(int i=0;i<size;i++){
                TreeNode* curr= q1.front();
                q1.pop();
                level.push_back(curr->val);

                if(curr->left != NULL)q1.push(curr->left);
                if(curr->right != NULL)q1.push(curr->right);
            }
            if(l%2==0){
                if(level[0]%2==0)return false;
                for(int i=1;i<level.size();i++){
                    if(level[i] %2==0 || level[i]<=level[i-1]){
                        return false;
                    }
                }
            }else if(l%2 != 0){
                if(level[0]%2!=0)return false;
                for(int i=1;i<level.size();i++){
                    if(level[i] %2!=0 || level[i]>=level[i-1]){
                        return false;
                    }
                }
            }
            l++;
        }

        return true;
    }
};