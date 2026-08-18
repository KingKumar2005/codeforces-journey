#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, count = 0;
    cin >> n;    // Length of the binary string
    string s;
    cin >> s;    // The binary string

    for (int i = 0; i < n; i++){
        string a_;
        for (int j = 0; j < n; j++){
            if(i == j){
                if(s[j] == '0'){
                    a_ += "1";
                    count += 1;
                }
                else{
                    a_ += "0";
                }
            }else{
                if(s[j] == '0'){
                    a_ += "0";
                }else{
                    a_ += "1";
                    count += 1;
                }
                
            }
        }
    }
    cout << count << endl;
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