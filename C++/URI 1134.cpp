#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int X, Y, XA, XG, XD; //XA: nºalcool; XG: nºgasolina; XD: nº diesel.
	//Y controla o while;

	X = 0;
	Y = 0;
	XA = 0;
	XG = 0;
	XD = 0;

	while(Y == 0)
	{
		cin >> X;

		if(X == 1)
			XA++;
		else if(X == 2)
			XG++;
		else if(X == 3)
			XD++;
		else if(X == 4)
			Y++;
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << XA << endl;
	cout << "Gasolina: " << XG << endl;
	cout << "Diesel: " << XD << endl;

	return 0;
}
