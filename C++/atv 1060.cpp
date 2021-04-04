#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int i, n, npositivos; //i incremento, n: numero de vezes, npositivos: nº positivos
	double valor; //valor individual que será verificado se é ou não positivo

	npositivos = 0;
	n = 6;

	for(i = 0; i < n; i++)
	{
		cin >> valor;
		if(valor > 0)
			npositivos++;
	}

	cout << npositivos << " valores positivos" << endl;


	return 0;
}
