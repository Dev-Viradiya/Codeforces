#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){

        long long n,r,b;
        cin >> n >> r >> b;

        long long each = r / (b + 1);
        long long extra = r % (b + 1);

        string ans = "";

        for(long long i=0;i<=b;i++){
            for(long long j=0;j<each;j++){
                ans += 'R';
            }

            if(extra > 0){
                ans += 'R';
                extra--;
            }

            if(i != b){
                ans += 'B';
            }
        }

        cout << ans << endl;

    }
    return 0;
}