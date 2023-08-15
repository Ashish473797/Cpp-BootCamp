// Write a program to find out the n-th node of  inorder traversal.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    int nNode()
    {
        Node *temp;
        if(this == NULL)
        return -1;
        else
        temp = nInOrder();
        return temp->data;
    }

    Node* nInOrder()
    {
        if (this == NULL)
        {
            return NULL;
        }
        if (this->right == NULL)
        {
            return this;
        }
        else
        {
            this->right->nInOrder();
        }
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(15);

    cout << endl << "Nth-Node in In-Order is: " << root->nNode() << endl;;

    return 0;
}