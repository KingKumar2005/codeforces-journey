#include <bits/stdc++.h>
using namespace std;

int solution(int A, int B, int k){
    long long p = pow(A, B);
    long long r = 0;
    cout << p << endl;
    while(k != 0){
        r = p % 10;
        k -= 1;
        p /= 10;
    }
    return r;
}

int main(){
    // int t;
    // cin >> t;

    // while(t--){
    //     solution();
    //     cout << endl;
    // }
    int A, B, k;
    cin >> A >> B >> k;
    cout << solution(A, B, k);

    return 0;
}