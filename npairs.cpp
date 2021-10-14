#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define ull unsigned long long
#define pb push_back
#define pof pop_front
#define pbf push_front
#define ff first
#define ss second
#define mod 1000000007
#define endl "\n" 
//Manish Rai
inline void fast()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
  fast();
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<int,int>mp,mp1;
    for(int i=0;i<n;i++)
    {
      mp[i-(s[i]-'0')]++;
      mp1[i+(s[i]-'0')]++;
    }
    ll res=0;
    for(auto it:mp)
    {
      ll count=it.second;
      res+=((count*(count-1))/2);
    }
    for(auto it:mp1)
    {
      ll count=it.second;
      res+=((count*(count-1))/2);
    }
    cout<<res<<endl;
  }
}
