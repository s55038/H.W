#include<iostream>
#include<cstdlib>
using namespace std;

class Money {
public:
	Money();
	void setdollars();
	void setcents();
	int getdollars();
	int getcents();
	double amount();
private:
	int dollars;
	int cents;
};

int main(void) {
	Money money_1, money_2;
	cout <<"money_1: "<<endl;
	money_1.setdollars();
	money_1.setcents();
	cout <<"dollars:" << money_1.getdollars()<<endl;
	cout <<"cents:" << money_1.getcents()<<endl;
	cout <<"amounts:" << money_1.amount()<<endl;

	cout <<"money_2: "<<endl;
	money_2.setdollars();
	money_2.setcents();
	cout <<"dollars:" << money_2.getdollars() << endl;
	cout <<"cents:" << money_2.getcents() << endl;
	cout <<"amounts:" << money_2.amount() << endl;
	
	return 0;
	system("pause");
}

void Money::setdollars() {
	cout << "plz enter dollars : ";
	cin >> dollars;
}
void Money::setcents() {
	cout << "plz enter cents :";
	cin >> cents;
}
int Money::getdollars() {
	return dollars;
}
int Money::getcents() {
	return cents;
}
double Money::amount() {
	return dollars + cents / 100.0;
}
Money::Money() {}
