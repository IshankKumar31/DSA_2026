/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;

        } 
        queue<Node*> q1;
        q1.push(root);

        while(!q1.empty()){
            int size=q1.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node* curr= q1.front();
                q1.pop();
                level.push_back(curr->val);

                for(int j=0;j<curr->children.size();j++){
                    if(curr->children[j] != NULL){
                        q1.push(curr->children[j]);
                    }
                }
            }

            ans.push_back(level);
        }
        return ans;
    }
};