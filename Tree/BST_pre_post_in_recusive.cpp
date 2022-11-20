//problem link:
//solve status:
//learnings:

//TC: O(n)
//MC: O(n)

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->value = data;
        this->left = this->right = NULL;
    }

};


void PreOrder(Node *root) {
    if (root == NULL) return;
    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);

}

void InOrder(Node *root) {
    if (root == NULL) return;

    InOrder(root->left);
    cout << root->value << " ";
    InOrder(root->right);

}


void PostOrder(Node *root) {
    if (root == NULL) return;

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";

}




int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Node* root = new Node(4);

    root->right = new Node(6);
    root->left = new Node(3);

    root->left->left = new Node(1);
    root->left->right = new Node(2);



    root->right->right = new Node(7);
    root->right->left = new Node(5);

    // Node* root = new Node(1);
    // root->right = new Node(2);
    // root->right->left = new Node(3);
    // root->right->right = new Node(4);


    cout << "PreOrder: " << endl;
    PreOrder(root);
    cout <<endl<< "InOrder: " << endl;
    InOrder(root);
    cout <<endl<< "PostOrder: " << endl;
    PostOrder(root);



}

/* Construct the below tree
           1
             \
              \
               2
             /   \
            /     \
           3       4
*/




/* Construct the below tree
           4
          /  \
         /    \
        3      6
      /  \    /  \
     1   2   5    7

*/


