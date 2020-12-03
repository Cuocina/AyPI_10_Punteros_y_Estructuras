#include <iostream>
using namespace std;

struct NumeroComplejo {
	float parteReal;
	float parteImaginaria;
};


NumeroComplejo ObtenerConjugado(NumeroComplejo* numero);
void Mostrar(NumeroComplejo* numero);

int main() {
	NumeroComplejo unoUno;
	unoUno.parteReal = 1;
	unoUno.parteImaginaria = 1;

	NumeroComplejo conjugado = ObtenerConjugado(&unoUno);
	//Mostrar(unoUno);
	//Mostrar(ObtenerConjugado(unoUno));


	return 0;
}

void Mostrar(NumeroComplejo numero) {
	cout << numero.parteReal;
	if (numero.parteImaginaria != 0) {
		char signo = (numero.parteImaginaria > 0) ? '+' : ' ';
		cout << signo << numero.parteImaginaria << "i";
	}
	cout << endl;
}


NumeroComplejo ObtenerConjugado(NumeroComplejo* numero) {
	NumeroComplejo otroNumero;
	otroNumero.parteReal = (*numero).parteReal;
	otroNumero.parteImaginaria = numero->parteImaginaria * -1;

	return otroNumero;
}

