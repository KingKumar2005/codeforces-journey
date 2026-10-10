#include <bits/stdc++.h>
using namespace std;

void solution(){
    int k, q, temp, winr;
    cin >> k >> q;
    int a[k], n[q];
    for(int i = 0 ; i < k ; i++){
        cin >> temp;
        a[i] = temp;
    }
    for(int j = 0 ; j < q ; j++){
        cin >> temp;
        n[j] = temp;
    }
    

    for(int i = 0 ; i < q ; i++){               // For number of members, n[i]
        temp = a[0];                            // Because we need only the first element of the sequence i.e. a[0]
        if(n[i] < temp){
            cout << n[i] << " ";
        }
        else if(n[i] >= temp){
            cout << temp - 1 << " ";
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