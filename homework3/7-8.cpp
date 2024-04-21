#include<iostream>
#include<vector>     //for vector
#include<algorithm>  //for sort
#include<iomanip>    //for setw()
using namespace std;

void outputHistogram(int size);   //function to output histogram

int main(void) {
	vector<int> grade;    //vector for all grades
	vector<int> num;      //vector for the number of poeple of a grade type
	vector<int> type;     //vector for grade types
	int gradeValue = 0;
	int i = 0, j = 0;     //loop variables

	//input grades to vector named grade
	cout << "Enter each student's grade, -1 to finish" << endl;
	cout << "Grade: ";
	cin >> gradeValue;
	while (gradeValue != -1) {
		grade.push_back(gradeValue);

		cout << "Grade: ";
		cin >> gradeValue;
	}

	std::sort(grade.begin(), grade.end());     //sort grades in ascending

	//fill vector type from vector grade
	type.push_back(grade[0]);
	for (i = 1; i < grade.size(); i++) {
		if (grade[i] != grade[i - 1]) {
			//cout << grade[i] << endl;
			type.push_back(grade[i]);
		}
	}

	//initialize vector named num
	for (i = 0; i < type.size(); i++) {
		num.push_back(0);
	}

	//count the number of people of every grade type, and set to vector named num
	for (i = 0; i < type.size(); i++) {
		for (j = 0; j < grade.size(); j++) {
			if (grade[j] == type[i]) {
				num[i]++;
			}
		}
	}

	//output grade types and the number of people
	cout << endl;
	cout << "Grade\tNumber" << endl;
	for (i = 0; i < type.size(); i++) {
		cout << setw(3) << type[i] << " => \t" << num[i] << endl;
	}
	cout << endl;

	//output histogram
	for (i = 0; i < num.size(); i++) {
		cout << setw(3) << type[i] << ": ";
		outputHistogram(num[i]);
		cout << endl;
	}

	system("PAUSE");
	return 0;
}

//function to output histogram
void outputHistogram(int size) {
	for (int i = 0; i < size; i++) {
		cout << "*";
	}
}