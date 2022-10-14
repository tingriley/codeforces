#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> s;
        int mp[256] = {};
        for (int i = 0; i < n; i++) {
            while (s[i] > 'a') {
                if (mp[s[i]])
                    s[i]--;
                else if (k) {
                    k--;
                    mp[s[i]] = 1;
                    s[i]--;
                } else {
                    break;
                }
            }
        }
        cout << s << endl;
    }
}