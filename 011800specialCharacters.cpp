#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    string arr[] = {"A", "B"}, result = "";
    bool temp = true;

    if(n % 2 == 1){             // Odd numbers can't have unique character in the string
        cout << "NO" << endl;
    }else{
        cout << "YES\n";
        if(n%2 == 0){
            for(int i = 0 ; i < n/2 ; i++){
                if(temp){
                    result = result + arr[0] + arr[0];
                    temp = false;
                }else{
                    result = result + arr[1] + arr[1];
                    temp = true;
                }
            }
            cout << result << endl;
        }
    }
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