#include <bits\stdc++.h>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;

    while (n)
    {
        if (n % 2 == 1) sum++;
        n /= 2;
    }
    
    cout << sum << '\n';
}