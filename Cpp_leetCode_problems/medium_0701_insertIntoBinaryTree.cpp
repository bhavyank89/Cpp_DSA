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
        TreeNode* insertIntoBST(TreeNode* root, int val) {
            TreeNode* newNode = new TreeNode(val);
            if(!root) return newNode;
            TreeNode* temp = root;
            TreeNode* prev ;
            while(temp){
                if(temp->val>val){
                prev = temp;
                temp = temp->left;
                }
                else{
                prev = temp;
                temp = temp->right;
                }
            }
            if(prev->val>val)
            prev->left = newNode;
            else 
            prev->right = newNode;
    
            return root;
        }
    };