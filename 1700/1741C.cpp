// 1741 D. Masha and a Beautiful Tree
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int thickness(vector<ll> & a, int x, ll s){
    ll sum = 0;
    
    if(x >= a.size())return 0;
    for(int i = x; i < a.size(); i++){
        sum += a[i];
        if(sum > s){
            return a.size();
        }
        if(sum == s){
           return max(i-x+1, thickness(a, i+1, s));
        }
    }
    return a.size();
}
void solve() {
    int n; cin >> n;
    vector<ll>a(n);
    vector<ll>acc(n);
    ll s = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
        acc[i] = s;
    }
    int ans = n;
    for(int i = 0; i < n-1; i++){
        ans = min(ans, thickness(a, 0, acc[i])); // start from zero to calculate thickness
    }
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
