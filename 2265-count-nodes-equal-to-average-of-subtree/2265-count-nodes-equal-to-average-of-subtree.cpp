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
    int ans=0;
    
    int dfs(TreeNode* root, int &count){
        if(root==NULL){
            count=0;
            return 0;
        }
        int lcount=0;
        int rcount=0;

        int lsum=dfs(root->left,lcount);
        int rsum=dfs(root->right,rcount);

        int sum= lsum+rsum+root->val;
        count= lcount+rcount+1;

        if(sum/count==root->val){
            ans++;
        }

        return sum;

    }

    int averageOfSubtree(TreeNode* root) {
        int count=0;
        dfs(root,count);
        return ans;

    }
};