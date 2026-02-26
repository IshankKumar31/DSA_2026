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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL){
            return false;
        }
        queue<TreeNode*> q1;
        q1.push(root);

        while(!q1.empty()){
            int size=q1.size();
            bool foundX= false;
            bool foundY= false;
            for(int i=0;i<size;i++){
                TreeNode* curr= q1.front();
                q1.pop();

                if(curr->val==x){
                    foundX=true;
                }
                if(curr->val==y){
                    foundY= true;
                }
                if(curr->left != NULL && curr->right != NULL){
                    if(curr->left->val == x && curr->right->val == y||
                    curr->left->val == y && curr->right->val ==x ){
                        return false;
                    }
                }
                if(curr->left != NULL)q1.push(curr->left);
                if(curr->right != NULL)q1.push(curr->right);
            }

            if(foundX==true && foundY== true)return true;
            if(foundX==true || foundY == true)return false;
        }
        return false;

    }
};