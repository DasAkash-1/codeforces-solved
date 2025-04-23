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
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
 
        for (int i = 0; i < n; i++) cin >> v[i];
 
        for (int i = 0; i < n - 1 && k > 0; i++)
        {
            int minim = min(v[i], k);
            v[i] -= minim;
            k -= minim;
            v[n - 1] += minim;
        }
        
        for (auto x: v) cout << x << " ";
        cout << endl;
    }
}