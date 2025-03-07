#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s = "codeforces";
        char t;
        cin >> t;
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == t) count++;
        }

        if (count > 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
        
    }
    
}