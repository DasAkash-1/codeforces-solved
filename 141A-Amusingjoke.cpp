#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t, l;
   
    cin >> s >> t >> l;
    string final = s + t;
    sort(final.begin(), final.end());
    sort(l.begin(), l.end());

    if (final == l)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}