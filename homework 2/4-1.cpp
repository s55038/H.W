#include<iostream>
using namespace std;
void input(int& h, int& min);
void conversion(int& h,char& ampm);
void output(int h, int min,char ampm);
int main() {
	int h = 2, min = 2;
	char ampm='A';
	char choose;
	do {
		input(h, min);
		conversion(h, ampm);
		output(h, min, ampm);
		cout << "again?(Y/N)";
		cin >> choose;
	} while (choose == 'Y');
	system("pause");
	return 0;
}
void input(int& h, int& min) {
	cout << "plz enter time(24hr):";
	cin >> h >> min;
}
void conversion(int& h, char& ampm) {
	if (h > 12) {
		h -= 12;
		ampm = 'P';
	}	
}
void output(int h, int min, char ampm) {
	if (ampm == 'A')
		cout << "time(12hr):" << h << ":" << min << " A.M" << endl;
	else
		cout << "time(12hr):" << h << ":" << min << " P.M" << endl;
}

