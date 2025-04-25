#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, evn = 0, odd = 0;
    cin >> n;
    vector <int> v(n);
    for (auto& x: v) 
    {
        cin >> x;
        if (x % 2 == 0) evn++;
        else odd++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0 && odd > evn || v[i] % 2 == 1 && evn > odd)
        {
            cout << i + 1 << endl;
        }
    }
}