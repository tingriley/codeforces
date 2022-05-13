#include<bits/stdc++.h>
using namespace std;
#define ll long long

int res = 0;
vector<int>dfs(vector<vector<int>>& g, int root, string &s){
    if(g[root].size()==0){
        if(s[root] == 'W') {
            return {1, 0};
        }
        else
            return {0, 1};
    }
    
    int w = 0, b = 0;
    if(s[root] == 'W'){
        w = 1;
    }
    else{
        b = 1;
    }

    for(auto &v:g[root]){
        auto x = dfs(g, v, s);
        w += x[0];
        b += x[1];
    }
    if(w==b)res++;
    return {w, b};

}

int main()
{
    int t = 0;
    cin >> t;
    while(t--){
        int n, x;
        int root = 1;
        res = 0;

        string s;
        cin >> n;
        vector<vector<int>>g(n+1);
    
        for(int i = 2; i <= n; i++){
            cin >> x;
            g[x].push_back(i);
        }
        cin >> s;
        s = "0" + s;
        dfs(g, 1, s);
        cout << res << endl;

    }

    return 0;
}
