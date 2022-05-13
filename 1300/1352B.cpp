//1352

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int t;
	ll n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		vector<ll>odd(k, 0);
		vector<ll>even(k, 0);
		bool flag1 = false;
		bool flag2 = false;

		ll sum = 0;
		for(int i = 0; i < k-1; i++){
			sum+=1;
			odd[i] = 1;
		}
		odd[k-1] = n-sum;
		if(odd[k-1] > 0 && odd[k-1]%2)flag1 = true;

		sum = 0;
		for(int i = 0; i < k-1; i++){
			sum+=2;
			even[i] = 2;
		}
		even[k-1] = n-sum;

		if(even[k-1] > 0 && even[k-1]%2 == 0)flag2 = true;

		if(flag1){
			cout << "YES\n";
			for(auto &x:odd)cout << x << " ";
			cout << endl;
		}

		else if(flag2){
			cout << "YES\n";
			for(auto &x:even)cout << x << " ";
			cout << endl;
		}
		else{
			cout << "NO\n";
		}

	}

	return 0;
}