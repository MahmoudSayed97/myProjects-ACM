#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	while (1){                                   //what's amazing code ??!!!
		int l, g = -1, k =1e9,y=0,r=-1;
		char c, b;
		long long sum = 0;
		cin >> l;
		if (l == 0){
			break;
		}
		for (int i = 0; i < l; i++){
			cin >> c;
			if (c == 'Z'){
				y = 1;
				continue;
			}
			else if (c == 'R'){
				g = i;
			}
			else if (c == 'D'){
				r = i ;
			}
			if (r != -1 && g != -1){
				k = min(k,abs(r-g));
			}
		}
		if (y == 1){
			cout << 0<<"\n";
		}
		else
		cout << k << "\n";
	}
	//system("pause");
}