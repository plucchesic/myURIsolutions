#include <iostream>
#include <iomanip>
#include <locale>
#pragma warning(disable:4996)
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!

	int X=0;

	while (X != 2002) {
		cin >> X;
		if (X == 2002) {
			cout << "Acesso Permitido" << endl;
			break;
		}
		else
		cout << "Senha Invalida" << endl;

	}

	return 0;
}