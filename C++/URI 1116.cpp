#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	int i, n;
	double X, Y, XdivY;

	cin >> n;

	for(i = 0; i < n; i++)
	{

		cin >> X >> Y;
		if(Y == 0)
			cout << "divisao impossivel" << endl;
		else{
			XdivY= 1.0*(X/Y);
			cout << fixed << setprecision(1);
			cout << XdivY << endl;
		}

	}

	return 0;
}
