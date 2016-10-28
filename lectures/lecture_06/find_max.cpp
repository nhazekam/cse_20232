
#include <iostream>
#include <string>
using namespace std;

int max(int a, int b){
	int value = a;
	if(b > a)
		value = b;

	return value;
}


int main() {

	int x = 5,
		y = 7;
	int result = max(x, y);
	cout << "Max of " << x << " and " << y << " : "<< result << endl;
}
/*
int max(int a, int b){
	if(a >= b)
		return a;
	else
		return b;
}
*/
