
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cout << "Provide n for n!: ";
	cin >> n;

	if(n < 0){
		cout << "Invalid input: n must be greater than or equal to 0" <<endl;
		return 1;
	}

	int total = 1;

	int i = 0;
	while((n-i)>0) {
		total = (n-i)*total;
		i = i + 1;
	}

/*
	for(int i=0; (n-i)>0; i = i + 1){
		total = (n-i)*total;
	}
*/
	cout << "n! is : " << fixed << showpoint << setprecision(15) << total << endl; 
}
