#include <bits/stdc++.h>
using namespace std;

void solution(){
    int a,b,c,d, min_score, max_score;
    cin >> a >> b >> c >> d;
    bool is_true_first_half, is_true_second_half;

    // First half (Let's find the highest and lowest score)

    min_score = (b <= a) ? b : a;       // Equality required incase both the score are same
    max_score = (a >= b) ? a : b;
    
    
    if(max_score <= (2 * min_score + 2)){
        is_true_first_half = true;
    }else{
        is_true_first_half = false;
    }

    // Second half (Let's find the highest and lowest score)

    c -= a;     // Because the score given in the second half, is the cumulative score
    d -= b;

    min_score = (c <= d) ? c : d;
    max_score = (c >= d) ? c : d;

    if(max_score <= (2 * min_score + 2)){
        is_true_second_half = true;
    }else{
        is_true_second_half = false;
    }


    // Final result
    if(is_true_first_half && is_true_second_half)
        cout << "YES\n";
    else
        cout << "NO\n";
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