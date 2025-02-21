#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, t;

    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < t.length(); i++)
    {
        t[i] = tolower(t[i]);
    }

    if (s > t) cout << "1" << endl;
    else if (s < t) cout << "-1" << endl;
    else cout << "0" << endl;

    return 0;
    
}