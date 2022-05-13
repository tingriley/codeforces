//489B. BerSU Ball
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    int res = 0;
    cin >> n;
    vector<int>b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;

    vector<int>g(n);
    for(int i = 0 ; i < m; i++)
        cin >> g[i];

    int i = 0, j = 0;
    while(i < n && j < m){
        if(abs(b[i]-g[j]) <= 1){
            res ++;
            i++;
            j++;
        }
        else if(abs(b[i]-g[j]) > 1 && b[i] < g[j]){
            i++;
        }
        else if(abs(b[i]-g[j]) > 1 && g[j] < b[i]){
            j++;
    }
    cout << res << endl;
    return 0;
}
