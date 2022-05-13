#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    map<ll, ll>mp;
    ll n, x;
    ll k;
    ll need = 0;
    ll sum = 0;
    ll res = 0;
    cin >> n;
    vector<ll>nums;
    for(int i = 0; i < n; i++){
        cin >> x;
        nums.push_back(x);
        sum += x;
    }
    if(2*sum%n!=0){
        cout << 0 << endl;
        return;
    }

    need = 2*sum/n;
    for(int i = 0; i < n; i++){
        if(mp.find(need-nums[i])!=mp.end())
            res += mp[need-nums[i]];
        mp[nums[i]]++;
    }
    cout << res << endl;


}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
