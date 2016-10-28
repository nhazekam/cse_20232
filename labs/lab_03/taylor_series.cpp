/*  
 * CSE 20232 Lab 2: Taylor series of 1/(1-x)
 *
 * Complete the code as directed in the comments below. 
 * 
 */  
#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {

	double n, x;

	// ADD CODE TO VALIDATE THE INPUT
	cout << "Please input:";
	do
	{
		cout << endl << "x : ";
		cin >> x;
	}
	while( x <= -1 || x >= 1);

	cout << endl << "n : ";
	cin >> n;
	
	if(n < 3){
		n = 3;
	} else if(n > 20){
		n = 20;
	}

	// ADD CODE TO COMPUTE TAYLOR SERIES OF 1/(1-x) (USE A LOOP)
	double output;
	for(int i=0; i <= n; i++){
		output += pow(x, i);
	}

	double actual =  (1.0/(1.0-x));
	double error = abs((actual - output)/actual);
	// ADD CODE TO PRINT OUT x, actual, AND error
	cout << showpoint << fixed << setprecision(15)<< output << endl << actual << endl << error << endl;
	return 0;
}
