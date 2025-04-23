#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
     
int main(){
    optimize();
    int t;
    cin >> t;
     
    vector<int> p(t);
    for (int i = 0; i < t; i++) cin >> p[i];
     
    sort(p.begin(), p.end());
        
    int q, x, count;
    cin >> q;
     
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        auto it = upper_bound(p.begin(), p.end(), x);
        count = it - p.begin();
        cout << count << endl;
    }
}