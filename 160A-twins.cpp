#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();
    int n, sum = 0;
    cin >> n;

    vector <int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.rbegin(), v.rend());

    int count = 0, coins = 0;

    for (int i = 0; i < n; i++)
    {
        coins += v[i];
        count++;
        if (coins > (sum / 2)) break;
    }
    cout << count << endl;
}