#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

	double a,b,c;
	cin >> a >> b >> c;

	cout << fixed << setprecision(5);

	if (a == 0.0) {
		cout << "Impossivel calcular" << endl;

	} else {
		double delta = pow(b,2) - 4 * a * c;

		if (delta < 0) {
			cout << "Impossivel calcular" << endl;
		} else {
			cout << "R1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
			cout << "R2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
		}
	}
	return 0;

}

