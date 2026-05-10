#include <iostream>
using namespace std;


int main() {

	int hora_inicial, hora_final;
	cin >> hora_inicial >>  hora_final;

	if (hora_final == 0 && hora_inicial == 0) {
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	} else if (hora_inicial > 12) {
		cout << "O JOGO DUROU " << (24 - hora_inicial) + hora_final << " HORA(S)" << endl;
	} else if (hora_final > 12) {
		cout << "O JOGO DUROU " << hora_final - hora_inicial << " HORA(S)" << endl;
	} else { 
		cout << "O JOGO DUROU " << hora_inicial + hora_final << " HORA(S)" << endl;
	}

	return 0;

}

