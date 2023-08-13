// Write a program to find the height of a tree.

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;

        Node(int val) {
            data = val;
            left = NULL;
            right = NULL;
        }

        int hieght() {

            if(this == NULL)
            return 0;
            else
            {
                int leftHt = this->left->hieght() + 1;
                int rightHt = this->right->hieght() + 1;
                if(leftHt > rightHt)
                return leftHt;
                else
                return rightHt;
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

    cout<<root->hieght();

    return 0;
}