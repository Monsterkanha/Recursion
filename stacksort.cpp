#include<bits/stdc++.h>
#include<string>

using namespace std;

bool mycomp(int x,int y)
{
    return x%2 < y%2;
}
int main()
{
    int arr[] = {1,4,2,15,1,3,2};
    sort(arr , arr + 7 , mycomp);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }

}