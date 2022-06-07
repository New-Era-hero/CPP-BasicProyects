#include <iostream>
using namespace std;

class Calculadora {
public:

	int Sumar(int a, int b) {
		return a + b;
	};

	int Restar(int a, int b) {
		return a - b;
	}

	int Multiplicar(int a, int b) {
		return a * b;
	};

	int Dividir(int a, int b) {
		return a / b;
	};

};

int main() {
	Calculadora C;
	int a;
	int b;
	int Option;
	cout << "Elige una Opcion \n 1-Sumar \n 2-Restar \n 3-Multiplicar \n 4-Dividir \n Numero mayor a 4 para Cancelar";
	cin >> Option;

	switch (Option) {
	case 1:

		cout << "Introduce un numero: " << endl;
		cin >> a;

		cout << "Introduce otro numero: " << endl;
		cin >> b;

		cout << C.Sumar(a, b);

		break;

	case 2:

		cout << "Introduce un numero: " << endl;
		cin >> a;

		cout << "Introduce otro numero: " << endl;
		cin >> b;

		cout << C.Restar(a, b);

		break;

	case 3:

		cout << "Introduce un numero: " << endl;
		cin >> a;

		cout << "Introduce otro numero: " << endl;
		cin >> b;

		cout << C.Multiplicar(a, b);

		break;

	case 4:

		try {
			cout << "Introduce un numero: " << endl;
			cin >> a;

			cout << "Introduce otro numero: " << endl;
			cin >> b;

			if (b == 0) {
				throw 0;
			}
			cout << C.Dividir(a, b);
		}
		catch (int x) {
			cout << "Divicion by zero! ";
		}
		break;

	default:
		cout << "Bye.";
		break;
	};
};
