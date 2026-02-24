// #include <iostream>
// #include <vector>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
//
// static int idx=-1;
//
// Node* buildTree(vector<int> preOrder[]) {
//
//     idx++;
//     if (preOrder[idx]== -1) {
//         return NULL;
//     }
//     Node* root=new Node(preOrder[idx]);
//     root->left-=buildTree(preOrder);
//     root->right=buildTree(preOrder);
//
//     return root;
//
// }
//
//
//
// int main() {
//     vector <int> preOrder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root=buildTree(preOrder);
//     cout<<root->data<<endl;
//     cout<<root->left->data<<endl;
//     cout<<root->right->data<<endl;
//
//     return 0;
//
// }

//---------------------------------------------------------------------------------------------------------------------

// //                                           PREORDER TRAVERSAL
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// class Node {
// public :
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
//
// int idx = -1;
//
// // Build tree from preorder list where -1 represents NULL
// Node* buildTree(const vector<int>& arr) {
//     idx++;
//     if ( arr[idx] == -1) {
//         return NULL;
//     }
//
//     Node* root = new Node(arr[idx]);
//     root->left = buildTree(arr);
//     root->right = buildTree(arr);
//
//     return root;
// }
//
// void preorder(Node* root) {
//     if (root==NULL) {
//         return ;
//     }
//
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
//
// int main() {
//     vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//
//     Node* root=buildTree(arr);
//     preorder( root);
// }

//-------------------------------------------------------------------------------------------

// //                                                  INORDER
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
//
// static int idx =-1;
// Node* buildTree(vector<int>&arr) {
//     idx++;
//     if (arr[idx]==-1) {
//         return NULL;
//     }
//     Node* root=new Node(arr[idx]);
//     root->left=buildTree(arr);
//     root->right=buildTree(arr);
//
//     return root;
//
// }
//
// // for INORDER
//
// void inorder(Node* root){
//
//         if (root==NULL) {
//             return;
//         }
//
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
//
// int main() {
//     vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//
//     Node* root=buildTree(arr);
//     inorder(root);
//
//     return 0;
// }

//--------------------------------------------------------------------------------------------------

// //                                       POSTORDER TRAVERSAL
//
// #include<iostream>
// #include<vector>
// using namespace std;
//
// class Node {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
//
// static int idx=-1;
// Node* buildTree(vector<int>&arr) {
//     idx++;
//     if (arr[idx]==-1) {
//         return NULL;
//     }
//
//     Node* root=new Node(arr[idx]);
//     root->left=buildTree(arr);
//     root->right=buildTree(arr);
//
//     return root;
// }
//
// // for POSTORDER:
//
// void postorder(Node* root) {
//     if (root==NULL) {
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }
//
// int main() {
//     vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//
//     Node* root=buildTree(arr);
//     postorder(root);
//
//     return 0;
// }

//----------------------------------------------------------------------------------------------

// //                                                     LEVELORDER TRAVERSAL
//
// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
//
// class Node {
//     public:
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
//
// static int idx=-1;
// Node* buildTree(vector<int>&arr) {
//     idx++;
//     if (arr[idx]==-1) {
//         return NULL;
//     }
//
//     Node* root=new Node(arr[idx]);
//     root->left=buildTree(arr);
//     root->right=buildTree(arr);
//
//     return root;
// }
//
// void levelorder(Node* root) {
//     queue<Node*> q;
//
//     q.push(root);
//     q.push(NULL);
//
//     while (q.size()!=0) {
//         Node* curr=q.front();
//         q.pop();
//
//         if (curr==NULL) {
//             if (!q.empty()) {
//                 cout<<endl;
//                 q.push(NULL);
//                 continue;
//             }else {
//                 break;
//             }
//         }
//         cout<<curr->data<<" ";
//
//         if (curr->left!=0) {
//             q.push(curr->left);
//                     }
//         if (curr->right!=0) {
//             q.push(curr->right);
//         }
//     }
// }
//
// int main() {
//         vector<int> arr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//
//         Node* root=buildTree(arr);
//         levelorder(root);
//
//         return 0;
//     }

