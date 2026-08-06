#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        if(a == b || b == c || a == c){
            cout << 0 << endl;
            continue;
        }

        long long maxi = max(a,max(b,c));
        long long mini = min(a,min(b,c));
        long long mid = a + b + c - maxi - mini;

        cout << min(maxi - mid, mid - mini) << endl;
    }

    return 0;
}