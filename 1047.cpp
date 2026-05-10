#include <iostream>
using namespace std;


int main() {

	int h_inicial, m_inicial, h_final, m_final;
	cin >> h_inicial >> m_inicial >> h_final >> m_final; 

	int horas = h_final - h_inicial;
	int minutos = m_final - m_inicial;

	if (minutos < 0) {
		minutos += 60;
		horas -= 1;
	}

	if (horas < 0) {
		horas += 24;
	} else if (horas == 0 && minutos == 0) {
		horas = 24;
	}

	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

	return 0;

}

