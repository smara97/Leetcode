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
        
        vector<vector<int>>lvl_nodes;
        
        queue<pair<Node*, int>>qp;
        
        if(!root)
            return {};
        
        qp.push(pair<Node*, int>(root, 0));
        
        while(qp.size()){
            
            pair<Node*, int> p = qp.front();
            qp.pop();
            
            if(p.first){
                
                if(p.second<lvl_nodes.size())
                    lvl_nodes[p.second].push_back(p.first->val);
                    
                else
                    lvl_nodes.push_back({p.first->val});
                
                if(p.first->children.size())
                    for(auto e:p.first->children)
                        qp.push(pair<Node*, int>(e, p.second+1));
            }
            
            
        }
        
        return lvl_nodes;
        
    }
};