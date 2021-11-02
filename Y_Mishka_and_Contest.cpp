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
 ll a,b,c,n;
 cin>>n>>c;
 ll arr[n];
 ll i,j;
 for(i=0;i<n;i++)
 cin>>arr[i];
 i=0,j=n-1;
 while(i<=j)
 {
if(arr[i]<=c)
i++;
if(arr[j]<=c)
j--;
if(arr[i]>c&&arr[j]>c)
break;
 }
 if(i>j)
 {
     cout<<n<<endl;
 }
 else
 cout<<i+(n-1-j)<<endl;

 return 0;
}
