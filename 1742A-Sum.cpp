#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a[3];
        for (int i = 0; i < 3; i++) cin >> a[i];
        
        sort(a, a+3);
        
        if (a[0] +a [1] == a[2]) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}