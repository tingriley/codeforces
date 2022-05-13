#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, a;
    cin >> m >> n >> a;

    unsigned long long val = ceil(1.0*m/a)*ceil(1.0*n/a);
    cout << val << endl;
    return 0;
}
