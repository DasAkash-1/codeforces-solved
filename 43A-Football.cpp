#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, maxs = 0;
    cin >> n;

    map <string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;

        mp[s]++;

        if (mp[s] > maxs) maxs = mp[s];
    }

    string w;
    for (auto [k, v]: mp) {
        if (v == maxs) w = k;
    }
    cout << w << endl;
}