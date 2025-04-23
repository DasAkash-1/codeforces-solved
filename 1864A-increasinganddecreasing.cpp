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
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> a(n);
        a[0] = x;
        a[n - 1] = y;
        int j = 1;

        for (int i = n - 2; i >= 1; i--)
        {
            a[i] = a[i + 1] - j;
            j++;
        }
        if (a[1] - a[0] > a[2] - a[1])
        {
            for (auto s : a)
                cout << s << " ";
        }
        else
            cout << -1;

        cout << endl;
    }
}