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
        void convertBSTtoArr(TreeNode* root,vector<int>& arr){
            if(!root) return;
            arr.push_back(root->val);
            convertBSTtoArr(root->left,arr);
            convertBSTtoArr(root->right,arr);
        }
        int kthSmallest(TreeNode* root, int k) {
            if(!root) return -1;
            vector<int> arr;
            convertBSTtoArr(root,arr);
            sort(arr.begin(),arr.end());
            int size = arr.size();
            return arr[k-1];
        }
    };