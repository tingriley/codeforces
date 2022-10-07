// 1734C. Removing Smallest Multiples
/* Very similiar to Sieve of Eratosthenes*/
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    vector<int> t(n + 1, 0);
    vector<int> cost(n + 1, 0);
    for (int i = 0; i < n; i++) {
        t[i + 1] = (str[i] == '1');
    }
    for (int i = 1; i <= n; i++) {
        if (t[i] == 0) {
            for (int j = i; j <= n; j += i) {
                if (t[j] == 1)
                    break;
                if(cost[j] == 0)
                    cost[j] = i;
            }
        }
    }
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (t[i])
            cost[i] = 0;
        sum += cost[i];
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
