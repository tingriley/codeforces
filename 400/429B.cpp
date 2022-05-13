#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, l;
    cin >> n >> l;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];

    }
    sort(arr.begin(), arr.end());
    int max_d = 0;
    for(int i = 1; i < n; i++)
        max_d = max(max_d, arr[i] - arr[i-1]);
    
    int d1 = arr[0];
    int d2 = l - arr[n-1];
    double res = max(1.0*max_d/2, max(d1*1.0, d2*.10));

    cout << res << endl;


    return 0;
}
