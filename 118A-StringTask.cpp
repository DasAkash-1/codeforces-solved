#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    string s;
    cin >> s;
    set <char> v = {'a','e','i','o','u','y'};
    string t;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        if (v.find(s[i]) == v.end()) {
            t += '.';
            t += s[i];
        }
    }
    cout << t << endl;
}