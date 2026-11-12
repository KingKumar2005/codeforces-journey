#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count = 0;
    string temp = s;

    if(s[0] == 'B'){
        count += 1;
    }
    
    for(int i = 0 ; i < n-1 ; i++){
        if(temp[i] == temp[i+1]){
            count += 1;
        }
    }
    cout << count;
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