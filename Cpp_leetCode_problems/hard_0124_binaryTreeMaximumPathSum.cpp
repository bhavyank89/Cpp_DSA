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
    int maxSum = INT_MIN; // Stores the maximum path sum

    int findMaxPath(TreeNode* root) {
        if (!root) return 0;

        // Calculate max path sum for left and right subtree, ignoring negative sums
        int leftSum = max(0, findMaxPath(root->left));
        int rightSum = max(0, findMaxPath(root->right));

        // Update the maximum sum considering the current root as the highest node in the path
        maxSum = max(maxSum, leftSum + rightSum + root->val);

        // Return the max sum that can be extended upwards
        return root->val + max(leftSum, rightSum);
    }

    int maxPathSum(TreeNode* root) {
        findMaxPath(root); // Find max path sum starting from root
        return maxSum;
    }
};
