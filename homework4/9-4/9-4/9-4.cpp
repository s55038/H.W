#include<iostream>
#include<string>
#include<vector>
using namespace std;

void erasePunct(vector<char>& punct, vector<int>& punctIndex, string& input);          //function to erase punctation from input string
void strInVec(vector<string>& vec, string& input);                                     //function to put each substr into vector
void changeStr(vector<string>& vec);                                                   //function to change each four-letter substr to "love" or "Love"
string insertPunct(vector<string>& vec, vector<char>& punct, vector<int>& punctIndex); //function to insert punctation to changed string

int main(void) {
	vector<string> vec;
	vector<char> punct;
	vector<int> punctIndex;
	string input, str, quit;

	do {
		vec.clear();
		punct.clear();
		punctIndex.clear();

		cout << "Enter a line of string that ends with a puntuation:";
		getline(cin, input);

		erasePunct(punct, punctIndex, input);       //erase punctation from input string
		strInVec(vec, input);						//put each substr into vector
		changeStr(vec);								//change each four-letter substr to "love" or "Love"
		str = insertPunct(vec, punct, punctIndex);  //insert punctation to changed string

		cout << endl << str << endl << endl;   //output changed string

		cout << "Enter 'Y' to continue, or 'N' to quit:";   //determine whether user want to change string again
		cin >> quit;

		while (quit != "Y" && quit != "y" && quit != "N" && quit != "n") {
			cout << "Error! Enter 'Y' to continue, or 'N' to quit:";
			cin >> quit;
		}
		cin.clear();
		cin.ignore(1000, '\n');

	} while (quit == "Y" || quit == "y");

	system("PAUSE");
	return 0;
}

//function to erase punctation from input string
void erasePunct(vector<char>& punct, vector<int>& punctIndex, string& input) {
	int i = 0;

	for (i = 0; i < input.length(); i++) {
		if (ispunct(input.at(i))) {
			punct.push_back(input.at(i));
			punctIndex.push_back(i);
		}
	}

	i = 0;
	while (i < input.length()) {
		if (ispunct(input.at(i))) {
			input.erase(i, 1);
			i = 0;
		}
		else {
			i++;
		}
	}
}

//function to put each substr into vector
void strInVec(vector<string>& vec, string& input) {
	string space = " ", str1;
	int pos;

	do {
		pos = input.find(space);
		str1 = input.substr(0, pos);
		vec.push_back(str1);
		input.erase(0, pos + 1);
	} while (input.find(space) != string::npos);

	str1 = input.substr(0, input.length());
	vec.push_back(str1);
}

//function to change each four-letter substr to "love" or "Love"
void changeStr(vector<string>& vec) {
	int i = 0;

	for (i = 0; i < vec.size(); i++) {
		if (vec[i].length() == 4) {
			if (i == 0) {
				vec[i] = "Love";
			}
			else {
				vec[i] = "love";
			}
		}
	}
}

//function to insert punctation to changed string
string insertPunct(vector<string>& vec, vector<char>& punct, vector<int>& punctIndex) {
	int i = 0;
	string space = " ", str2, punctToStr;

	for (i = 0; i < vec.size(); i++) {
		str2 += vec[i];
		if (i != vec.size() - 1) {
			str2 += space;
		}
	}

	for (i = 0; i < punct.size(); i++) {
		punctToStr = space + punct[i];
		str2.insert(punctIndex[i], punctToStr, 1);
	}

	return str2;
}