#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, temp;
        cin >> n;
        temp = n;
        // Vanya's turn
        if((n - 1) % 3 == 0 || (n + 1) % 3 == 0){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl; //If 10 moves have passed and Vanya has not won, then Vova wins. Don't need it.
        }
    }
    return 0;
}