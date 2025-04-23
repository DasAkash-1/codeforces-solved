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
        int n;
        cin >> n;
        vector <int> v(n);
        vector <int> v1;

        for (int i = 0; i < n; i++) cin >> v[i];
        int st = 0, end = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                v1.push_back(v[st]);
                st++;
            }
            else{
                v1.push_back(v[end]);
                end--;
            }
        }
        for (auto c: v1) cout << c << " ";

        cout << endl;
    }
}