#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int fav_val = a[f - 1];
        
        sort(a.rbegin(), a.rend());
        
        if (a[k - 1] > fav_val) {
            cout << "NO" << endl;
        } else if (a[k - 1] < fav_val) {
            cout << "YES" << endl;
        } else {
            if (k < n && a[k] == fav_val) {
                cout << "MAYBE" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}