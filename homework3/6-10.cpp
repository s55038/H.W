#include<iostream>
#include<cstdlib>
using namespace std;
class weight {
public:
	weight();
	void setWeightPounds();
	void setWeightKilograms();
	void setWeightOunces();
	double getpounds();
	double transtokilo();
	double transtoounces();
private:
	double pounds;
};

int main(void) {
	weight user;
	char choose;
	cout << "P=> pounds" << endl << "K=> kilograms" << endl << "O=> ounces" << endl;
	cout << "Your weight in(P/K/O):";
	cin >> choose;
	switch (choose) {
	case 'p':
	case'P':
		user.setWeightPounds();
		break;
	case'k':
	case'K':
		user.setWeightKilograms();
		break;
	case'o':
	case'O':
		user.setWeightOunces();
		break;
	default:
		cout << "plz enter K or P or O"<<endl;
	}
	cout << user.getpounds() << " pounds" << endl
		<< "= " << user.transtokilo() <<" kilograms"<<endl
		<< "= "<< user.transtoounces() << " ounces" << endl;
	return 0;
	system("pause");
}
weight::weight() {};
void weight::setWeightPounds() {
	cout << "pounds:";
	cin >> pounds;
};
void weight::setWeightKilograms() {
	double kilograms;
	cout << "kilograms:";
	cin >>kilograms;
};
void weight::setWeightOunces() {
	double ounces;
	cout << "ounces:";
	cin >> ounces;
	pounds = ounces/16.0;
};
double weight::getpounds() {
	return pounds;
};
double weight::transtokilo() {
	return pounds/2.21;
}
double weight::transtoounces() {
	return pounds * 16.0;
};