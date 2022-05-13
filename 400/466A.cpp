//A. Cheap Travel
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a, b;

    cin >> n >> m >> a >> b;
    if(m*a <= b){
        cout << a*n << endl; // m-ride is more expensive
    }
    else{
        int remain = n%m;
        int ticket = n/m;
        cout << ticket * b + min(remain * a, b) << endl;
    }
    
    return 0;
}
