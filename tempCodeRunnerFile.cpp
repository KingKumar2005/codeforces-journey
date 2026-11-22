#include <bits/stdc++.h>
using namespace std;

void solution(){
    long long x;
    cin >> x;
    long count_even = 0, count_odd = 0;

    for(long long i = 1 ; i <= x ; i++){
        if(x % i == 0 && i % 2 == 0){
            count_even += 1;
        }
        else if(x % i == 0 && i % 2 != 0){
            count_odd += 1;
        }
    }
    
    if(count_odd != count_even){
        cout << "YES";
    }else{
        cout << "NO";
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