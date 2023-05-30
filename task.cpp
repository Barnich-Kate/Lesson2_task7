  #include <iostream>
#include <math.h>
using namespace std;
int main() {

	int n;
	cout << "Type number N: ";
	cin >> n;
	do {
		if (n !=0) {
			cout << "Type new number equal zero: ";
			cin >> n;
		} else {
			break;
		}
		cout <<"It is wright number";
		n++;
	}
	 while (n == 0);
	}
