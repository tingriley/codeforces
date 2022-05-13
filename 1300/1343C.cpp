// 1343 C.Alternating Subsequence
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int sign(int x){
    if(x > 0)return 1;
    return -1;
}
int main()
{
    int t;
    int n, k;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int>a(n);
        ll sum = 0;

        for(int i = 0; i < n; i++)cin >> a[i];

        for(int i = 0; i < n; i++){
            int j = i;
            int cur = a[i];
            while(j < n && sign(a[i]) == sign(a[j])){
                cur = max(cur, a[j]);
                j++;
            }
            sum += cur;
            i = j-1;
        }

        cout << sum << endl;
    }
    return 0;
}
