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
 ll t;
string s;
ll x1,x2,n;
cin>>x1>>x2>>n;
ll sum=0;
for(ll i=1;i<=n;i++)
{
    if((ll)(min(x1,x2))<=0)
    break;

sum+=((x1*2+x2*2)-4);
x1-=4;
x2-=4;

}
cout<<sum<<endl;
return 0;
}