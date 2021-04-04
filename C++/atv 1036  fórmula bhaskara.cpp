#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;
//ctrl shift F arruma a estrutura do código
int main()
{
	setlocale(LC_ALL, "Portuguese");

	double a, b, c, delta, R1, R2;

	cin >> a >> b >> c;

	delta = (b*b)-(4 * a * c);

	if(delta < 0 || a == 0)
		cout << "Impossivel calcular" << endl;
	else{
		R2 = (-b-sqrt(delta)) / (2 * a);
		R1 = (-b+sqrt(delta)) / (2 * a);
		cout << fixed << setprecision(5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
	return 0;
}