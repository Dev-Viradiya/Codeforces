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

        long long L = 1;
        for(long long i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                L++;
            }
        }

        long long min_delta = 0;
        for(long long i = 1; i < n - 1; i++){
            long long orig_bounds = (s[i-1] != s[i]) + (s[i] != s[i+1]);
            long long new_bounds = (s[i-1] != s[i+1]);
            
            long long delta = new_bounds - orig_bounds;
            min_delta = min(min_delta, delta);
        }

        cout << L + min_delta << "\n";
    }

    return 0;
}