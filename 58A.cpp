#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s;
    cin >> s;
    string h = "hello";
    int count  = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == h[count]) count++;
    }
    if(count == 5) cout << "YES" << endl;
    else cout << "NO" << endl;
}