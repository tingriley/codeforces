// 1730C. Minimum Notation
#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int mi = 10;
    vector<int> count(10, 0);
    string res;
    for (int i = 0; i < s.size(); i++) {
        count[s[i] - '0']++;
        mi = min(mi, s[i] - '0');
    }
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') == mi) {
            res += s[i];
        } else {
            res += char(min(9, s[i] - '0' + 1) + '0');
        }
        count[s[i] - '0']--;
        while (count[mi] == 0 && mi <= 8) {
            mi++;
        }
    }
    sort(res.begin(), res.end());
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
