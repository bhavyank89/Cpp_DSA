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
        void insertInBST(TreeNode* root,int value){
            TreeNode* prev;
            TreeNode* newNode = new TreeNode(value);
            while(root){
                if(root->val>value){
                    prev = root;
                    root=root->left;
                }
                else{
                    prev = root;
                    root=root->right;
                }
            }
            if(prev->val>value)
                prev->left = newNode;
            else
                prev->right = newNode;
        }
        TreeNode* bstFromPreorder(vector<int>& preorder) {
            int size = preorder.size();
            if(size==0) return nullptr;
            TreeNode* root = new TreeNode(preorder[0]);
            for(int i=1;i<size;i++){
                insertInBST(root,preorder[i]);
            }
            return root;
        }
    };