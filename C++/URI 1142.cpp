#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int i, A;
	int N1 = 1, N2 = 2, N3 = 3;
	cin >> A;

	for(i = 0; i < A; i++)
	{
		cout << N1 << " " << N2 << " " << N3 << " " << "PUM" << endl;
		N1 = N1 + 4;
		N2 = N2 + 4;
		N3 = N3 + 4;

	}

	return 0;
}
