#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include<bits/stdc++.h>
#include<vector>
#include<string>
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
#define inf INT_MAX
#define nl "\n"
#define debug(v)  for(int i = 0 ; i < v.size() ; i++){cout<<v[i]<<" ";}

#define inparr(arr,n) int arr[n] ; for(int i = 0 ; i < n ; i++){cin>>arr[i];}

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.ff == b.ff)
        return (a.second < b.second);
    return (a.ff > b.ff);
}

void dvpii(vector<PII> v)
{
    rep(i , 0 , v.size())
    {
        cout<<i+1<<" "<<v[i].ff<<" "<<v[i].ss<<nl;
    }
}


void genp(int open , int close , string op)
{
    if(open == 0 && close == 0)
    {
        cout<<op<<nl;
        return;
    }
    if(open == 0)
    {
        genp(open , close - 1, op +')');
    }

    else if(open == close)
    {
        genp(open -1 , close, op + '(');
    }
    else
    {
        genp(open - 1, close , op+'(');
        genp(open, close - 1 , op+')');
    }
    return;
}
void solve()
{
    int n= 3;
    
    genp(3 , 3 , "");
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
    // cin>>t ;
    // while(t--)
    solve();
    
    
    
}
