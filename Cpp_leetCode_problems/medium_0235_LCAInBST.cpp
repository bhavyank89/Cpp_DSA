/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if (!root || root == p || root == q) return root; // Base case: root is p or q
            
            int current = root->val;
    
            // If both nodes are in the left subtree
            if (current > p->val && current > q->val)
                return lowestCommonAncestor(root->left, p, q);
    
            // If both nodes are in the right subtree
            if (current < p->val && current < q->val)
                return lowestCommonAncestor(root->right, p, q);
    
            // If p and q are on different sides, root is the LCA
            return root;
        }
    };
    