//1363A. Odd Selection
#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t;
    int n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        vector<int>a(n);
        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++){
        	cin >> a[i];
        	if(a[i]%2)odd++;
        	else even++;
        }
        bool find = false;
        for(int i = 1; i <= odd && i<=x; i+=2){
        	if(even >= x-i){
        		find = 1;
        		break;
        	}
        }

        if(find)
        	cout << "Yes\n";
        else
        	cout << "No\n";

        
    }
    return 0;
}
