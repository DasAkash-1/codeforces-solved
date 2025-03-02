#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int a, n = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> a;
            n = n ^ a;
        }
        cout << n << '\n';
    }
}

// int main(){
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a, b, c;

//         cin >> a >> b >> c;

//         int odd = a ^ b ^ c;
//         cout << odd << '\n';   
//     }
// }