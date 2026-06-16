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
    int getHeight(TreeNode*node){
        if(!node){
            return 0;
        }
        int l=getHeight(node->left);
        int r=getHeight(node->right);
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
    if(!root){
        return true;
    }
      int left=getHeight(root->left);
      int right=getHeight(root->right);
      if(abs(left-right)>1){
        return false;
      }
        
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
