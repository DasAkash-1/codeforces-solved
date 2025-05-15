#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n, m;
    cin >> n;

    vector <int> v(n);
    unordered_map <int, int> pos;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        pos[p] = i;
    }

    cin >> m;
    long long vas = 0, pet = 0;

    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        vas += pos[q] + 1;
        pet += n - pos[q];
    }

    cout << vas << " " << pet << endl;
}