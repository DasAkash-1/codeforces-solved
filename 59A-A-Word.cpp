#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int up = 0, lo = 0;

    for (int  i = 0; i < s.length(); i++)
    {
        if (islower(s[i])) lo++;
        else if(isupper(s[i])) up++;
    }
    if (up>lo)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else if (lo >up)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }

    cout << s << endl;
    return 0;
}