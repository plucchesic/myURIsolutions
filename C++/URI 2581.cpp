#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int I, N;
	char frase[100];

	I = 0;
	cin >> N;

	for(I = 0; I < N; I++)
	{
		cin.ignore();
		cin.getline(frase, 100);
		cout << "I am Toorg!" << endl;
	}


	return 0;
}
