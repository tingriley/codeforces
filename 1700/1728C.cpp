// 1728 C Digital Logarithm
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    priority_queue<int> pa;
    priority_queue<int> pb;

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pa.push(x);
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pb.push(x);
    }
    while (!pa.empty() && !pb.empty()) {
        int x1 = pa.top();
        int x2 = pb.top();
        if (x1 == x2) {
            pa.pop();
            pb.pop();
        } else if (x1 > x2) {
            ans++;
            pa.push(to_string(pa.top()).size());
            pa.pop();
        } else if (x1 < x2) {
            ans++;
            pb.push(to_string(pb.top()).size());
            pb.pop();
        }
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
