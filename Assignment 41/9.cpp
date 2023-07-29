// Create back button functionality using stack.

#include<bits/stdc++.h>
using namespace std;

string current_state_url = "one";
stack<string> forward_stack({"one", "two", "three", "four", "five", "six"});
stack<string> backward_stack;

void visit_new_url(string url)
{
    if(current_state_url != "")
    {
        backward_stack.push(current_state_url);
    }
    current_state_url = url;
}

void forward()
{
    if(forward_stack.empty() || current_state_url == forward_stack.top())
    {
        cout<<"Not Available\n";
        return;
    }
    else
    {
        backward_stack.push(current_state_url);
        current_state_url = forward_stack.top();
        forward_stack.pop();
        cout<<"forward: "<<current_state_url<<endl;
    }
}
void backward()
{
    if(backward_stack.empty() || current_state_url == backward_stack.top())
    {
        cout<<"Not Available\n";
        return;
    }
    else
    {
        forward_stack.push(current_state_url);
        current_state_url = backward_stack.top();
        backward_stack.pop();
        cout<<"backward: "<<current_state_url<<endl;
    }
}

int main()
{
    forward();
    forward();
    backward();
    return 0;
}