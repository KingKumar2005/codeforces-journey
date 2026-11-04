#include <bits/stdc++.h>
using namespace std;

int solution(){
    int l, r;
    cin >> l >> r;
    if(l+r == 0){
        return 0;
    }
    else if(l == 0){
        return r - 1;
    }
    else if(r == 0){
        return (l * (-2)) + l - 1;
    }
    else if(l > 0 && r > 0){
        return r - l;
    }
    else if(l < 0 && r < 0){
        int small_num = l < r ? l : r;
        int big_num = l > r ? l : r;
        return big_num - small_num;
    }
    else if(l < 0 && r > 0 && l + r == 1){
        return 0;
    }
    else if(l < 0 && r > 0){
        int temp_l = l * (-2) + l;
        int smaller = temp_l < r ? temp_l : r;
        int bigger = temp_l > r ? temp_l : r;
        return bigger - smaller - 1;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        cout << solution() << endl;
    }
    // solution();

    return 0;
}