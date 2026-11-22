#include <bits/stdc++.h>
using namespace std;

void solution(){
    int x, count = 4;
    cin >> x;           // Initialy Youmu has 1 attack power
    
    if(x <= 3){
        cout << x;
    }
    else{
        for(int i = 4 ; i < x ; i = i + 2){
            count += 1;
        }
        cout << count;
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