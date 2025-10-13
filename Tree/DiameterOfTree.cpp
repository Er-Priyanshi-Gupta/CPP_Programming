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

//  O(n^2) TC
// class Solution {
// public:
//     int height(TreeNode* root){
//         if(root == nullptr) return 0;
//         return max(height(root->left), height(root->right))+1;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//         if(root == nullptr) return 0;
//         return max((height(root->left)+height(root->right)), max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
//     }
// };


// O(n) TC

// class Solution {
// public:
//     int ans = 0;
    
//     int dfs(TreeNode* root) {
//         if (root == nullptr) return 0;
//         int left = dfs(root->left);
//         int right = dfs(root->right);
//         ans = max(ans, left + right); 
//         return 1 + max(left, right); 
//     }

//     int diameterOfBinaryTree(TreeNode* root) {
//         dfs(root);
//         return ans;
//     }
// };
