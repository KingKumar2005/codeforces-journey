#include <bits/stdc++.h>
using namespace std;

string repeatString(const string& str, int count){
    string result = "";
    result.reserve(str.length() * count);
    for(int i = 0 ; i < count ; i++){
        result += str;
    }
    return result;
}

int main(){
    string s;
    int c;
    getline(cin, s);
    cin >> c;
    repeatString(s, c);

    return 0;
}