#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001], arr2[100001] = { 0 },arr3[100001],arr4[100001];
int main(){
	long long sum = 0;

	int n,q,l,r,p=0;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> q;
	while (q--){
		cin >> l >> r;
		l--; r--;
		arr2[l]++; arr2[r+1]--;

	}
	for (int i = 0; i < n; i++){
		sum += arr2[i];
		arr3[i] = sum;
	}
	for (int i = 0; i < n; i++){
		if (arr3[i] == 0){
			arr4[p] = arr[i];
			p++;
		}
	}
	cout << p << endl;
	for (int i = 0; i < p; i++){
		cout << arr4[i] << " ";
	}
	//system("pause");
}