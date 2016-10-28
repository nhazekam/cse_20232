
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	int n;
	double r, total, actual;
	cout << "Provide n: ";
	cin >> n;
	cout << endl << "Provide r within -1 and 1: ";
	cin >> r;

	if(n < 3){
		cout << "Invalid input: n must be greater than or equal to 3" <<endl;
		return 1;
	}
	if((r < -1) || (r > 1)){
		cout << "Invalid input: r must be between -1 and 1" <<endl;
		return 2;
	}

	// ENTER LOOP HERE


	actual = 1.0/(1.0-r);
	cout << "Result is : " << fixed << showpoint << setprecision(15) << total << endl; 
	cout << "Actual is : " << fixed << showpoint << setprecision(15) << actual << endl; 
}
