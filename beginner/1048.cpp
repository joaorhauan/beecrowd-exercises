#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	double salario, reajuste, percent;
	cin >> salario;

	cout << fixed << setprecision(2);

	/*
	switch (salario){
		case salario <= 400.00:
			percent = 0.15;
			reajuste = (salario * percent) + salario;
			break;
		case salario <= 800.00:
			percent = 0.12;
			reajuste = (salario * percent) + salario;
			break;
		case salario <= 1200.00:
			percent = 0.1;
			reajuste = (salario * percent) + salario;
			break;
		case salario <= 2000.00:
			percent = 0.07;
			reajuste = (salario * percent) + salario;
			break;
		case salario > 2000.00:
			percent = 0.04;
			reajuste = (salario * percent) + salario;
			break;
	}

	*/

	if (salario <= 400.00) {
		percent = 0.15;
	} else if (salario <= 800.00) {
		percent = 0.12;
	} else if (salario <= 1200.00) {
		percent = 0.1;
	} else if (salario <= 2000.00) {
		percent = 0.07;
	} else {
		percent = 0.04;
	}

	reajuste = salario * percent;
	salario += reajuste;

	cout << "Novo salario: " << salario << endl;
	cout << "Reajuste ganho: " << reajuste << endl;
	cout << fixed << setprecision(0);
	cout << "Em percentual: " << percent * 100 << " %" << endl;
	return 0;

}

