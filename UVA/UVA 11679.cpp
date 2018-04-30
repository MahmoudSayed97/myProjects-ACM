
#include<iostream>
using namespace std;
int main(){
	int b, n;
	int v[22];
	while (1){
		int l, ll, lll;
		bool p = 0;
		cin >> b >> n;
		if (b == 0 && n == 0){
			break;
		}
		for (int i = 0; i < b; i++){
			cin>>v[i];
		}
		for (int i = 0; i < n; i++){
			cin >> l >> ll >> lll;
			l--; ll--; lll;
			v[l] -= lll;
			v[ll] += lll;
		}
		for (int i = 0; i < b; i++){
			if (v[i] < 0){
				p = 1;
			}
		}
		if (p == 1){
			cout << 'N' << endl;
		}
		else
			cout << 'S' << endl;
	}
	//system("pause");
}