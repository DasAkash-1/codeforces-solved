#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    string s;
    cin >> n >> s;

    int len = 26;

    for (int i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    //sort alphabetically
    sort(s.begin(), s.end());
    
    for (int i = 0; i < n; i++)
    {
        //checck if current element and the next one are not equal
        if (s[i] != s[i + 1]) count++;
    }

    if (count == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}