#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem, sum = 0;
        cin >> n;

        while (n)
        {
            rem = n % 10;
            sum += rem;
            n /= 10;
        }
        cout << sum << '\n';
    }
}