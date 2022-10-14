// 1726C Jatayu's Balanced Bracket Sequence
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int x = (int)sqrt(2 * n);
    int t = x * x;
    vector<vector<int>> g(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++)
            if (j * j - i >= 0 && (j * j - i) < n)
                g[i].push_back(j * j - i);
    }
    sort(g.begin(), g.end(), [](const vector<int>& a, const vector<int>& b) {
        return a.size() < b.size();
    });
    
    for(int i = 0; i < n; i++){
        int x = g[i][0];
        g[i].erase()
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
