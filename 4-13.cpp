#include<iostream>
#include<cmath>
using namespace std;
double convertToMPH(int min, int sec);
double kphconvertToMPH(double);

int main() {
    int min = 0, sec = 0;
    cout << "Please enter minutes and seconds per mile: ";
    cin >> min >> sec;
    cout << convertToMPH(min, sec) << " MPH" << endl;

    system("pause");
    return 0;
}

double convertToMPH(int min, int sec) {
    double hour = min / 60.0 + sec / 3600.0;
    return  1 / hour;
}