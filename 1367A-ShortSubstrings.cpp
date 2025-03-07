#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        string s, t;
        cin >> s;

        for (int i = 0; i < s.length(); i+=2)
        {
            t += s[i];
        }
        t += s[s.length() - 1];
        cout << t << '\n';
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s, t;
//         cin >> s;

        
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (i % 2 == 0)
//             {
//                 t += s[i];
//             }
//         }
//         t += s[s.length() - 1];
//         cout << t << '\n';
//     }
// }