#include<iostream>
using namespace std;

class HotDogStand {
public:
	HotDogStand();                             //default constructor
	HotDogStand(int IDvalue, int soldValue);   //initializes the stand's ID and the number of hot dog sold
	void JustSold();                           //function to track the number of hot dogs sold
	int getSoldNum() const;                    //function to get the number of hot dog sold by one stand
	int getStandID() const;                    //function to get stand's ID
	static int getTotalNum() const;            //function to get the number of hot dog sold by all stands
private:
	int standID;
	int soldNum;
	static int totalNum;  //the number of hot dog sold by all stands
};

int HotDogStand::totalNum = 0;

int main(void) {
	int standID;
	int soldNum;
	char sellStand;    //stand that sells a hot dog
	char sell;         //whether a stand sells a hot dog

	//input stand ID and number sold already of stand A
	cout << "Enter stand's ID(1~3):";
	cin >> standID;
	cout << "Enter the number of hot dogs sold already:";
	cin >> soldNum;

	HotDogStand standA(standID, soldNum);     //object 1 - stand A

	//input stand ID and number sold already of stand B
	cout << "Enter stand's ID(1~3):";
	cin >> standID;
	cout << "Enter the number of hot dogs sold already:";
	cin >> soldNum;

	HotDogStand standB(standID, soldNum);     //object 2 - stand B

	//input stand ID and number sold already of stand C
	cout << "Enter stand's ID(1~3):";
	cin >> standID;
	cout << "Enter the number of hot dogs sold already:";
	cin >> soldNum;

	HotDogStand standC(standID, soldNum);    //object 3 - stand C

	//output stand ID of three stands
	cout << endl;
	cout << "ID of stand A=> " << standA.getStandID() << endl;
	cout << "ID of stand B=> " << standB.getStandID() << endl;
	cout << "ID of stand C=> " << standC.getStandID() << endl;
	cout << endl;

	cout << "Whether a stand sells a hot dog(Y or N):";
	cin >> sell;
	while (sell == 'Y' || sell == 'y') {
		cout << "Which stand sells a hot dog(A,B or C):";
		cin >> sellStand;

		//determine which stand sells a hot dog
		switch (sellStand) {
		case'A':
		case'a':
			standA.JustSold();  //track the number sold
			break;
		case'B':
		case'b':
			standB.JustSold();  //track the number sold
			break;
		case'C':
		case'c':
			standC.JustSold();  //track the number sold
			break;
		default:
			break;
		}

		cout << "Whether a stand sells a hot dog(Y or N):";
		cin >> sell;
	}

	//output stand ID and the number sold by each stand
	cout << endl;
	cout << "Stand A:" << endl << "ID=> " << standA.getStandID() << endl << "Sold number=> " << standA.getSoldNum() << endl << endl;
	cout << "Stand B:" << endl << "ID=> " << standB.getStandID() << endl << "Sold number=> " << standB.getSoldNum() << endl << endl;
	cout << "Stand C:" << endl << "ID=> " << standC.getStandID() << endl << "Sold number=> " << standC.getSoldNum() << endl << endl;

	//output the number sold by all stands
	cout << "The number of hot dogs sold by all stands=> " << HotDogStand::getTotalNum() << endl << endl;;

	system("PAUSE");
	return 0;
}

//default constructor
HotDogStand::HotDogStand() {}

//initializes the stand's ID and the number of hot dog sold
HotDogStand::HotDogStand(int IDvalue, int soldValue) {
	standID = IDvalue;
	soldNum = soldValue;
	totalNum += soldValue;
}

//function to track the number of hot dogs sold
void HotDogStand::JustSold() {
	soldNum++;
	totalNum++;
}

//function to get the number of hot dog sold by one stand
int HotDogStand::getSoldNum() const {
	return soldNum;
}

//function to get stand's ID
int HotDogStand::getStandID() const {
	return standID;
}

//function to get the number of hot dog sold by all stands
int HotDogStand::getTotalNum() const {
	return totalNum;
}