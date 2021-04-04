#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.

	float A, B, C, MAC, MAB, MBC;

	cin >> A >> B >> C;

	MAB = (A + B + abs(A - B)) / 2;
	MAC = (A + C + abs(A - C)) / 2;
	MBC = (B + C + abs(B - C)) / 2;

	if(MAB >= MAC && MAB >= MBC)
		cout << MAB << " eh o maior" << endl;
	else if(MAC >= MAB && MAC >= MBC)
		cout << MAC << " eh o maior" << endl;
	else if(MBC >= MAB && MBC >= MAC)
		cout << MBC << " eh o maior" << endl;

	return 0;
}
