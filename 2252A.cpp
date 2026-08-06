#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> arr(n);
        for(long long i=0; i<n; i++){
            cin >> arr[i];
        }

        unordered_map<long long, long long> freq;
        for(long long i=0; i<n; i++){
            freq[arr[i]]++;
        }

        
        vector<pair<long long, long long>> freq_vec(freq.begin(), freq.end());
        if(freq_vec.size() == 1){
            if(freq_vec[0].second == 1){
                cout << freq_vec[0].first << endl;
            }else{
                cout << freq_vec[0].first * 2 << endl;
            }
            continue;
        }

        sort(freq_vec.begin(), freq_vec.end(), [](const pair<long long, long long>& a, const pair<long long, long long>& b) {
            if(a.second == b.second){
                return a.first > b.first; 
            }
            return a.second > b.second; 
        });

        long long ans = 0;
        while(true){
            pair<long long, long long> top = freq_vec[0];
            pair<long long, long long> second = freq_vec[1];

            if(top.second == 0){
                break;
            }

            if(second.second == 0){
                if(top.second >= 1){
                    ans += top.first;
                    
                }
                top.second--;
                if(top.second >= 1){
                    ans += top.first;
                    
                }
                break;;
            }
            ans += top.first;
            freq_vec[0].second--;
            ans += second.first;
            freq_vec[1].second--;

            sort(freq_vec.begin(), freq_vec.end(), [](const pair<long long, long long>& a, const pair<long long, long long>& b) {
                if(a.second == b.second){
                    return a.first < b.first; 
                }
                return a.second > b.second; 
            });
        }

        cout << ans << endl;
    }

    return 0;
}