#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for(auto k : v){
        vector<int> v1;                         // for storing the each items of the integer (e.g. 122 - {1,2,2})
        string s = to_string(k);
        int l = s.length();
        for (int j = 0; j < l; ++j){
            v1.push_back(stoi(string(1, s[j])));       // s[j] gives char. 1st convert char to string. Then string to int.
        }
        sort(v1.begin(), v1.end());
        cout << v1[0] << endl;
    }

        return 0;
}