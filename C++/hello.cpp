
#include <bits/stdc++.h>
using namespace std;
const int N=10000000;
//...................................
#define FAST    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll      long long int
#define ss      second
#define ff      first
#define pb      push_back
#define pll     pair<ll,ll>
#define F(i,n)  for(ll i=0;i<n;i++)
#define vll     vector <ll>
#define t_case  ll test;cin>>test;while(test--)
#define all(a)  a.begin(),a.end()
//...................................
bool cmp(pair<double,double> x,pair<double,double> y) {return (x.ff/x.ss)>(y.ff/y.ss);}
ll min3(ll x,ll y,ll z) {return min(x,min(y,z));}
ll max3(ll x,ll y,ll z) {return max(x,max(y,z));}
ll powrec(ll a,ll n){if(n==0) return 1;ll res=powrec(a,n/2);if(n%2)return res*res*a;else return res*res;}
ll powloop(ll a,ll n){ll res=1;while(n>0){if(n&1)res=res*a;a=a*a;n>>=1;}return res;}
ll powmod(ll a,ll n,ll m){a%=m;ll res=1;while(n>0){if(n&1)res=res*a%m;a=a*a%m;n>>=1;}return res;}
ll gcd (ll a, ll b) {if (b == 0) return a; else return gcd (b, a % b);}
//...................................
int main()
{
    //t_case
    {
        cout<<"HELLO_COPS";
    }
        return 0;
}
