#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

class BoxOfProduce {
public:
	BoxOfProduce();    //default
	void setProduce(string totalProduce[5]);   //function to set three produce 
	void substitution();                       //function to substitute produce from input
	void output();                             //print produce of box
	string getProduce_1();                     //function to get produce 1
	string getProduce_2();                     //function to get produce 2
	string getProduce_3();                     //function to get produce 3
private:
	string produce[3];
};

int main(void) {
	ifstream inputStream;
	int i = 0;
	int flag = 0;
	string totalProduce[5];
	BoxOfProduce user;

	srand(time(NULL));

	inputStream.open("input.txt");   //open file
	
	if (!inputStream) {
		cout << "File not exists.\n";
		exit(1);
	}

	//read produce from file to arry
	for (i = 0; i < 5; i++) {
		inputStream >> totalProduce[i];
	}

	user.setProduce(totalProduce);    //randomly choose three bundles of fruits or vegetables
	 
	//display produce list
	cout << "Produce list:" << endl;
	cout << "Broccoli" << endl << "Tomato" << endl << "Kiwi" << endl << "Kale" << endl << "Tomatillo" << endl << endl;

	//display the content of box before substitution
	cout<< "Contents of the box:" << endl;
	cout << "1. " << user.getProduce_1() << endl;
	cout << "2. " << user.getProduce_2() << endl;
	cout << "3. " << user.getProduce_3() << endl;
	cout << endl;

	cout << "Enter 1 to substitute produce, or 0 to finish: ";
	cin >> flag;

	while (flag == 1) {
		user.substitution();
		cout << endl;

		user.output();

		cout << "Enter 1 to substitute produce, or 0 to finish: ";
		cin >> flag;
	}
	 
	cout << endl;
	user.output();    //display the content of box after substitution

	system("PAUSE");
	return 0;
}

void BoxOfProduce::setProduce(string totalProduce[5]) {

	for (int i = 0; i < 3; i++) {
		produce[i] = totalProduce[rand() % 5];
	}
}

string BoxOfProduce::getProduce_1() {
	return produce[0];
}

string BoxOfProduce::getProduce_2() {
	return produce[1];
}

string BoxOfProduce::getProduce_3() {
	return produce[2];
}

void BoxOfProduce::substitution() {
	int num;
	string select;

	cout << "Enter which produce you want to substitute(1~3): ";
	cin >> num;

	cout << "Enter which produce you want to select(name of produce): ";
	cin >> select;

	while (select != "Broccoli" && select != "broccol" && select != "Tomato" && select != "tomato" && select != "Kiwi" && select != "kiwi"
		&& select != "Kale" && select != "kale" && select != "Tomatillo" && select != "tomatillo") {

		cout << "Error! Enter again: ";
		cin >> select;
	}
	
	produce[num - 1] = select;
}

void BoxOfProduce::output() {
	cout << "Contents of the box:" << endl;
	cout << "1. " << produce[0] << endl;
	cout << "2. " << produce[1] << endl;
	cout << "3. " << produce[2] << endl;
	cout << endl;
}

BoxOfProduce::BoxOfProduce() {}