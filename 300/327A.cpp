//327A. Flipping Game
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int one = 0;
    int sum = 0;
    int res = 0;
    cin >> n;
    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1)one++;

    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 0)sum++;
        else sum--;
        res = max(res, sum);
        sum = max(0, sum);
    }
    if(one == n)
        cout << n-1 << endl;
    else
        cout << one + res << endl;
    return 0;
}
