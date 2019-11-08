#include<bits/stdc++.h>
using namespace std;

int dp[10000];
dp[0]=dp[1]=1;

int main()
{
    int n;
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;
}
