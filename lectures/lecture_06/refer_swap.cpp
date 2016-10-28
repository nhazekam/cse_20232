
#include <iostream>
#include <string>
using namespace std;

void swap(int& a, int& b);

int main() {

	int x = 5,
		y = 7;
	swap(x, y);
	cout << "x = " << x << "\ty = " << y << endl;
}

void swap(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp;
}





