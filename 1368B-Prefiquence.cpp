#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int i = 0, j = 0;

        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                i++;
                j++;
            }
            else j++;
        }
        cout << i << endl;
    }
}