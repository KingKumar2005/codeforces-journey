#include <bits/stdc++.h>

using namespace std;

int main() {
    // Fast I/O for faster competitive programming execution
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Read number of test cases

    while (t--) {
        int n;
        cin >> n; // Read size of array

        long long sum = 0;
        bool has_rem_1 = false; // Flag to track if any element leaves remainder 1 when divided by 3

        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a; // Keep a running total of the sum

            // Check if this specific element leaves a remainder of 1
            // (e.g., 1, 4, 7, 10...)
            if (a % 3 == 1) {
                has_rem_1 = true;
            }
        }

        // Calculate the remainder of the overall array sum
        int rem = sum % 3;

        // --- DECISION LOGIC ---

        // CASE 1: The sum is already divisible by 3
        if (rem == 0) {
            cout << 0 << "\n";
        } 
        
        // CASE 2: The sum leaves a remainder of 2
        // We only need to add +1 to ANY element once (e.g., sum of 5 + 1 = 6)
        else if (rem == 2) {
            cout << 1 << "\n";
        } 
        
        // CASE 3: The sum leaves a remainder of 1
        else { 
            // Option A: If we have an element where (element % 3 == 1),
            // removing that single element reduces the remainder from 1 to 0. (1 move)
            if (has_rem_1) {
                cout << 1 << "\n";
            } 
            // Option B: If no such element exists, we must add +1 twice
            // to reach the next multiple of 3. (2 moves)
            else {
                cout << 2 << "\n";
            }
        }
    }

    return 0;
}