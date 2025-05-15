#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();
    
    int n, m;
    cin >> n;

    vector <int> s1(n);
    for (auto& x: s1) cin >> x;

    cin >> m;
    vector <int> s2(m);
    for (auto& x: s2) cin >> x;

    int count = 0;

    vector <int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s2[j] % s1[i] == 0) count++; //v.push_back(s2[j] / s1[i]);
        } 
    }

    int sz = v.size();
    //for (auto x: v) cout << x << " ";
    cout << count << endl;
}