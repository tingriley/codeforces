//1352C. K-th Not Divisible by n
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << k + (k-1)/(n-1) << endl; 
    }
    return 0;
}
