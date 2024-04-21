#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int review[4][6] = {
		{3,1,5,2,1,5},
		{4,2,1,4,2,4},
		{3,1,2,4,4,1},
		{5,1,4,2,4,2}
	};
	int answer[6] = { 0 };
	int total_distance[4] = { 0 };
	cout << "plz enter ratings for any three movies:(0~5,no review enter -1)" << endl;
	for (int i = 0; i <= 5; i++) {
		cout << "Moveie" << 100 + i << ":";
		cin >> answer[i];
		if (answer[i]>=0 && answer[i] <= 5) {
			for (int j = 0; j <= 3; j++) {
				total_distance[j] += pow(review[j][i] - answer[i], 2);
			}
		}
	}
	int min_distance = total_distance[0], min_index=0;
	for (int i = 0; i <= 3; i++) {
		if (min_distance > total_distance[i]) {
			min_distance = total_distance[i];
			min_index = i;
		}	
	}
	cout << "Predicted ratings by reviewer " << min_index << " for the other movies:" << endl;
	for (int i = 0; i <=5; i++) {
		if(answer[i]==-1)
		cout << "Movie " << 100 + i << ": " << review[min_index][i] << endl;
	}

	system("pause");
	return 0;
}