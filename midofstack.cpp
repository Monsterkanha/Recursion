#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s , int  k)
{
    if(k == 1)
    {
        s.pop();
        return ;
    }
    int temp = s.top();
    s.pop();
    solve(s, k-1);
    s.push(temp);
}
void prints(stack<int> &s )
{
    if(s.empty() == 1)
    {
        return ;
    }
    int x = s.top();
    s.pop();
    cout<<x<<" ";
    prints(s);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int k = 3;
    solve(s, k);
    prints(s);
}