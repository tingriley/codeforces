// 1673C. Palindrome Basis
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
bool ispalindrome(int x){
    if(x < 10)return true;
    string s = to_string(x);
    int l = 0, r = s.size()-1;
    while(l < r){
        if(s[l]!=s[r])return false;
        l++;
        r--;
    }
    return true;
}
int main(){ 
    int t,n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>dp(n+1, 0);
        dp[0] = 1;
        for(int i = 1; i <= n/2; i++){
            dp[n] += dp[n-i]+dp[i];
        }
        cout << dp[n] << endl;
    }
}