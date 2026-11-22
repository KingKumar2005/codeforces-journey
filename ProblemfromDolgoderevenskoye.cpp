#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long x;
    cin >> x;

    // Equal odd and even divisors iff x has exactly one factor of 2
    if (x % 2 == 0 && x % 4 != 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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