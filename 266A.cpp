#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1]) count++;
    }
    cout << count << endl;
}