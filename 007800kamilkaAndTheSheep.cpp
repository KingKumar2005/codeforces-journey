#include <bits/stdc++.h>
using namespace std;

void solution(){

    int n, min = 0, max = 0;
    cin >> n;
    
    int temp;
    bool temp_ = true;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        if(temp_){
            min = temp;
            max = temp;
            temp_ = false;
        }
        if(temp < min){
            min = temp;
        }
        if(temp > max){
            max = temp;
        }
    }

    cout << max - min << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solution();
    }

    return 0;
}