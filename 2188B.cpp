#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> ones;
        for(long long i = 0; i < n; i++){
            if(s[i] == '1'){
                ones.push_back(i);
            }
        }

        if(ones.empty()){
            cout << (n + 2) / 3 << endl;
            continue;
        }

        long long total_seated = ones.size();
        
        long long prefix_zeros = ones.front();
        total_seated += (prefix_zeros + 1) / 3;

        for(size_t i = 1; i < ones.size(); i++){
            long long gap = ones[i] - ones[i - 1] - 1;
            total_seated += gap / 3;
        }

        long long suffix_zeros = n - 1 - ones.back();
        total_seated += (suffix_zeros + 1) / 3;

        cout << total_seated << endl;
    }

    return 0;
}