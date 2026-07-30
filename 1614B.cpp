#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;

        vector<long long> a(n);

        for(long long i=0;i<n;i++){
            cin >> a[i];
        }

        vector<pair<long long,long long>> v;

        for(long long i=0;i<n;i++){
            v.push_back({a[i],i});
        }

        sort(v.rbegin(),v.rend());

        vector<long long> ans(n+1);

        long long pos = 1;
        long long total = 0;

        for(long long i=0;i<n;i++){

            ans[v[i].second+1] = pos;

            total += 2LL * abs(pos) * v[i].first;

            if(pos>0){
                pos = -pos;
            }
            else{
                pos = abs(pos)+1;
            }
        }

        cout << total << "\n";

        for(long long i=0;i<=n;i++){
            cout << ans[i] << " ";
        }

        cout << endl;
    }

    return 0;
}