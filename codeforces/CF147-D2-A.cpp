#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int x = 0;
	char arr[10001];
	getline(cin, s);
	for (int i = 0; i < s.size(); i++){
		if (s[i] == ' '&&arr[x-1]==' '){
			continue;
		}
		if (s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?'){
			if (s[i - 1] == ' '){
				arr[x - 1] = s[i];
				arr[x] = ' ';
				x++;
			}
			else{
				arr[x] = s[i];
				x++;
				arr[x] = ' ';
				x++;
			}
			continue;
		}
		arr[x] = s[i];
		x++;
	}
	for (int i = 0; i < x; i++){
		cout << arr[i];
	}
	cout << endl;
	//system("pause");
}