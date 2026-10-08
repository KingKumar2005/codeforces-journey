#include <bits/stdc++.h>
using namespace std;

bool checkIsomorphic(string s1, string s2){
    map<char, char> m;
    int n = s1.size();
    for(int i = 0 ; i < n ; i++){
        if(m.find(s1[i]) == m.end()){
            m[s1[i]] = s2[i];
        }
        else if(m[s1[i]] != s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    if(checkIsomorphic(s1, s2) && checkIsomorphic(s2, s1)){
        cout << "Both strings are isomorphic";
    }
    else{
        cout << "Not isomorphic";
    }

    return 0;
}