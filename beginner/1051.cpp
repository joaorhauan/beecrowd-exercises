#include <iostream>
#include <iomanip>
using namespace std;


int main() {


	double x, imposto;
	cin >> x;

	cout << fixed << setprecision(2);
	if (x < 2000.01) {
		imposto = 0;
	} else if (x < 3000) {
		imposto = (x - 2000) * 0.08;
	} else if (x < 4500) {
		imposto = 80 + ((x - 3000) * 0.18); 
	} else {
		imposto = (x - 4500) * 0.28 + 270 + 80;
	}
	
	if (imposto == 0) {
		cout << "Isento" << endl;
	} else {
		cout << "R$ " << imposto << endl;
	}
	return 0;

}

