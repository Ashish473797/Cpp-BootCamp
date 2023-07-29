/* Design a data-structure SpecialStack that supports all the stack operations like
push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should
return minimum element from the SpecialStack. Your task is to complete all the
functions, using stack data-Structure.
Example 1:
Input:
Stack: 18 19 29 15 16
Output: 15
Explanation:
The minimum element of the stack is 15. */

#include<bits/stdc++.h>
using namespace std;

class Stack
{
    private:
        int arr[100];
        int start;
        int size;
        
    public:
        Stack()
        {
            start = -1;
            size = 0;
        }
        
        ~Stack()
        {
            start = -1;
            size = 0;
        }
        
        int isEmpty()
        {
            if(start == -1)
            return 1;
            return 0;
        }
        
        int isFull()
        {
            if(start == 99)
            return 1;
            return 0;
        }
        
        void push(int v)
        {
            if(isFull())
            {
                cout<<endl<<"OverFlow!";
            }
            else
            {
                arr[++start] = v;
                size++;
            }
        }
        
        void pop()
        {
            if(isFull())
            {
                cout<<endl<<"UnderFlow!";
            }
            else
            {
                start--;
                size--;
            }
        }
        
        int top()
        {
            return arr[start];
        }

        int getMin()
        {
            stack<int> s1;
            stack<int> s2;
            stack<int> s3;

            for(int i = 0; i < size; i++)
            {
                s3.push(arr[i]);
            }

            s1.push(s3.top());
            s3.pop();

            while(!s3.empty())
            {
                if(s3.top() > s1.top())
                {
                    while(s1.empty() != 1 && s3.top() > s1.top())
                    {
                    s2.push(s1.top());
                    s1.pop();
                    }

                    s1.push(s3.top());
                    s3.pop();

                    while(!s2.empty())
                    {
                        s1.push(s2.top());
                        s2.pop();
                    }
                }
                else
                {
                    s1.push(s3.top());
                    s3.pop();
                }
            }

        return s1.top();
        
        }
        
        int getSize()
        {
            return size;
        }
        
};

int main()
{
    Stack s;

    int value = 0;
    cout<<"How many Element did You Want: ";
    cin>>value;

    cout<<endl<<"Enter "<<value<<" Elements:"<<endl;
    for(int i = 0; i < value; i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }

    cout<<endl<<"Min Element is "<<s.getMin();
}
