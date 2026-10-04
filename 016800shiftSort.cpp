#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, count_1 = 0, count_0 = 0, count_not_same = 0;
    cin >> n;
    string bs, min_bs;
    cin >> bs;

    for(int i = 0 ; i < n ; i++){
        if(bs[i] == '1')
            count_1 += 1;
        else 
            count_0 += 1;
    }
    while(count_0--){
        min_bs += '0';
    }
    while(count_1--){
        min_bs += '1';
    }
    for(int i = 0 ; i < n ; i++){
        if(bs[i] != min_bs[i])
            count_not_same += 1;
    }
    cout << count_not_same / 2 << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solution();
    }
    // solution();

    return 0;
}