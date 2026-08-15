#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if(n%2 == b%2){
        if(n%2 == a%2){
            cout << "YES\n";
        }
        else if(a <= b){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}