#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int A, B;
	double total, codigo;
	cin >> A >> B;

	switch(A)
{
case 1:
		codigo = 4;
	break;
case 2:
		codigo = 4.5;
	break;
case 3:
		codigo = 5;
	break;
case 4:
		codigo = 2;
	break;
case 5:
		codigo = 1.5;
	break;

}
	total = codigo * B;

	cout << fixed << setprecision(2);
	cout << "Total: R$ " << total << endl;

	return 0;
}

