/* Given a singly linked list, find the middle of the linked list. For example, if the given
linked list is 1->2->3->4->5 then the output should be 3.
If there are even nodes, then there would be two middle nodes, we need to print the
second middle element. For example, if the given linked list is 1->2->3->4->5->6 then
the output should be 4. */

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

        int middle()
        {
            int mid = size/2;
            Node *t = head;
            while(mid)
            {
                t = t->next;
                mid--;
            }
            return t->value;
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
        }
};

int main()
{
    SLL l1;
    l1.insert(14);
    l1.insert(21);
    l1.insert(11);
    l1.insert(10);
    l1.insert(20);
    l1.insert(40);
    l1.showData();
    
    cout<<endl<<l1.middle();
    
    return 0;
}