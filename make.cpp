//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    set<int>s;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    s.insert(x);
    mp[x]++;
    }
    if (s.size()==1)
    {
       cout<<0<<'\n';
       return;
    }
    int sum=0;
    for(auto&x:mp)
    {
        sum=max(sum,x.second);
    }
    cout<<(n-sum)<<'\n';
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}