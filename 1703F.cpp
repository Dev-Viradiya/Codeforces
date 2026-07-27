#include<bits/stdc++.h>
using namespace std;

int solve(vector<long long> &good,long long val){
    long long l = 0;
    long long r = good.size();

    while(l < r){
        long long mid = (l + r) / 2;

        if(good[mid] < val){
            l = mid + 1;
        }else{
            r = mid;
        }
    }

    return l;
}

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> good;
        long long ans = 0;

        for(long long i=1;i<=n;i++){
            long long x;
            cin >> x;

            if(x < i){
                ans += solve(good,x);
                good.push_back(i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}