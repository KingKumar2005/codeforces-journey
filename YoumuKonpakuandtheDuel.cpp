#include <bits/stdc++.h>
using namespace std;

int max_damage(int m){
    int m_d = 0;                    // maximum damage
    int d = 0;
    for(int a = 1 ; a <= m ; a++){
        int c = m - a;
        if(a <= (c + 1)){
            d = (a * c) - ((a * (a - 3)) / 2);
        }else if(a > (c + 1)){
            d = (a - (c + 1)) + (((c + 1) * (c + 2)) / 2);
        }
        if(d > m_d){
            m_d = d;
        }
    }
    return m_d;
}

void solution(){
    
    int x;
    cin >> x;

    int max_d = 0;
    int min_m = 0;
    for(int m = 1 ; m <= x ; m++){
        int temp = max_damage(m);
        if(temp >= x){
            max_d = temp;
            min_m = m;
            break;
        }
    }
    cout << min_m;
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