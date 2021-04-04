#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int X, N, F;
	string nome;

	cin >> N;
	X = 1;
	while(X <= N)
	{
		cin >> nome >> F;
		if(nome == "Thor")
			cout << "Y" << endl;
		else
			cout << "N" << endl;
		X += 1;

	}

	return 0;
}
