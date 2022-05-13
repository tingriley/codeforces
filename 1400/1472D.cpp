//1472D. Even-Odd Game
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
 
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        ll ans = 0;
        vector<int>a(n, 0);
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n; i++) {
            if(i%2==0){
                if(a[i]%2 == 0)
                    ans += a[i];
            }
            else{
                if(a[i]%2)
                    ans -= a[i];
            }
        }
 
        if(ans == 0)
            cout << "Tie\n";
        else if(ans > 0)
            cout << "Alice\n";
        else 
            cout << "Bob\n";
    }
    return 0;
}