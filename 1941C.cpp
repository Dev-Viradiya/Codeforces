#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        string s;
        cin >> s;

        set<long long> f;
        for(long long i = 0; i < n - 2; i++){
            if(s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p'){
                f.insert(i+2);
            }

            if(s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e'){
                f.insert(i);
            }
        }

        cout << f.size() << endl;
    }

    return 0;
}