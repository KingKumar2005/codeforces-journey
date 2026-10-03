#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    string s, decrypted_result = "";
    cin >> s;

    char next_char = s[0];
    bool alterer = true;        // to add a character once
    
    for(int i = 0 ; i < s.length()-1 ; i++){
        if(s[i] == next_char && alterer){
            decrypted_result += s[i];
            alterer = false;
        }else if(s[i] == next_char){
            next_char = s[i+1];
            alterer = true;
        }
    }
    
    cout << decrypted_result << endl;
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