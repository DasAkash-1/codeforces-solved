#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int m;
    cin >> m >> s;
    int a = 0, d = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A') a++;
        else if (s[i] == 'D') d++;
    }
    if (a > d) cout << "Anton" << endl;
    else if (a < d)cout << "Danik" << endl;
    else cout << "Friendship" << endl;
    return 0;
    
}