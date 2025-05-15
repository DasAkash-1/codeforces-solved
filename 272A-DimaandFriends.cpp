#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;
    cin >> n;

    vector <int> v(n);

    int d = 0, sum = 0;

    for (auto& f: v){
        cin >> f;
        sum += f; 
    }
    
    for (int i = 1; i <= 5; i++){
        if ((sum + i) % (n + 1) != 1) d++;
    }

    cout << d << endl;
}