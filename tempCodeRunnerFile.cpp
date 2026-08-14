#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long n, sum = 0, sum_pop = 0, a;
        int move = 0, move_pop = 0;
        cin >> n;
        vector<int> v;

        // vector input
        for (long j = 0; j < n; j++){
            cin >> a;
            v.push_back(a);
        }

        // Sort the input array(vector)
        sort(v.begin(), v.end());

        // If the sum is already divisible by 3
        for(int k : v){
            sum += k;
            sum_pop += k;
        }
        if(sum % 3 == 0){
            cout << move << endl;
            continue;
        }

        // pop element from the front
        while(sum_pop % 3 == 0){
            v.erase(v.begin());
            for(int k : v){
                sum_pop += k;
            }
            move_pop += 1;
        }

        // increment 1
        while(sum % 3 == 0){
            sum += 1;
            move += 1;
        }
        
        // return the efficient moves
        move < move_pop ?( cout << move << endl ):( cout << move_pop << endl );
        }
    

    return 0;
}