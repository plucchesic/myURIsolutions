#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int A, B;

	cin >> A;
	cin >> B;

	if(A % 2 != 0 && B % 2 != 0)
		cout << "1" << endl;
	else if (B % 2 != 0 && A % 2 == 0)
		cout << "0" << endl;
	else if (A % 2 != 0 && B % 2 == 0)
		cout << "0" << endl;
	else if (A % 2 == 0 && B % 2 == 0)
		cout << "1" << endl;


	return 0;
}
