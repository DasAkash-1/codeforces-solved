#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s;
    cin >> s;

    vector <int> t;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.') t.push_back(0);
        
        else if (s[i] == '-') {
            if (s[i + 1] == '.') t.push_back(1);
            else t.push_back(2);
            i++;
        }
    }
    for (auto u: t) cout << u;

    cout << endl;
}