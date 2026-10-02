#include <bits/stdc++.h>
using namespace std;

void solution(){
    int count_same = 0;
    string s, t;
    cin >> s >> t;
    
    int min_len = min(s.length(), t.length());
    int max_len = max(s.length(), t.length());
    
    while(count_same < min_len && s[count_same] == t[count_same]){      // Checks for a common prefix starting strictly at index 0
        count_same++;
    }
    
    int result = s.length() - count_same + t.length();
    if(count_same != 0){
        result++;
    }
    cout << result << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--){
        solution();
    }
    // solution();

    return 0;
}