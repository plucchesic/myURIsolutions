#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int i, n, valor, npares;
	n = 5;
	npares = 0;

	for(i = 0; i < n; i++)
	{
		cin >> valor;
		if(valor % 2 == 0)
			npares++;
	}
	cout << npares << " valores pares" << endl;


	return 0;
}
