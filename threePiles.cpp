#include <bits/stdc++.h>
using namespace std;

void solution(){
    int a, b, c;
    cin >> a >> b >> c;

    int max_num, min_num, mid_num;
    if(a > b && a > c){
        max_num = a;
    }else if(b > c){
        max_num = b;
    }else {
        max_num = c;
    }
    
    if(a < b && a < c){
        min_num = a;
    }else if(b < c){
        min_num = b;
    }else {
        min_num = c;
    }
    
    // Let'sfind the mid_num
    if(max_num == a && min_num == b){
        mid_num = c;
    }else if(max_num == b && min_num == c){
        mid_num = a;
    }else{
        mid_num = b;
    }
    
    if(max_num - 1 == mid_num && min_num + 1 == mid_num){
        cout << "YES";
    }else{
        cout << "NO";
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