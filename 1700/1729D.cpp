// 1729D - Friends and the Restaurant
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<int>x(n);
    vector<int>y(n);
    vector<int>diff(n);
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    for(int i = 0; i < n; i++){
        cin >> y[i];
    }
    for(int i = 0; i < n; i++){
        diff[i] = y[i] - x[i];
    }
    sort(diff.begin(), diff.end(), greater<int>());
    int j = n -1;
    int count = 0;
    for(int i = 0; i < n; i++){
        while(j > i && (diff[j] + diff[i] < 0)){
            j--;
        }
        
        if(j <= i)break;
        count++;
        j--;
    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
