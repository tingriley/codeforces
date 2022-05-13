//474B. Worms
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    int res = 0;
    cin >> n;
    vector<int>a(n+1);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        a[i+1] = sum;
        
    }
 
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        cout << it-a.begin() << endl;
    }
    
    return 0;
}