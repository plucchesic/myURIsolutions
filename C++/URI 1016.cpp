#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	int A,D;
	cin >> A;
	D=A*2;
	cout << D << " minutos" << endl;
	
	return 0;	
}