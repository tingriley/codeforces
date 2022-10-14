// 1726C Jatayu's Balanced Bracket Sequence
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int res = n;
    for(int i = 1; i < s.size();i++){
        if(s[i] == '(' && s[i-1] == ')')
            res--;
    }

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
