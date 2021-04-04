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
	double valor, media, soma; //valor: verificado se é ou não positivo;
	//soma:soma de todos os positivos; media=media dos positivos.

	npositivos = 0;
	n = 6;

	for(i = 0; i < n; i++)
	{
		cin >> valor;
		if(valor > 0)
		{
			npositivos++;
			soma = soma + valor;

		}

	}

	media = soma / npositivos;
	cout << fixed << setprecision(1);
	cout << npositivos << " valores positivos" << endl;
	cout << media << endl;


	return 0;
}
