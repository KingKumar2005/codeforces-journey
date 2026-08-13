#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t ; i++){
        int n, m;
        string a, b, c;

        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;

        string result = a;
        for (int j = 0; j < m; j++){
            if(c[j] == 'D'){
                result += b[j];
            }else{
                result = b[j] + result;
            }
        }
    cout << result << endl;
    }
    return 0;
}