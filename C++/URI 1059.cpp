#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.
	
	int X=0;
	
	for(int i=0;X<100;i++){
		X=X+2;
		cout << X << endl;
		i++;
	}
	
	return 0;	
}