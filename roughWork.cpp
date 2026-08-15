#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int n, a, b;
    // cin >> n >> a >> b;                   // 5 3 1
    // bool is_symmetric = false;

    // // Decision
    // for (int x = 1; x < n - a + 1; x++){        // 1 <= x <= 3
    //     for (int y = 1; y < n - b + 1; y++){    // 1 <= y <= 5
    //         vector<string> vs(n, "X");           // To store the color vlaues in n cells (v_string)

    //         // chosing x
    //         for (int k = x - 1; k < x + a - 1; k++){
    //             vs[k] = "R";
    //         }
    //         // chosing y
    //         for (int l =  y - 1; l < y + b - 1 ; l++){
    //             vs[l] = "B";
    //         }

    //         // Printing the vector elements (B, R, X)
    //         for(int i = 0 ; i < vs.size() ; i++){
    //             cout << vs[i] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    int a = 4;
    cout << a / 2 << "\n";

    return 0;
}