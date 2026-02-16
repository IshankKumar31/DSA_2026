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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int maxsum=INT_MIN;
        queue<TreeNode*> q1;
        q1.push(root);
        int level=1;
        int result=1;

        while(!q1.empty()){
            int sum=0;
            int size= q1.size();

            for(int i=0;i<size;i++){
                TreeNode* curr = q1.front();
                q1.pop();
                sum+= curr->val;

                if(curr->left != NULL){
                    q1.push(curr->left);
                }

                if(curr->right != NULL){
                    q1.push(curr->right);
                }
            }
            if(maxsum<sum){
                maxsum=sum;
                result=level;
            }
            level++;

        }

        return result;


    }
};