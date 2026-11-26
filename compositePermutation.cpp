#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    if (n <= 3) {
        cout << -1;
        return;
    }

    if (n % 2 == 0) {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
    } else {
        cout << "4 5 3 1 2 ";
        for (int i = 6; i <= n; i++) {
            cout << i << " ";
        }
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
        cout << endl;
    }
    // solution();

    return 0;
}