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
class BSTIterator {
    public:
        int i = 0;
        vector<int> inorderArr;
        BSTIterator(TreeNode* root) {
            TreeNode* temp = root;
            createInOrder(temp);
        }
        void createInOrder(TreeNode* root){
            if(!root) return;
            createInOrder(root->left);
            inorderArr.push_back(root->val);
            createInOrder(root->right);
        }
        int next() {
            return inorderArr[i++];
        }
        
        bool hasNext() {
            if(i<inorderArr.size())
            return true;
            else return false;
        }
    };
    
    /**
     * Your BSTIterator object will be instantiated and called as such:
     * BSTIterator* obj = new BSTIterator(root);
     * int param_1 = obj->next();
     * bool param_2 = obj->hasNext();
     */