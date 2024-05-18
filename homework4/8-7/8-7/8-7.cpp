#include<iostream>
using namespace std;

class PrimeNumber {
public:
	PrimeNumber() { prime = 1; }                        //default constructor
	PrimeNumber(int num);                               //constructor to initialize prime
	int getPrime() const { return prime; }              //accessor to get prime
	friend PrimeNumber operator++(PrimeNumber& user);   //operator ++ overloading
	friend PrimeNumber operator--(PrimeNumber& user);   //operator -- overloading
	friend ostream& operator<<(ostream& outputStream, PrimeNumber& const user);   //operator << overloading
private:
	int prime;
};

int main(void) {
	int num;

	cout << "Enter a prime number: ";
	cin >> num;
	PrimeNumber user1(num);    //object for The next largest prime number
	PrimeNumber user2(num);    //object for The next smallest prime number

	PrimeNumber N_largest = ++user1;   //The next largest prime number
	cout << "The next largest prime number=> " << N_largest << endl;

	PrimeNumber N_smallest = --user2;  //The next smallest prime number
	if (user2.getPrime() == 1) {   //if prime is 1 means the next smallest prime number is not exist
		cout << "The next smallest prime number is not exist." << endl;
	}
	else {
		cout << "The next smallest prime number=> " << N_smallest << endl;
	}

	system("PAUSE");
	return 0;
}

//class PrimeNumber
//constructor
PrimeNumber::PrimeNumber(int num) {
	int i = 2;

	//check whether the num is a prime number
	while (i < num && num % i != 0) {
		i++;
	}
	if (i == num) {
		prime = num;
	}
	else {
		cout << "The number is not a prime." << endl;
		exit(1);
	}
}

//operator <<
ostream& operator<<(ostream& outputStream, PrimeNumber& user) {
	outputStream << user.prime;

	return outputStream;
}

//operator ++
PrimeNumber operator++(PrimeNumber& user) {
	int i = 2;
	int flag = 0;

	user.prime++;
	while (flag != 1) {
		while (i < user.prime && user.prime % i != 0) {
			i++;
		}
		if (user.prime % i == 0 && user.prime != i) {
			user.prime++;
			i = 2;//不是質數從頭來過
		}
		else {
			flag = 1;
		}
	}

	return PrimeNumber(user.prime);
}

//operate --
PrimeNumber operator--(PrimeNumber& user) {
	int i = 2;
	int flag = 0;

	if (--user.prime == 1) {
		return PrimeNumber();
	}
	else {
		while (flag != 1) {
			while (i < user.prime && user.prime % i != 0) {
				i++;
			}
			if (user.prime % i == 0 && user.prime != i) {
				user.prime--;
				i = 2;
			}
			else {
				flag = 1;
			}
		}

		return PrimeNumber(user.prime);
	}
}