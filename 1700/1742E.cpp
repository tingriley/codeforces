// 1742 E. Scuza
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, q;
    int x;

    cin >> n >> q;

    vector<long long> a(n, 0);
    vector<long long> acc(n, 0);
    vector<long long> mx(n, 0);
    long long max_val = 0;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
        acc[i] = total;
        max_val = max(max_val, a[i]);
        mx[i] = max_val;
    }

    for (int i = 0; i < q; i++) {
        cin >> x;
        auto low = upper_bound(mx.begin(), mx.end(), x);
        int id = low - mx.begin() - 1;
        if (id < 0)
            cout << 0 << " ";
        else
            cout << acc[id] << " ";
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
