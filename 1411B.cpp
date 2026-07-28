#include<bits/stdc++.h>
using namespace std;

bool solve(long long n){
    long long temp = n;
    while(temp != 0){
        long long digit = temp % 10;
        if(digit != 0 && n % digit != 0){
            return false;
        }
        temp /= 10;
    }
    return true;
}

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        while(!solve(n)){
            n++;
        }

        cout << n << endl;
    }

    return 0;
}