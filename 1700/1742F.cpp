// 1742 F. Smaller
#include <bits/stdc++.h>
using namespace std;
bool not_all_a(string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != 'a')
            return true;
    }
    return false;
}
void solve() {

    int n, k, t;
    string str;
    cin >> t;
   
    long long countA = 1;
    long long countB = 1;
    bool otherA = false, otherB = false;
    while (t--) {
        
        cin >> n >> k >> str;
        for (auto& ch : str) {
            if (n == 1) {
                if (ch != 'a') {
                    otherA = 1;
                } else {
                    countA += k;
                }
            } else {
                if (ch != 'a') {
                    otherB = 1;
                } else {
                    countB += k;
                }
            }
        }

        if (otherB) {
            cout << "YES\n";
        } else if (!otherA && countA < countB) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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
