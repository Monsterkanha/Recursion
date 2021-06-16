#include<iostream>
#include<stack>

using namespace std;
void insert(stack<int> &s , int temp)
{
    if(s.empty())
    {
        s.push(temp);
        return ;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}
void revstack(stack<int> &s)
{
    if(s.size() == 1)
    {
        return ;
    }
    int temp = s.top();
    s.pop();
    revstack(s);
    insert(s,temp);

}

int main()
{
    stack<int> s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    revstack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();

    }

}