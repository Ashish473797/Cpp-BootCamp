// Write a program to find out the n-th node of  inorder traversal.

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    deque<int> st;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

    int nthNode()
    {
        if (this == NULL)
            return -1;
        else
        {
            inOrder();
            if(st.empty())
            return -1;
            else
            return st.front();
        }
    }

    void inOrder()
    {
        if (this == NULL)
        {
            return;
        }
        else
        {
            this->left->inOrder();
            cout << this->data << " ";
            this->right->inOrder();
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

    cout << endl << "N-th node in InOrder Traversal: " << root->nthNode();

    return 0;
}