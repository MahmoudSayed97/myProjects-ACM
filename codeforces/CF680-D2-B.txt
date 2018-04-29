#include<iostream>
#include<string>
using namespace std;
int main(){
	short n, t, arr[101],p=0,l,ll;
	cin >> n>>t;
	t--;
	l = t; ll = t;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		if (arr[i] == 1)
			p++;
	}
	l--; ll++;
	//cout << p << endl;
	while (l>=0&&ll<n){
		if (arr[l]!=arr[ll])
		{
			p--;
			l--; ll++;
		}
		else{
			l--;
			ll++;
		}
	}
	cout << p << endl;
	//system("pause");
}