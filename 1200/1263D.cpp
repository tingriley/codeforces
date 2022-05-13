// D. Secret Passwords
#include<bits/stdc++.h>
using namespace std;
int ans = 0;

int find(vector<int>& p, int x){
    if(p[x] == x)return x;
    return p[x] = find(p, p[x]);
}

void uni(vector<int>& p, int x, int y){
    int px = find(p, x);
    int py = find(p, y);
    if(px != py)
        p[py] = px;

}

int main()
{
    int n, m, q;
    cin >> n;
    vector<string> s(n);
    set<int>alpha;
    set<int>set;
    vector<int>p(256);
    for(int i = 0; i < p.size(); i++)
        p[i] = i;

    for(int i = 0; i < n; i++){
        cin >> s[i];
        alpha.insert(s[i][0]);
        for(int j = 1; j < s[i].size(); j++){
            uni(p, s[i][0], s[i][j]);
            alpha.insert(s[i][j]);
        }
    }
    for(auto &ch:alpha){
        set.insert(find(p, ch));
    }

    cout << set.size() << endl;

    
    return 0;
}
