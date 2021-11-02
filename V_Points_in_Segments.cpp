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
 ll a,b,c,n,x;
 cin>>n>>x;
 ll arr[x+2]={0};
 ll i,j;
 for(i=0;i<n;i++)
 {
     ll z1,z2;
     cin>>z1>>z2;
     arr[z1]++;
     arr[z2+1]--;
 }
 vector<ll> ans;
 ll sum=0;
 for(i=1;i<=x;i++)
 {
     sum+=arr[i];
     if(sum==0)
     {
         ans.pb(i);
     }
 }
 cout<<ans.size()<<endl;
 for(auto x:ans)
 cout<<x<<" ";
 return 0;
}
