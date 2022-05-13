//B. Mr. Kitayuta's Colorful Graph
#include<bits/stdc++.h>
using namespace std;
int ans = 0;

int find(vector<vector<int>>&p, int x, int color){
    if(p[x][color] == x)return x;
    return p[x][color] = find(p, p[x][color], color);
}

void uni(vector<vector<int>>&p, int x, int y, int color){
    int px = find(p, x, color);
    int py = find(p, y, color);
    p[py][color] = px;

}

int main()
{
    int n, m, q;
    cin >> n >> m;
    vector<vector<int>>p(101, vector<int>(101, 0));
    for(int i = 0; i<= 100; i++)
        for(int j = 0; j<= 100; j++)
            p[i][j] = i;

    for(int i = 0; i < m; i++){
        int x, y, c;
        cin >> x >> y >> c;
        uni(p, x, y, c);
    }

    cin >> q;
    for(int i = 0; i < q; i++){
        int x, y, res = 0;
        cin >> x >> y;
        for(int j = 0; j<= 100; j++){
            if(find(p, x, j) == find(p, y, j)){
                res++;
            }
        }
        cout << res << endl;
    }
    
    return 0;
}
