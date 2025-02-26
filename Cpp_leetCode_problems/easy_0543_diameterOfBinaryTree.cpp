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
        int maxDiameter = 0;
    
        int findDepth(TreeNode* root) {
            if (!root) return 0;
    
            int leftHeight = findDepth(root->left);
            int rightHeight = findDepth(root->right);
    
            maxDiameter = max(maxDiameter, leftHeight + rightHeight); 
    
            return 1 + max(leftHeight, rightHeight);
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            findDepth(root);
            return maxDiameter;
        }
    };
    