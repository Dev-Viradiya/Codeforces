#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        long long n = s.size();
        bool one_found = false;
        bool zero_found = false;
        string ans = "";

        for(long long i=0;i<n;i++){
            if(one_found == false && s[i] == '1'){
                one_found = true;
                continue;
            }
            if(zero_found == false && s[i] == '0'){
                zero_found = true;
                continue;
            }
            ans += s[i];
        }
        cout << ans << endl;
    }

    return 0;
}