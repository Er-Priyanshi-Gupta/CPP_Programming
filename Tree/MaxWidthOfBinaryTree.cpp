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

//  LeetCode 662. Maximum Width of Binary Tree
// class Solution {
// public:
//     int widthOfBinaryTree(TreeNode* root) {
//         queue<pair<TreeNode*, unsigned long long>> q;
//         q.push({root,0});
//         int maxWidth = 0;
//         while(q.size()>0){
//             unsigned long long start = q.front().second;
//             unsigned long long end = q.back().second;
//             int curSize = q.size();
//             maxWidth = max(maxWidth, (int)(end-start+1));

//             for(int i =0; i<curSize; i++){
//                 auto cur = q.front();
//                 q.pop();

//                 if(cur.first->left) q.push({cur.first->left, cur.second*2+1});
//                 if(cur.first->right) q.push({cur.first->right, cur.second*2+2});
//             }
//         }
//         return maxWidth;
//     }
// };
