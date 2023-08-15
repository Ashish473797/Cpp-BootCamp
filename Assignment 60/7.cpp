// Write a program to print the reverse zigzag of a BT.

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
        
        void preOrder()
        {
            if(this != NULL)
            {
                cout<<data<<" ";
                left->preOrder();
                right->preOrder();
            }
        }
        
        void inOrder()
        {
            if(this != NULL)
            {
                left->preOrder();
                cout<<data<<" ";
                right->preOrder();
            }
        }
        
        void postOrder()
        {
            if(this != NULL)
            {
                left->preOrder();
                right->preOrder();
                cout<<data<<" ";
            }
        }
        
        
        void levelOrder()
        {
            int lv = this->level(); 
            for(int i = 0; i <= lv; i++)
            {
                printLevel(i);
            }
        }
        
        void printLevel(int level)
        {
            if(this == NULL)
            return;
            
            if(level == 0)
            {
                cout<<this->data<<" ";
            }
            else if(level > 0)
            {
                this->right->printLevel(level-1);
                this->left->printLevel(level-1);
            }
        }
        
        int height()
        {
            if(this == NULL)
            {
                return 0;
            }
            else
            {
                int leftHeight = this->left->height();
                int rightHeight = this->right->height();
                
                if(leftHeight > rightHeight)
                {
                    return leftHeight + 1;
                }
                else
                {
                    return rightHeight + 1;
                }
            }
        }
        
        int level()
        {
            if(this == NULL)
            {
                return -1;
            }
            else
            {
                int rightHeight = this->right->height();
                int leftHeight = this->left->height();
                
                if(leftHeight > rightHeight)
                {
                    return leftHeight;
                }
                else
                {
                    return rightHeight;
                }
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
    
    // cout<<endl<<"Pre-Order: ";
    // root->preOrder();
    // cout<<endl<<"In-Order: ";
    // root->inOrder();
    // cout<<endl<<"Post-Order: ";
    // root->postOrder();
    cout<<endl<<"Level-Order: ";
    root->levelOrder();
    
    // cout<<endl<<"Height: "<<root->height();
    
    // cout<<endl<<"Level: "<<root->level();
    
    // cout<<endl<<"Level-Second: ";
    // root->printLevel(2);
    
    return 0;
}