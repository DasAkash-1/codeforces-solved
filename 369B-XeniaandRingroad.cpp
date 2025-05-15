#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long

int main(){
    optimize();

    ll n, m;
    cin >> n >> m;
    
    ll t1 = 1, tt = 0;

    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        if (x >= t1) tt += x - t1;
        else tt += n - t1 + x;
        t1 = x;
    }
    cout << tt << endl;
}