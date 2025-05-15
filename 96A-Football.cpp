#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();
    
    string s;
    cin >> s;

    int count = 1;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1]) {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        }
        else count = 1;
    }
    cout << "NO" << endl;
}