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
        bool checkBST(TreeNode* root, long long low, long long high) {
            if (!root) return true;
            if (root->val <= low || root->val >= high) return false;
            return checkBST(root->left, low, root->val) && checkBST(root->right, root->val, high);
        }
    
        bool isValidBST(TreeNode* root) {
            return checkBST(root, LLONG_MIN, LLONG_MAX); // Use long long bounds
        }
    };
    