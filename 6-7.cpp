#include<iostream>
#include<cmath>
using namespace std;
class Pizza {
private:
	char type;
	char size;
	int toppings;
public:
	void outputDescription();
	double computePrice();
};
int main() {
	Pizza choose;
	cout << "Price: $" << choose.computePrice() << endl;
	choose.outputDescription();
	system("pause");
	return 0;
}
void Pizza::outputDescription() {

	cout << "Type:" << type << " Size:" << size << " Number of toppings: " << toppings << endl;
}
double Pizza::computePrice() {
	cout << "Type of pizza(d(deep dish),h(hand tossed),p(pan)):";
	cin >> type;
	cout << "Size of pizza(s(small),m(medium),l(large)) :";
	cin >> size;
	cout << "the number of pepperoni or cheese toppings(0~2):";
	cin >> toppings;
	switch (size) {
	case's':
		return 10 + 2 * toppings;
	case'm':
		return 14 + 2 * toppings;
	case'l':
		return 17 + 2 * toppings;
	}
}