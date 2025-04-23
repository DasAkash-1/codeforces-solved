#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();
    int n;
    cin >> n;
 
    vector <int> a(n);
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += abs(a[i]);
    }
    cout << sum << endl;
    return 0;
}