// 1696C. Fishingprince Plays With Array
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin >> n;
    string s;
    priority_queue<ll>pq;
    ll sum = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            sum += i;
            pq.push(n-1-i-i);
        }
        else{
            sum += (n-i-1);
            pq.push(2*i+1-n);
        }
    }
    for(int i = 1; i <= n; i++){
        ll top = pq.top(); pq.pop();
        if(top >= 0)
            sum += top;
        cout << sum << " ";
    }
    cout << endl;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
