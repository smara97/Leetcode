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
    int countNodes(TreeNode* root) {
        
        int cntNodes = 0;
        queue<TreeNode*>qt;
        
        if(root)
            qt.push(root);
        
        while(qt.size()){
            
            TreeNode* temp = qt.front();
            qt.pop();
            
            if(temp){
                
                cntNodes++;
                qt.push(temp->left);
                qt.push(temp->right);
            }
            
        }
        
        return cntNodes;
        
    }
};