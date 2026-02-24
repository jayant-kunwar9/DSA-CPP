
// //                                                          T(C) = O(n)
//
// #include <iostream>
// using namespace std;
//
//
// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
// };
//
//
// // DFS function to build binary number and return sum
// int solve(TreeNode* root, int curr){
//
//     // Base case:  if node is NULL -> no contribution
//     if(root == NULL){
//         return 0;
//     }
//
//     //Build binary number
//     // Left shift (multiply by 2) and add current node bit(0 or 1)
//     curr = curr*2 + root->val;
//
//     // If leaf node-> binary number complete
//     if(root->left == NULL && root->right == NULL){
//         return curr;    // return decimal value
//     }
//
//
//     // Recursively go left and right and add both sums
//     return solve(root->left, curr) + solve(root->right, curr);
// }
//
//
// // Main function
// int sumRootToLeaf(TreeNode* root) {
//     // Start DFS from root with intial value = 0
//     return solve(root, 0);
// }
//
//
// int main() {
//
//     // Creating tree manually
//
//     TreeNode* root = new TreeNode{1};
//
//     root->left = new TreeNode{0};
//     root->right = new TreeNode{1};
//
//     root->left->left = new TreeNode{0};
//     root->left->right = new TreeNode{1};
//
//     root->right->left = new TreeNode{0};
//     root->right->right = new TreeNode{1};
//
//     cout << "Sum of these numbers: "<<sumRootToLeaf(root);
//
// }
//



