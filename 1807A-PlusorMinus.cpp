#include <bits\stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, p;
        cin >> a >> b >> c;
        p = a + b;
        if (p == c) cout << "+" << '\n';
        else cout << "-" << '\n';
    } 
}