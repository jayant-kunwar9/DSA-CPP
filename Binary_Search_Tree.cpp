// //                                                       FORMING BST
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
// Node* insert(Node*root, int val) {
//     if (root==NULL) {
//         return new Node(val);
//     }
//     if (val<root->data) {
//         root->left=insert(root->left,val);
//     }else {
//         root->right=insert(root->right,val);
//     }
//     return root;
// }
//
// Node* buildBST(vector<int> arr) {
//     Node* root=NULL;
//
//     for (int val:arr) {
//         root=insert(root,val);
//     }
//     return root;
// }
//
// void inorder(Node* root) {
//     if (root==NULL) {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
//
// int main() {
//     vector<int> arr={3,2,1,5,6,4};
//
//     Node* root=buildBST(arr);
//     inorder(root);
//     cout<<endl;
//
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

// //                                              SEARCHING IN BST
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
// Node* insert(Node*root, int val) {
//     if (root==NULL) {
//         return new Node(val);
//     }
//     if (val<root->data) {
//         root->left=insert(root->left,val);
//     }else {
//         root->right=insert(root->right,val);
//     }
//     return root;
// }
//
// Node* buildBST(vector<int> arr) {
//     Node* root=NULL;
//
//     for (int val:arr) {
//         root=insert(root,val);
//     }
//     return root;
// }
//
// void inorder(Node* root) {
//     if (root==NULL) {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
//
// bool search(Node* root, int key) {  //here , i can remove the (inorder function), it is not required while SEARCHING
//     if (root==NULL) {
//         return false;
//     }
//     if (root->data==key) {
//         return true;
//     }
//
//     if (root->data>key) {
//         return search(root->left,key);
//     }else {
//         return search(root->right,key);
//     }
//
// }
//
// int main() {
//     vector<int> arr={3,2,1,5,6,4};
//
//     Node* root=buildBST(arr);
//     cout<<search(root,8)<<endl;
//     cout<<endl;
//
//     return 0;
// }

//------------------------------------------------------------------------------------------------------

// //                                              DELETING THE NODE
//
// #include <iostream>
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
// Node* insert(Node*root, int val) {
//         if (root==NULL) {
//             return new Node(val);
//         }
//         if (val<root->data) {
//             root->left=insert(root->left,val);
//         }else {
//             root->right=insert(root->right,val);
//         }
//         return root;
//     }
//
//     Node* buildBST(vector<int> arr) {
//         Node* root=NULL;
//
//         for (int val:arr) {
//             root=insert(root,val);
//         }
//         return root;
//     }
//
// Node* getInorderSuccessor(Node* root) {  //left most node in right subtree
//     while (root!=NULL && root->left!=NULL) {
//         root=root->left;
//     }
//     return root;
// }
//
// Node* delNode(Node* root,int key) {  // key=> value to delete
//     if (root==NULL) {
//         return NULL;
//     }
//     if (root->data>key) {
//         root->left=delNode(root->left,key);
//     }else if (root->data<key) {
//         root->right=delNode(root->right,key);
//     }else{
//         if (root->left==NULL) {
//             Node* temp =root->right;
//             delete root;
//             return temp;
//         }
//     else if (root->right==NULL) {
//         Node* temp=root->left;
//         delete root;
//         return temp;}
//         else {
//             Node* IS=getInorderSuccessor(root->right);
//             root->data=IS->data;
//             root->right=delNode(root->right,IS->data);
//         }
//     }
//     return root;
// }
//
// void inorder(Node* root) {
//     if (root==NULL) {
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
//
// int  main() {
//     vector<int> arr={3,2,1,5,6,4};
//
//     Node* root=buildBST(arr);
// cout<<"before: ";
//     inorder(root);
//     cout<<endl;
//
//     delNode(root, 5);
//
//     cout<<"after: ";
//     inorder(root);
//     cout<<endl;
//
//     return 0;
// }

//-------------------------------------------------------------------------------------------------------

// //                                         BUILDING BST USING PREORDER [ROOT-LEFT-RIGHT]
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
// Node* insert(Node*root, int val) {
//         if (root==NULL) {
//             return new Node(val);
//         }
//         if (val<root->data) {
//             root->left=insert(root->left,val);
//         }else {
//             root->right=insert(root->right,val);
//         }
//         return root;
//     }
//
//     Node* buildBST(vector<int> arr) {
//         Node* root=NULL;
//
//         for (int val:arr) {
//             root=insert(root,val);
//         }
//         return root;
//     }
//
// Node* pre(vector<int> arr, int i ,int bound) {
//     if (i>=arr.size()||arr[i]>bound) {
//         return NULL;
//     }
//     Node* root= new Node(arr[i]);
//     i++;
//     root->left=pre(arr,i,root->data);
//     root->right=pre(arr,i,bound);
//     return root;
// }
//
// void inorder(Node* root) {
//     if (root==NULL) {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }
//
// int main() {
//     vector<int> arr={3,2,1,5,6,4};
//
//     Node* root=buildBST(arr);
//   inorder(root);
//     pre(arr,3,INT_MAX);
//
//     cout<<endl;
//
//
//
//
// }

