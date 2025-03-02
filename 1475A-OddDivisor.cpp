#include <bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, count = 0;
        cin >> n;
        for (long long int i = 1; i <= n; i++)
        {
            if (n % i == 0){
                if (i % 2 != 0)
                {
                    count++;
                }
            }
            if (count > 1) cout << "YES" << '\n';
        }
        if (count <= 1)
        {
            cout << "NO" << '\n';
        }
        
    }
    
}