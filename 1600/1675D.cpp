#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
    	vector<int>p(n+1, 0);
    	vector<int>v(n+1, 0); // visited
    	vector<int>leaves(n+1, 1);
    	for(int i = 1; i <= n; i++){
    		cin >> p[i];
    		if(i!=p[i])
    			leaves[p[i]] = 0;
    	}
    	vector<vector<int>>path;
    	for(int i = 1; i<=n; i++){
    		if(v[i])continue;
    		int x = i;
    		vector<int>res;
    		if(leaves[i]){
	    		while(!v[x]){
	    			res.push_back(x);
	    			v[x] = 1;
	    			x = p[x];
	    		}
	    		reverse(res.begin(), res.end());
	    		path.push_back(res);
    		}
    	}
    	if(path.size()==0)continue;
    	cout << path.size() << endl;
    	for(int i = 0; i < path.size(); i++){
    		cout << path[i].size() << endl;
    		for(auto &x:path[i])
    			cout << x << " ";
    	}
        cout << endl;
    }
    return 0;
    	
}

