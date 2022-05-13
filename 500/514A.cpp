//A. Chewbaсca and Number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        int d = s[i] - '0';
        if(i == 0 && (9-d) == 0)continue;
        if((9-d) < d)
            s[i] = (9-d)+'0';
    }
    cout << s << endl;
    
    return 0;
}
