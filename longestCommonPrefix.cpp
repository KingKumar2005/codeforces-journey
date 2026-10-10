#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    string longest_common_prefix(vector<string>& words) {
        //Write your code here...
        
        // incase the vector is empty
        if(words.empty()){
            return "";
        }
        
        string res_s = "";
        int min_s_len = words.front().length();
        for(auto& k : words){
            if(min_s_len > k.length()){
                min_s_len = k.length();
            }
        }
        int count = 0;       // 
        for(int i = 0 ; i < min_s_len ; i++){       
            char c = (words.front())[i];        // cloud --> c  l  o  u  d

            for(auto& k : words){               // cloud close clear cluster
                if(c != k[i]){
                    return res_s;
                }else{
                    count += 1;
                }
            }
            if(count == words.size()){
                res_s += c;
                count = 0;
            }else{
                return res_s;
            }
        }
        return res_s;
    }

};





