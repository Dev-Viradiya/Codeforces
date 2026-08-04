#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;

	while (t--){
		long long n;
		cin >> n;

		long long temp = n;
		vector<long long> arr;

		for (long long i = 2; i * i <= temp; i++){
			if (temp % i == 0){
				arr.push_back(i);
				temp /= i;

				if (arr.size() == 2){
					break;
				}
			}
		}

		if (temp == 1 || arr.size() < 2 || temp == arr[0] || temp == arr[1]){
			cout << "NO\n";
		}else{
			cout << "YES\n";
			cout << arr[0] << " " << arr[1] << " " << temp << "\n";
		}
	}

	return 0;
}