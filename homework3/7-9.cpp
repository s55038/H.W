#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
using namespace std;

class ZipCode {
public:
	ZipCode() {};     //default constructor
	ZipCode(int zipCode) { this->zipCode = zipCode; }
	ZipCode(string barCode) { this->barCode = barCode; }
	
	//accessor and mutator
	void setZipcode();
	void setBarcode();
	int getZipCode();
	string getBarCode();

	void ZconvertB();  //function to convert zip code to bar code
	void BconvertZ();  //function to convert bar code to zip code
private:
	int value[5] = { 7,4,2,1,0 };
	int Zipcode[5];     // 99504
	string Barcode[5];  // 1 10100 10100 01010 11000 01001 1 
	int zipCode;        
	string barCode;
	int Bcode[5][5];
};

int main(void) {
	char type;     //zip code or bar code
	int zipCode;
	string barCode;

	cout << "Choose one type(B=> bar code, Z=> zip code):";
	cin >> type;
	if (type == 'Z' || type == 'z') {
		cout << "Enter zip code:";
		cin >> zipCode;

		ZipCode user(zipCode);

		user.setZipcode();
		user.ZconvertB();
		cout << "Bar code=> ";
		user.getBarCode();
	}
	else if (type == 'B' || type == 'b') {
		cout << "Enter bar code:";
		cin >> barCode;
		
        ZipCode user(barCode);
		
		user.setBarcode();
		user.BconvertZ();
		cout << "Zip code=> ";
		user.getZipCode();
	}

	system("PAUSE");
	return 0;
}

void ZipCode::setZipcode() {
	int i = 0, j = 4;

	while (i < 5 && j > -1) {
		Zipcode[i] = zipCode / pow(10, j);
		zipCode -= Zipcode[i] * pow(10, j);
		i++;
		j--;
	}
}

void ZipCode::ZconvertB() {
	int code = 0;
	int num = 0;

	for (int i = 0; i < 5; i++) {
		if (Zipcode[i] == 0) {
			Barcode[i] = "11000";
		}
		else {
			for (int j = 0; j < 5; j++) {
				if (Zipcode[i] >= value[j] && Zipcode[i] != 0) {
					code += pow(10, 4 - j);
					Zipcode[i] -= value[j];
					num++;
				}
			}
			if (num < 2) { code += 1; }
			Barcode[i] = to_string(code);
			code = 0;
			num = 0;
		}
	}
}

string ZipCode::getBarCode() {
	cout << "1";
	for (int i = 0; i < 5; i++) {
		cout << setw(5) << setfill('0') << Barcode[i];
	}
	cout << "1";
	cout << endl;

	return barCode;
}

void ZipCode::setBarcode() {
	int code = 0;
	int j = 1;

	for (int i = 0; i < 5; i++) {
		Barcode[i] = barCode.substr(j, 5);
		j += 5;
	}
	cout << endl;

	for (int i = 0; i < 5; i++) {
		code = stoi(Barcode[i]);
		for (int j = 4; j > -1; j--) {
			if (code == 0) {
				Bcode[i][j] = 0;
			}
			else {
				Bcode[i][j] = code % 10;
				code /= 10;
			}
		}
	}
}

void ZipCode::BconvertZ() {
	int num = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			num +=(Bcode[i][j] * value[j]);
		}

		if (num == 11) {
			Zipcode[i] = 0;
		}
		else {
			Zipcode[i] = num;
		}
		
		num = 0;
	}
}

int ZipCode::getZipCode() {
	int code = 0;

	for (int i = 0; i < 5; i++) {
		code += Zipcode[i] * pow(10, 4 - i);
	}
	cout << code << endl;

	return code;
}