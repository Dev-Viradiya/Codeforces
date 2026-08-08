#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){

        long long n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        long long aOdd = 0, bOdd = 0;
        long long aEven = 0, bEven = 0;

        for(long long i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[i] == '1'){
                    aEven++;  
                }

                if(b[i] == '1'){
                    bEven++;
                }
            } else {
                if(a[i] == '1'){
                    aOdd++;  
                }

                if(b[i] == '1'){
                    bOdd++;
                }
            }
        }

        if(aOdd == bOdd && aEven == bEven){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}