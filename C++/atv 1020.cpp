#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	int A,dias,meses,anos;
	
	cin >> A;
	
	anos=A/365;
	meses=(A%365)/30;
	dias=(A%365)%30;
	
	cout << anos << " ano(s)" << endl;
	cout << meses << " mes(es)" << endl;
	cout << dias << " dia(s)" << endl;
	
	return 0;	
}