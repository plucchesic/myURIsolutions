#include <iostream>
#include <iomanip>
#include <locale>
#pragma warning(disable:4996)
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!

	int X=0, Y=1;

	while (X != Y) {
		cin >> X >> Y;
		if (X > Y)
			cout << "Decrescente" << endl;
		else if (X < Y)
			cout << "Crescente" << endl;
		else
			break;
	}

	return 0;
}