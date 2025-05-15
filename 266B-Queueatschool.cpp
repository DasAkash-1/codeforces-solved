#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, m;
    cin >> n >> m;
    string s;

    cin >> s;
    

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < s.size() - 1; i++){
        if (s[i] == 'B' && s[i + 1] == 'G') {
            swap(s[i], s[i + 1]);
            i++;
            }
        }
    }
    
    cout << s << endl;
}