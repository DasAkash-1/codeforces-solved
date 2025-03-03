#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % 2 != 0) even++;
            else if(i % 2 != 0 && a[i] % 2 == 0) odd++;
            
        }
        if (odd == even) cout << odd << '\n';
        else cout << -1 << '\n';   
    }
}

// int main(){
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) cin >> a[i];
//         int odd = 0, even = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (i % 2 != a[i] % 2)
//             {
//                 if (a[i] % 2 == 0) even++;
//                 else odd++;
//             }
//         }
//         if (odd == even) cout << odd << '\n';
//         else cout << -1 << '\n';   
//     }
// }