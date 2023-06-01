#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

	int main() {
	double a = 0;
	int b = 0;
	cout.precision(7);
	for(b = 0; b <= 2000000; b++){
		a = (pow((-1), b) / ((2 * b) + 1)) + a;
	}
	
	cout<<"Valor aproximado de pi: "<<(a*4);
	
	
    return 0;
}
