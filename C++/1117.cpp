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

	int auxW; //variavel auxiliar while;
	double n1=-1, n2=-1, media=-1; //variaveis da nota do aluno

	auxW = 0;

	while (auxW == 0) {
		cin >> n1;
		while(n1 >= 0 && n1 <= 10.0) {
			cin >> n2;
			if(n2 >= 0 && n2 <= 10.0) {
				media = (n1 + n2) / 2;
				cout << "media = " << media << endl;
				break;
			}
			else if(n2<0 || n2>10)
			cout << "nota invalida" << endl;
		}
		if (media >= 0 && media <= 10)
			auxW = 1;
		if(n1<0 || n2>10) //eu não faço ideia do pq isso funcionou mas funcionou
		cout << "nota invalida" << endl;
	}
	return 0;
}