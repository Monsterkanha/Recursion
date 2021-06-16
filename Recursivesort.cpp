#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<set>
#include<map>
 
using namespace std;
typedef long long ll;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
#define PB push_back
#define MP make_pair
#define ff first
#define ss second
#define two(w) (1<<(w))
#define test(x,w) (x&two(w))
#define sz(v) (int)v.size()
#define all(c) c.begin(),c.end() 
#define clr(buf,val) memset(buf,val,sizeof(buf))
#define rep(i,l,r) for(int i=(l);i<(r);i++)
#define repv(i,v)  for(int i=0;i<(int)v.size();i++)
#define repi(it,c) for(typeof(c.begin()) it=c.begin();it!=c.end();++it)

using namespace std;
void insert(VI &v, int val)
{
    if(v.size() == 0 || v[v.size() -1] <= val)
    {
        v.push_back(val);
        return;
    }
    int temp = v.back();
    v.pop_back();
    insert(v,val);
    v.push_back(temp);
}
void Sort(VI & v)
{
    if(v.size() == 1)
    {
        return ;

    }
    int val = v[v.size()-1];
    v.pop_back();
    Sort(v);
    insert(v,val);
}


int main()
{
    VI v = {3,1,3,5,4};
    Sort(v);
    rep(i,  0 , v.size())
    {
        cout<<v[i] << " ";
    }
}