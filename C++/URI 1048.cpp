#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	double X, NX, DX; //X salario normal, NX novo salario, DX reajuste ganho.

	cin >> X;
	cout << fixed << setprecision(2);

	if(0 <= X && X <= 400.00)
	{

		NX = 0.15 * X + X;
		DX = NX - X;
		cout << "Novo salario: " << NX << endl;
		cout << "Reajuste ganho: " << DX << endl;
		cout << "Em percentual: 15 %" << endl;

	}
	else if(X > 400.00 && X <= 800.00)
	{
		NX = 0.12 * X + X;
		DX = NX - X;
		cout << "Novo salario: " << NX << endl;
		cout << "Reajuste ganho: " << DX << endl;
		cout << "Em percentual: 12 %" << endl;

	}
	else if(X > 800.00 && X <= 1200.00)
	{
		NX = 0.10 * X + X;
		DX = NX - X;
		cout << "Novo salario: " << NX << endl;
		cout << "Reajuste ganho: " << DX << endl;
		cout << "Em percentual: 10 %" << endl;

	}
	else if(X > 1200.00 && X <= 2000.00)
	{
		NX = 0.07 * X + X;
		DX = NX - X;
		cout << "Novo salario: " << NX << endl;
		cout << "Reajuste ganho: " << DX << endl;
		cout << "Em percentual: 7 %" << endl;

	}
	else
	{
		NX = 0.04 * X + X;
		DX = NX - X;
		cout << "Novo salario: " << NX << endl;
		cout << "Reajuste ganho: " << DX << endl;
		cout << "Em percentual: 4 %" << endl;

	}

	return 0;
}
