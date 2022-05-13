// B. Ternary String
#include<bits/stdc++.h>
using namespace std;
 
int main()
{	
	int t = 0;
	cin >> t;
	string s;

	while(t--){
		vector<int>cnt(4, 0);
		cin >> s;
		int m = s.size();
		bool find = false;
		int j = 0;
		for(int i = 0; i < s.size(); i++){
			cnt[s[i]-'0']++;
			if(cnt[1] && cnt[2] && cnt[3]){
				while(cnt[s[j]-'0'] > 1){
					cnt[s[j]-'0']--;
					j++;
				}
				find = true;
				m = min(m, i-j+1);
			}
		}
		if(find)
			cout << m << endl;
		else
			cout << 0 << endl;

	}
	return 0;
}