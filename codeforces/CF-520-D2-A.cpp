#include<iostream>
#include<string>
using namespace std;
int main(){
	//cout << (int)'A' << endl;
	int n;
	bool b = 0;
	string s;
int arr[26] = { 0 };
cin >> n;
cin >> s;
for (int i = 0; i < n; i++){
	if (s[i] < 'a')
		s[i] += 32;
	arr[s[i] - 'a']++;
}

		for (int i = 0; i < 26; i++){
			if (arr[i] ==0){
				b = 1;
				break;
			}
		}
		if (b == 1){
			cout << "NO" << endl;
		}
		else
			cout << "YES" << endl;
//	system("pause");
}