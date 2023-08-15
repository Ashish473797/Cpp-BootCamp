// Find the length of the diameter of the tree.

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

        int diameter()
        {
            if(this == NULL)
            {
                return 0;
            }
            return leftHeight() + rightHeight() - 1; 
        }

        int leftHeight()
        {
            if(this == NULL)
            {
                return 0;
            }
            else{
                return this->left->leftHeight() + 1;
            }
        }

        int rightHeight()
        {
            if(this == NULL)
            {
                return 0;
            }
            else{
                return this->right->rightHeight() + 1;
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

    cout<< "Diameter of the three is: " << root->diameter();

    return 0;
}