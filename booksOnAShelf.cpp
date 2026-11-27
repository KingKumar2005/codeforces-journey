#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n, visible_books = 0;
    cin >> n;
    
    int h_arr[n];
    // Here I took the height input inside h_arr list 
    for(int i = 0 ; i < n ; i++){
        int h;
        cin >> h;
        h_arr[i] = h;
    }

    vector<int> distinct_elements;
    distinct_elements.push_back(h_arr[0]);
    // Found the distinct elements from h_arr and sort them in ascending order
    for(int i = 0 ; i < n ; i++){
        int temp = h_arr[i];
        bool isPresent = false;
        for(int j = 0 ; j < size(distinct_elements) ; j++){
            if(temp == distinct_elements[j]){
                isPresent = true;
            }
        }
        if(!isPresent){
            distinct_elements.push_back(temp);
        }
    }
    sort(distinct_elements.begin(), distinct_elements.end());
    
    pair<int, int> f[size(distinct_elements)];
    // Here I found the frequency of the elements inside distinct_elements from h_arr and store it inside a pair container
    for(int i = 0 ; i < size(distinct_elements) ; i++){
        int freq = 0;
        int temp = distinct_elements[i];
        for(int j = 0 ; j < n ; j++){
            if(temp == h_arr[j]){
                freq += 1;
            }
        }
        f[i].first = distinct_elements[i];
        f[i].second = freq;
    }
    
    vector<int> result;
    // Putting the books in the left in result list, because they are visible from at-least one side
    for(int i = 0 ; i < size(distinct_elements) ; i++){
        result.push_back(distinct_elements[i]);
        visible_books += 1;
    }
    
    // Update the pair elements frequency
    for(auto& k : f){
        k.second = k.second - 1;
    }
    
    // Sort the distinct_elements array in descending order 
    sort(distinct_elements.rbegin(), distinct_elements.rend());
    vector<int> temp_list;
    for(int i = 0 ; i < size(distinct_elements) ; i++){
        while(f[i].second != 0){
            temp_list.push_back(f[i].first);
            f[i].second = f[i].second - 1;
        }
    }
    
    // Checking how many book visible from the right side
    if(size(temp_list) > 0){
        visible_books += 1;
        int prev = temp_list[0];
        for(int i = 0 ; i < size(temp_list) ; i++){
            if(temp_list[i] != prev){
                visible_books += 1;
                prev = temp_list[i];
            }
        }
    }
    
    // Sort the temp_list in descending order and merge it with result
    sort(temp_list.rbegin(), temp_list.rend());
    result.insert(result.end(), temp_list.begin(), temp_list.end());
    
    cout << visible_books << endl;
    for(auto k : result){
        cout << k << " ";
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