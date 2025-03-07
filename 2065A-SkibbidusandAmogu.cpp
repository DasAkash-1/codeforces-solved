#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string t = "";

        for (int i = 0; i < s.length() - 2; i++) t += s[i];
        
        cout << t + 'i' << '\n';
    }
}