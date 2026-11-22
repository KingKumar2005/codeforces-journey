#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin >> n;

    if(n <= 1){
        cout << "-1";
    }
    else if(n > 1){
        int p[n], temp[n];
        for(int i = 0 ; i < n ; i++){
            p[i] = (i+1);
        }
        
        for(int i = 0 ; i < n ; i++){                   // For p[]
            for(int j = 0 ; j < n ; j++){               // For temp[]
                temp[j] = p[i] * (j + 1);
            } 
            
            // To find the actul value needed from temp[]
            int res;
            for(int k = 0 ; k < n ; k++){               // For temp[]
                int count = 0;
                for(int l = 1 ; l < temp[k] ; l++){                         // Change it later
                    if(temp[k] % l == 0){
                        count += 1;
                    }
                }
                if(count > 1){
                    res = temp[k] / (k+1);
                    temp[k] = 0;
                }
            }            
            cout << res << " ";
        }
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