#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        
        for (int i = 1; i <= n; i++)
        {
            if (s[i] == 'L' && s[i - 1] == 'R')
            {
                cout << 0 << endl;
                break;
            }
            else if (s[i] == 'R' && s[i - 1] == 'L')
            {
                cout << i << endl;
                break;
            }
            else if (s[i] == s[i - 1]) count++;
        }
        //n -1 is size of str, if same char length is same as the str length then its -1.
        if (count == n - 1) cout << -1 << endl;
    }
}