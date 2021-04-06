#include <iostream>
#include <iomanip>
#include <locale>
#pragma warning(disable:4996)
using namespace std;


int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre inicializar as variáveis antes de usar.

	int auxW, Vdec; //variavel auxiliar while, Vdec = decisão: se 1, novo calculo. se 2, termina o programa.
	double n1 = -1, n2 = -1, media = -1; //variaveis da nota do aluno, valor de inicialização = -1.

	auxW = 0;
	Vdec = 0;

	cout << fixed << setprecision(2);

	while (auxW == 0) {
		cin >> n1;
		while (n1 >= 0 && n1 <= 10.0) {
			cin >> n2;
			if (n2 >= 0 && n2 <= 10.0) {
				media = (n1 + n2) / 2;
				cout << "media = " << media << endl;
				break;
			}
			else if (n2 < 0 || n2>10)
				cout << "nota invalida" << endl;
		}
		while(media >= 0 && media <= 10) {

			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> Vdec;
			if (Vdec == 1){
				media = -1;
				break;
			}
			else if (Vdec == 2)
				break;
		}
		if (Vdec == 2)
			auxW = 1;
		if (n1 < 0 || n1>10)
			cout << "nota invalida" << endl;
	}
	return 0;
}