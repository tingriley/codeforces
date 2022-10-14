// 1741 D. Masha and a Beautiful Tree
#include <bits/stdc++.h>
using namespace std;
int sort(vector<int> &a, int l, int r){
    if(r-l == 1)return 0;
    int m = (l+r) >> 1;
    int mal = *max_element(a.begin() + l, a.begin() + m);
	int mar = *max_element(a.begin() + m, a.begin() + r);
    int ans = 0;
	if (mal > mar) {
		++ans;
		for (int i = 0; i < (m - l); ++i)
			swap(a[l + i], a[m + i]);
	}
	return sort(a, l, m) + sort(a, m, r) + ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = sort(a, 0, n);
    if (is_sorted(a.begin(), a.end()))
        cout << ans << endl;
    else
        cout << -1 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
