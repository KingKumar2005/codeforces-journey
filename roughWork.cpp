#include <iostream>
#include <string>
using namespace std;

void solution() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_ones = 0;
    for (char c : s) {
        if (c == '1') {
            total_ones += (n - 1);
        } else {
            total_ones += 1;
        }
    }

    cout << total_ones << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}