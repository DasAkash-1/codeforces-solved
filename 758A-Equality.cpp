#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

     sort(a, a + n);
    int sum = 0, bonus;
     for (int i = 0; i < n; i++)
     {
        bonus = a[n - 1] - a[i]; //bons will be highest num - citizens num
        //cout << bonus << '\n';
        sum += bonus; 
     }
        
     cout << sum << '\n';
}