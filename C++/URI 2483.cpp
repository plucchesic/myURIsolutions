#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int N;

	cin >> N;

	string a(N, 'a');

	cout << "Feliz nat" << a << "l!" << endl;

	return 0;
}
