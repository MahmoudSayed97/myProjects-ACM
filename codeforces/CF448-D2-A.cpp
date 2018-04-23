#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a1, a2, a3, b1, b2, b3;
	int n;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	int cups = a1 + a2 + a3;
	int rewards = b1 + b2 + b3;
	int p = cups / 5;
	int p2 = rewards / 10;
	if (cups%5==0){
		n-=(cups/5);
	}
	else if (cups % 5>0){
		n -= (cups / 5);
		n--;
	}
	else if (cups <5){
		n--;
	}
	if (rewards % 10 == 0){
		n -= (rewards / 10);
	}
	else if (rewards % 10>0){
		n -= (rewards / 10);
		n--;
	}
	else if (rewards <10){
		n--;
	}
	if (n >= 0){
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	//system("pause");
}