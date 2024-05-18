#include<iostream>
#include<vector>
using namespace std;
class MyInteger {
public:
	MyInteger();
	void setinteger(int integer);
	void getinteger(int i) const {cout<<ive[i];}
	int operator [](int indexVal) const;
private:
	vector<int> ive;
	int integer;
};
int main(void) {
	int integer, index;
	MyInteger v;
	cout << "Integer:";
	cin >> integer;
	cout << "Digit of integer:";
	cin >> index;
	v.setinteger(integer);
	v.getinteger(index);
}
void MyInteger::setinteger(int integer) {
	ive.clear();
	while(integer>0){
		ive.push_back(integer % 10);
		integer /= 10;
	}
}

int MyInteger::operator[](int indexVal) const {
	if (indexVal >= ive.size())
		return -1;
	else
		return ive[indexVal];
}
MyInteger::MyInteger() {}