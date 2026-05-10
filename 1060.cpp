#include <iostream>
using namespace std;


int main() {

	int x, p = 0, n = 0;


	
	for (int i = 0; i < 6; i++) {
		cout << i << endl;	
	}

	for (int i = 0; i < 6; i++) {
		cin >> x;
		if (x > 0) {
			p++;
		} else {
			n++;
		}
	}


	return 0;

}

