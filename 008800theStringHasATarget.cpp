#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;
    string s, final_result = "";
    cin >> s;

    int index_of_last_occurance;
    char smallest_char = s[0];

    for(int i = n - 1 ; i >= 0 ; i--){            // Reverse looping
        if(s[i] <= smallest_char){
            smallest_char = s[i];                 // We got the last occurance of the smallest character
        }
    }
    
    // to get the last index
    for(int k = n - 1 ; k >= 0 ; k--){            // Reverse looping
        if(s[k] <= smallest_char){
            smallest_char = s[k];                 // We got the last occurance of the smallest character
            index_of_last_occurance = k;          // and we got the last index
            break;
        }
    }


    // now just place that char in the front and by removing it at it's previous posistion

    final_result += string(1, smallest_char);
    for(int j = 0 ; j < n ; j++){
        if(j != index_of_last_occurance){
            final_result += s[j];
        }
    }
    
    cout << final_result << endl;
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