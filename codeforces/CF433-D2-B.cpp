#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100001], arr2[100001],arr3[100001];
int main(){
	int n, m,l,ll,lll,e;
	cin >> n;
	long long sum = 0;;
	for (int i = 0; i < n; i++){
		cin>>e;
		arr2[i] = e;
		sum += e;
		arr[i] = sum;
	}
	sort(arr2, arr2 + n);
	sum = 0;
	for (int i = 0; i < n; i++){
		sum += arr2[i];
		arr3[i] = sum;
	}
	cin >> m;
	while (m--){
		cin >> l>>ll>>lll;
		if (ll == 1 && lll == n){
			cout << sum << endl;
		}
		else if (l == 2){
			long long gg = (arr3[lll - 1] - arr3[ll - 1]) + (arr3[ll - 1] - arr3[ll - 2]);
			cout << gg << endl;
		}
		else if (l == 1){
			long long g = (arr[lll - 1] - arr[ll - 1]) + (arr[ll - 1] - arr[ll - 2]);
			cout << g << endl;
		}

	}
	//system("pause");
}