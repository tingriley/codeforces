// 1384 A.Common Prefixes
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		string s(200, 'a');
		cout << s << endl;

		int x = 0;
		for(int i = 0 ; i < n; i++){
			cin >> x;
			s[x] = (s[x] == 'a' ? 'b' : 'a');
			cout << s << endl;
		}
		
	}
	return 0;
}