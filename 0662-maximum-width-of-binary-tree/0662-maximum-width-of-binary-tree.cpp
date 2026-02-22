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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q1;
        q1.push({root,0});
        unsigned long long maxwidth=0;

        while(!q1.empty()){
            int size=q1.size();
            unsigned long long start=q1.front().second;
            unsigned long long end=q1.back().second;
            

            for(int i=0;i<size;i++){
                auto curr= q1.front();
                q1.pop();

                if(curr.first->left != NULL){
                    q1.push({curr.first->left, curr.second*2+1});
                }
                if(curr.first->right != NULL){
                    q1.push({curr.first->right, curr.second*2+2});
                }

            }
            maxwidth= max(maxwidth, end-start+1);
        }
        return maxwidth;
    }
};