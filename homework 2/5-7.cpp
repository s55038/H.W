#include<iostream>
using namespace std;
int main() {
	int grades[6] = {0};
	cout << "plz enter grades(0~5)for each student,press Enter to finish:";
	int grade =0;
	while (cin>>grade) {
		if (grade >= 0 && grade <= 5) {
			grades[grade]++;
		}
		else{
			cout << "plz enter integer between 0 and 5" << endl;
		}	
		if (cin.peek() == '\n') {
			break; // �p�G�U�@�Ӧr�ŬO����Ÿ��A�h�����j��
		}
	}
	for (int i = 0; i <= 5; i++) {
		cout << grades[i] << " grades of " << i << endl;
	}
}