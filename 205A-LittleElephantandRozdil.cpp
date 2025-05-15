#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main(){
    optimize();

    int n;

    cin >> n;

    vector <int> v(n);
    map <int, int> place;

    for (auto& x: v) {
        cin >> x;
        place[x]++;
    }
    int min = *min_element(v.begin(), v.end());

    if (place[min] > 1) cout << "Still Rozdil" << endl;
    else {
        for (int i = 0; i < n; i++){
            if (v[i] == min) cout << i + 1 << endl;
        }
    }
}

// if(c == 1) {
//     int index = find(v.begin(), v.end(), mini) - v.begin();
//     cout << index + 1 << endl;
// } 
// else {
//     cout << "Still Rozdil" << endl;
// }