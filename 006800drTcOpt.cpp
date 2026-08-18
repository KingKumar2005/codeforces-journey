#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, count = 0;
    cin >> n;    // Length of the binary string
    string s;
    cin >> s;    // The binary string

    for(char k : s){
        if(k == '1'){
            count += (n - 1);
        }else{
            count += 1;
        }
    }
    cout << count << endl;
}



// ---------------------------------
/*

let say s = 101011
after righting the final results, it would look like

    original_values |
    1               | _ 0 1 0 1 1
    0               | 1 _ 1 0 1 1
    1               | 1 0 _ 0 1 1
    0               | 1 0 1 _ 1 1
    1               | 1 0 1 1 _ 1
    1               | 1 0 1 1 1 _
--------------------------------------
                      | | | | | | 
                      v v v v v v
                      5 1 5 1 5 5
                      ^ ^
                      | +--------------- 1
                      +----------------- (n - 1) = 6 - 1


    Again learned it from AI.

*/
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