#include <iostream>
#include <iomanip>
using namespace std;


int main() {

	int cod, qtd;
	double valor;
	cin >> cod >> qtd;
	
	cout << fixed << setprecision(2);

	switch (cod) {
		case 1:
			valor = 4.00 * qtd;
			break;
		case 2:
			valor = 4.50 * qtd;
			break;
		case 3: 
			valor = 5.00 * qtd;
			break;
		case 4:
			valor = 2.00 * qtd;
			break;
		case 5:
			valor = 1.50 * qtd;
			break;
	}

	cout << "Total: R$ " << valor << endl;

	return 0;

}

