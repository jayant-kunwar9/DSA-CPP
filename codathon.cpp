// #include <iostream>
// using namespace std;
//
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//
//     Node(int val) {
//         data=val;
//         left=right=NULL;
//     }
// };
// Node* insertNode(Node * root, int val) {
//     if (root==NULL) {
//         return new Node(val);
//     }
//     if (val<root->data) {
//         root->left=insertNode(root->left, val);
//     }
//     else {
//         root->right=insertNode(root->right,val);
//     }
//
//     return root;
// }
//
// int findMin(Node* root) {
//     if (root==NULL) {
//         return -1;
//     }
//     while (root->left!=NULL) {
//         root=root->left;
//     }
//     return root->data;
// }
//
// int findMax(Node*root) {
//     if (root==NULL) {
//         return -1;
//     }
//     while (root->right!=NULL) {
//         root=root->right;
//     }
//     return root->data;
// }
//
// int main() {
//     int n;
//     cin>>n;
//
//     Node*root=NULL;
//
//     for (int i=0;i<n;i++) {
//         int val;
//         cin>>val;
//
//         root=insertNode(root,val);
//     }
//
//         cout<<"Minimum: "<<findMin(root)<<endl;;
//         cout<<"Maximum: "<<findMax(root)<<endl;;
//
// }


// ----------------------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;
//
// struct Student {
//     int id;
//     float marks;
// };
//
// int main() {
//     int n;
//     cout<<"Enter total numbers of students: ";
//     cin>>n;
//     Student student[n];
//     float total_marks=0;
//
//     for (int i=0;i<n;i++) {
//         cout<<"Enter the id of Student "<<i+1<<": ";
//         cin>>student[i].id;
//
//         cout<<"Enter the marks of Student "<<i+1<<": ";
//         cin>>student[i].marks;
//
//         total_marks+=student[i].marks;
//     }
//
//     float average=total_marks/n;
//     cout<<"Average Marks: "<<average<<endl;
//
//     return 0;
// }