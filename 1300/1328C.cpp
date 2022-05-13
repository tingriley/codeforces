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
		string s;
		string a(n, ' ');
		string b(n, ' ');
		cin >> s;
		bool one = false;
		for(int i = 0; i < s.size(); i++){
			if(!one){
				if(s[i] == '0')a[i] = b[i] = '0';
				else if(s[i] == '1') a[i] = '1', b[i] = '0', one = true;
				else a[i] = b[i] = '1';
			}
			else{
				a[i] = '0';
				b[i] = s[i];
			}
		}
		cout << a << endl;
		cout << b << endl;
		
	}
	return 0;
}