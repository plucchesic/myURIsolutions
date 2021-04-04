#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int cod1, cod2, unit1, unit2;
	double v1, v2, vt1;

	cin >> cod1 >> unit1 >> v1;
	cin >> cod2 >> unit2 >> v2;

	vt1 = (unit1 * v1) + (unit2 * v2);
	
	cout << fixed << setprecision(2);	
	cout << "VALOR A PAGAR: R$ " << vt1 << endl;

	return 0;
}
