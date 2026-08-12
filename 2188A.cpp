#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        vector<long long> p(n);
        long long left = 1, right = n;
        
        for(long long i = n - 1; i >= 0; i--){
            if((n - 1 - i) % 2 == 0) {
                p[i] = left++;
            } else {
                p[i] = right--;
            }
        }
        
        for(long long i = 0; i < n; i++){
            cout << p[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}