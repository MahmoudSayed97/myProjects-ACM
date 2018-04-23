#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, arr[100001];
	long long sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum % 2 == 0){
		cout << sum << endl;
	//	system("pause");
		return 0;

	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			sum -= arr[i];
			break;
		}
	}
	cout << sum << endl;
//	system("pause");
}