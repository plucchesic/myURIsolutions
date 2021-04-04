#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.
	
	int X,N;
	char frase[100];
	
	cin >> N;
	X=1;
	while(X<=N){
	cin.ignore();	
	cin.getline(frase,100);
	cout << "gzuz" << endl;	
	X+=1;	
		
	}
	
	return 0;	
}