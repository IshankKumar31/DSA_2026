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
    void inorder(TreeNode* root, vector<int> &vec){
        if(root==NULL){
            return;
        }
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> vec;
        inorder(root,vec);
        unordered_map<int,int> freq;
        for(int i=0;i<vec.size();i++){
            freq[vec[i]]++;
        }
        vector<int> ans;
        int max= INT_MIN;
        for(auto p : freq){
            if(p.second > max){
                max=p.second;
            }
            
        }
        for(auto p : freq){
            if(p.second==max){
                ans.push_back(p.first);
            }
        }
            
            

        

        return ans;
    }
};