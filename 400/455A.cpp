#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, x;
    int mx = 0;
    cin >> n;
    ll c[100001] = {};
    for(int i = 0; i < n; i++){
        cin >> x;
        mx = max(mx, x);
        c[x]++;
    }
    vector<ll>dp(mx+1,0);
    dp[1] = c[1];
    for(int i = 2; i <= mx; i++)
        dp[i] = max(dp[i-2] + c[i] *i, dp[i-1]);

    cout << dp[mx] << endl;

    

    return 0;
}
