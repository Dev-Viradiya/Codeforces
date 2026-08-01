#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){

        long long n,x;
        cin >> n >> x;

        vector<long long> a(n);

        for(long long i=0;i<n;i++){
            cin >> a[i];
        }

        vector<pair<long long,long long>> arr;

        for(long long i=0;i<n;i++){
            arr.push_back({a[i]-x,a[i]+x});
        }

        long long ans = 0;

        long long l = arr[0].first;
        long long r = arr[0].second;

        for(long long i=1;i<n;i++){

            l = max(l,arr[i].first);
            r = min(r,arr[i].second);

            if(l > r){
                ans++;
                l = arr[i].first;
                r = arr[i].second;
            }
        }

        cout << ans << endl;
    }

    return 0;
}