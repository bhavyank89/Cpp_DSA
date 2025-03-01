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
        vector<int> inOrderArr;
        void inorderTraversal(TreeNode* root){
            if(!root) return;
            inorderTraversal(root->left);
            inOrderArr.push_back(root->val);
            inorderTraversal(root->right);
        }
        bool findTarget(TreeNode* root, int k) {
            if(!root) return false;
            inorderTraversal(root);
            int i=0,j=inOrderArr.size()-1;
            while(i<j){
                if(inOrderArr[i]+inOrderArr[j]==k) return true;
                if(inOrderArr[i]+inOrderArr[j]>k) j--;
                else i++;
            }
            return false;
        }
    };