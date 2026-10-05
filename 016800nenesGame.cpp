#include <bits/stdc++.h>
using namespace std;

void solution(){
    int k, q, temp;
    cin >> k >> q;
    int arr[k], m[q];
    
    for(int i = 0 ; i < k ; i++){
        cin >> temp;
        arr[i] = temp;
    }
    for(int i = 0 ; i < q ; i++){
        cin >> temp;
        m[i] = temp;
    }

    for(int i = 0 ; i < q ; i++){
        if(m[i] < arr[0]){
            cout << m[i] << " ";        
            break;
        }
        else{
            for(int j = 0 ; j < m[i] ; j++){
                for(int w = )
            }
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