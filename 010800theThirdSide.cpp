#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, temp;
    cin >> n;
    vector<int> v(n);
    for(vector<int> ::iterator itr = v.begin() ; itr != v.end() ; itr++){
        cin >> temp;
        *itr = temp;
    }
    if(v.size() == 1){
        cout << v[0] << endl;
    }else{
        while(n-- && n != 0){
            int a = v[n];
            int b = v[n-1];

            int c = a + b - 1;
            temp = 2;
            while(temp--){
                v.pop_back();
            }
            v.push_back(c);
        }
        cout << v[0] << endl;
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