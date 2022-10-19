// 1676F Longest Strike
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto& x : mp) {
        if (x.second >= k)
            a.push_back(x.first);
    }
    if (a.size() == 0) {
        cout << -1 << endl;
        return;
    }

    int mx = 0;
    int lans = a[0], rans = a[0];
    int l = a[0];
    for (int i = 1; i < a.size(); i++) {
        if ((a[i] - a[i - 1]) == 1) {
            if (a[i] - l > mx) {
                lans = l;
                rans = a[i];
                mx = a[i] - l;
            }
        } else {
            l = a[i];
        }
    }

    cout << lans << " " << rans << endl;
}
int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        solve();
    }
}