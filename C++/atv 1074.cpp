#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int i, N, X;

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin >> X;
		if(X > 0 && X % 2 == 0)
			cout << "EVEN POSITIVE" << endl;
		else if(X < 0 && X % 2 == 0)
			cout << "EVEN NEGATIVE" << endl;
		else if(X > 0 && X % 2 != 0)
			cout << "ODD POSITIVE" << endl;
		else if(X < 0 && X % 2 != 0)
			cout << "ODD NEGATIVE" << endl;
		else
			cout << "NULL" << endl;

	}

	return 0;
}
