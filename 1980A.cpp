#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n,m;
        cin >> n >> m;

        string s;
        cin >> s;

        unordered_map<char,long long> mp;
        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;
        mp['D'] = 0;
        mp['E'] = 0;
        mp['F'] = 0;
        mp['G'] = 0;
        for(long long i=0;i<n;i++){
            mp[s[i]]++;
        }

        long long ans = 0;
        for(auto it:mp){
            if(it.second < m){
                ans += m - it.second;
            }
        }

        cout << ans << endl;

    }

    return 0;
}