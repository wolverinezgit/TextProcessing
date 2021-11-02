//FUCK RATINGS IN IT FOR THE EXPERIENCE!!!
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
using namespace std;
 
typedef long long int  ll;
#define S second
#define v vector
#define dbg(x)              cout<<#x<<"="<<(x)<<endl;
#define dbg2(x,y)           cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<endl;
#define dbg3(x,y,z)         cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<endl;
#define dbg4(x,y,z,w)       cout<<#x<<"="<<(x)<<" "<<#y<<"="<<(y)<<" "<<#z<<"="<<(z)<<" "<<#w<<"="<<(w)<<endl;
#define mp make_pair
#define pb push_back
#define endl                '\n'
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//  void ab(string s,int c)
//  {
// ll i, n=s.size();
 
 
 
//  }
 
int main()
{
 
 fast_cin();
 ll a,b,c,n,x,m;
 cin>>n>>m;
 vector<vector<pair<ll,ll>>> v1;
 ll i,j;
 for(i=0;i<n;i++)
 {
     vector<pair<ll,ll>> temp;
     for(j=0;j<m;j++)
     {
char ch;
cin>>ch;
if(ch=='B')
{
    temp.pb({i+1,j+1});
}
     }
     if(temp.size())
     v1.pb(temp);
 }

     ll x3=v1.size()/2;
     ll x4=v1[0].size()/2;
     
     cout<<v1[x3][x4].first<<" "<<v1[x3][x4].second<<endl;
 return 0;
}
