#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.
	
	int A;
	
	cin >> A;
	
	if(A==0)
		cout << "E" << endl;
	if(A>=1 && A<=35)
		cout << "D" << endl;
	if(A>=36 && A<=60)
		cout << "C" << endl;
	if(A>=61 && A<=85)
		cout << "B" << endl;
	if(A>=86 && A<=100)
		cout << "A" << endl;
	
	
	return 0;	
}