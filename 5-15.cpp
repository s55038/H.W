#include<iostream>
#include<time.h>
using namespace std;
int main() {
	srand(time(NULL));
	int original[5] = { 0 };
	int random[10];
	cout << "plz set your pin number in five digit:";
	char pin_char;
	for (int i = 0; i < 5; i++) {
		cin >> pin_char;
		original[i] = pin_char - '0';
	}
	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM: ";
	for (int i = 0; i <= 9; i++) {
		random[i] = rand() % 3 + 1;
		cout << random[i] << " ";
	}
	int password[5] = { 0 };
	bool log=true;
	char digit;
	cout << endl <<  "plz enter password in five-digit:";
	for (int i = 0; i < 5; i++) {
		cin >> digit;
		password[i] = digit - '0';
		if (random[original[i]] != password[i]) {
			log=false;
			break;
		}		
	}
	if (log) {
		cout << "log in";
	}
	else
		cout << "incorrect password";
	system("pause");
	return 0;
}