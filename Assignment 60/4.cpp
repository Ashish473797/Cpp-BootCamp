// Write a program to find the minimum element in a BST.

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        
        Node()
        {
            data = 0;
            left = NULL;
            right = NULL;
        }
        
        Node(int val)
        {
            data = val;
            left = NULL;
            right = NULL;
        }
        
        Node* insert(int val)
        {
            if(this == NULL)
            {
                return new Node(val);
            }
            if(val > this->data)
            {
                this->right = this->right->insert(val);
            }
            else if(val < this->data)
            {
                this->left = this->left->insert(val);
            }
            return this;
        }
        
        Node* del(int val)
        {
            if(this == NULL)
            {
                return this;
            }
            if(val < this->data)
            {
                this->left = this->left->del(val); 
            }
            else if(val > this->data)
            {
                this->right = this->right->del(val);
            }
            else
            {
                if((this->left == NULL) && (this->right == NULL))
                {
                    Node *temp = this;
                    delete this;
                    return NULL;
                }
                else if(this->left == NULL)
                {
                    Node *temp = this->right;
                    delete this;
                    return temp;
                }
                else if(this->right == NULL)
                {
                    Node *temp = this->left;
                    delete this;
                    return temp;
                }
                else
                {
                    Node* temp = this->successor();
                    this->data = temp->data;
                    this->right = this->right->del(temp->data);
                }
            }
            return this;
        }

        void search(int val)
        {
            if(this == NULL)
            {
                return;
            }
            if(this->data == val)
            {
                cout<<endl<<val<<" Is Found."<<endl;
            }
            else if(val > this->data)
            {
                this->right->search(val);
            }
            else if(val < this->data)
            {
                this->left->search(val);
            }
        }
        
        Node* minElement()
        {
            if(this == NULL || this->left == NULL)
            return this;
            else
            return this->left->minElement();
        }
        
        Node* maxElement()
        {
            if(this == NULL || this->right == NULL)
            return this;
            else
            return this->right->maxElement();
        }
        
        Node* successor()
        {
            if(this == NULL || this->left == NULL)
            return this;
            else
            return this->right->minElement();
        }
        
        Node* predecesor()
        {
            if(this == NULL || this->right == NULL)
            return this;
            else
            return this->left->maxElement();
        }
        
        void inOrder()
        {
            if(this != NULL)
            {
                this->left->inOrder();
                cout<<this->data<<" ";
                this->right->inOrder();
            }
        }
};

int main()
{
    Node *root = new Node(4);
    root->insert(3);
    root->insert(5);
    root->insert(1);
    root->insert(7);
    root->insert(2);
    root->insert(6);
    root->inOrder();
    cout<<endl<<"Min: "<<root->minElement()->data;
    cout<<endl<<"Max: "<<root->maxElement()->data;
    cout<<endl<<"predecesor: "<<root->predecesor()->data;
    cout<<endl<<"successor: "<<root->successor()->data;
    
    root->del(4);
    cout<<endl;
    root->inOrder();

    root->search(6);
    return 0;
}