
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	int n = 0;
	double r, total, actual;
	r = -3;

	while(n < 3){
		cout << "Provide n: ";
		cin >> n;
	}
	while((r < -1) || (r > 1)){
		cout << endl << "Provide r within -1 and 1: ";
		cin >> r;
	}

	// ENTER LOOP HERE

	for(int i = 0; i < n;  i++){
		total = total + pow(r, i);
	}

	actual = 1.0/(1.0-r);
	cout << "Result is : " << fixed << showpoint << setprecision(15) << total << endl; 
	cout << "Actual is : " << fixed << showpoint << setprecision(15) << actual << endl; 
}
