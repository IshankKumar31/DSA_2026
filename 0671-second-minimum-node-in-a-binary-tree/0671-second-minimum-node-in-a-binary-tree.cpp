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
    long long min=LONG_MAX;
    long long secondMin= LONG_MAX;
    void inorder(TreeNode* root){
        if(root == NULL){
            return;
        }
        inorder(root->left);
        if(root->val < min){
            secondMin=min;
            min=root->val;
        }else if(root->val > min && root->val < secondMin){
            secondMin = root->val;
        }
        inorder(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        if(secondMin== LONG_MAX){
            return -1;
        }else{
            return secondMin;
        }
        
    }
};