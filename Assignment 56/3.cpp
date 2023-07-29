/* Given a singly linked list, write a function to swap elements pairwise.
Input : 1->2->3->4->5->6->NULL
Output : 2->1->4->3->6->5->NULL */

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
        
        Node()
        {
            value = 0;
            next = NULL;
        }
};

class SLL
{
    private:
        Node *head;
        int size;
        
    public:
        SLL()
        {
            head = NULL;
            size = 0;
        }
        
        void insert(int v)
        {
            Node *temp = new Node();
            temp->value = v;
            
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                Node *t = head;
                while(t->next != NULL)
                {
                    t = t->next;
                }
                t->next = temp;
            }
            size++;
        }
        
        void insertAt(int at, int v)
        {
            if(at <= 0)
            {
                cout<<endl<<"Memory Not Found!"<<endl;
            }
            else if(at == 1)
            {
                insertAtBegin(v);
            }
            else if(at == size)
            {
                insert(v);
            }
            else
            {
                Node *temp = new Node();
                temp->value = v;
                Node *t = head;
                while(at-2)
                {
                    t = t->next;
                    at--;
                }
                temp->next = t->next;
                t->next = temp;
                size++;
            }
        }
        
        void insertAtBegin(int v)
        {
            Node *temp = new Node();
            temp->value = v;
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                temp->next = head;
                head = temp;
            }
            size++;
        }
        
        void del(int v)
        {
            if(count(v)<=0)
            {
                cout<<endl<<"Value Does Not Exist!";
            }
            else
            {
            int till = count(v);
            while(till)
            {
                delAt(search(v));
                till--;
            }
            }
        }
        
        void delAt(int at)
        {
            if(head == NULL || at <= 0)
            {
                cout<<endl<<"Memory Not Found!"<<endl;
            }
            else if(at == 1)
            {
                Node *temp = head;
                head = temp->next;
                delete temp;
                size--;
            }
            else if(at == size)
            {
                int till = size;
                Node *t = head;
                while(till-2)
                {
                    t = t->next;
                    till--;
                }
                Node *temp = t->next;
                t->next = NULL;
                delete temp;
                size--;
            }
            else
            {
                Node *t = head;
                while(at-2)
                {
                    t = t->next;
                    at--;
                }
                Node *temp = t->next;
                t->next = t->next->next;
                delete temp;
                size--;
            }
        }
        
        int search(int v)
        {
            if(count(v)<=0)
            {
                return -1;
            }
            Node *t = head;
            int cnt = 1;
            while(t != NULL)
            {
                if(t->value == v)
                {
                    break;
                }
                else
                {
                    cnt++;
                }
                t = t->next;
            }
            return cnt;
        }

        void swapPair()
        {
            Node *t = head;
            for(int i = 0; i < size/2; i++)
            {
                int temp;
                temp = t->value;
                t->value = t->next->value;
                t->next->value = temp;    
                t = t->next->next;
            }
        }
        
        int count(int v)
        {
            Node *t = head;
            int cnt = 0;
            while(t != NULL)
            {
                if(t->value == v)
                {
                    cnt++;
                }
                t = t->next;
            }
            return cnt;
        }
        
        int getSize()
        {
            return size;
        }
        
        void showData()
        {
            cout<<endl;
            Node *t = head;
            while(t != NULL)
            {
                cout<<t->value<<" ";
                t = t->next;
            }
            cout<<endl;
        }
};

int main()
{
    SLL l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.insert(7);
    l1.showData();

    l1.swapPair();
    l1.showData();
    
    
    return 0;
}