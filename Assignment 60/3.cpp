// Write a program to print elements of a tree at a given level using recursion.

#include<bits/stdc++.h>
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

        void printLevel(int lev)
        {
            if(this == NULL)
            return;

            if(lev == 0)
            {
                cout<<this->data<<" ";
            }
            else if(lev > 0)
            {
                this->left->printLevel(lev-1);
                this->right->printLevel(lev-1);
            }
        }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->printLevel(1);
    return 0;
}