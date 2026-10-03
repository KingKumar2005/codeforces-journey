#include <bits/stdc++.h>
using namespace std;

void solution(){
    int size, g_step = 0;
    cin >> size;
    
    string e_pawn, g_pawn;
    cin >> e_pawn >> g_pawn;
    
    // If gregor has all 0
    string zero_string = string(g_pawn.length(), '0');
    if(zero_string == g_pawn){
        cout << 0 << endl;
    }else{                                              // Four cases, and their sub-cases, are there(00, 01, 10, 11)
        for(int i = 0 ; i < size ; i++){
            if(g_pawn[i] == '1'){
                if(i > 0 && e_pawn[i-1] == '1'){        // Checking the left most
                    e_pawn[i-1] = '0';
                    g_step += 1;
                }
                else if(e_pawn[i] == '0'){              // Checking the straight pawn
                    g_step += 1;
                }
                else if(i < (size - 1) && e_pawn[i+1] == '1'){      // Checking the right most
                    e_pawn[i+1] = '0';
                    g_step += 1;
                }
            }
        }
        cout << g_step << endl;
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