#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, m, count = 0;
    cin >> n >> m;
    string p, q;
    cin >> p >> q;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(p[i] == q[j]){
                p[i] = '_';
                q[j] = '-';
                break;
            }
        }
    }
    for(auto t : p){
        if(t == 's' || t == 'i' || t == 'x'){
            count += 1;
        }
    }
    if(count == 3){
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