#include <iostream>
using namespace std;


int main() {

	int a,b,c;
	cin >> a >> b >> c;

	int maior, segundo, terceiro;
	if (a > b && a > c) {
		maior = a;
		segundo = (b > c) ? b : c;
		terceiro = (c > b) ? b : c;
	} else if (b > a && b > c) {
		maior = b;
		segundo = (a > c) ? a : c;
		terceiro = (c > a) ? a : c;
	} else {
		maior = c;
		segundo = (a > b) ? a : b;
		terceiro = (b > a) ? a : b;
	}

	cout << terceiro << endl;
	cout << segundo << endl;
	cout << maior << endl;

	cout << endl;

	cout << a << endl << b << endl << c << endl;

	return 0;

}

