#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, m;
    cin >> n >> m;

    vector <int> v(n);
    vector <int> t(n);

    for (auto& x: v) {
        cin >> x;
        if (x < 0) t.push_back(x);
    }
    sort(t.begin(), t.end());
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        count += t[i];
    }
    cout << abs(count) << endl;
}