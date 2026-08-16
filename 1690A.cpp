#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        
        long long q = n / 3;
        long long rem = n % 3;
        
        if(rem == 0){
            cout << q << " " << (q + 1) << " " << (q - 1) << "\n";
        }else if(rem == 1){ 
            cout << q << " " << (q + 2) << " " << (q - 1) << "\n";
        }else{
            cout << (q + 1) << " " << (q + 2) << " " << (q - 1) << "\n";
        }
    }

    return 0;
}