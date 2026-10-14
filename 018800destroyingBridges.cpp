#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, k;
    cin >> n >> k;

    // Let's calculate how many bridges are needed for a sigle island to get connected with other islands
    int a = n - 1;      // bridge needed for one island
    int b = n * (n - 1) / 2;        // total bridges

    if(k == 0){
        cout << n;
    }
    else if(k == b){
        cout << 1;
    }
    else if(k < a){
        cout << n;
    }
    else{
        cout << 1;
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