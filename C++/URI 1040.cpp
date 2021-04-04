#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	double N1, N2, N3, N4, NP3, M1, M2;

	cin >> N1 >> N2 >> N3 >> N4;

	M1 = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / 10;

	cout << fixed << setprecision(1);

	if(M1 >= 7)
	{
		cout << "Media: " << M1 << endl;
		cout << "Aluno aprovado." << endl;
	}
	else if(M1 >= 5.00 && M1 <= 6.99)
	{
		cout << "Media: " << M1 << endl;
		cout << "Aluno em exame." << endl;
		cin >> NP3;
		cout << "Nota do exame: " << NP3 << endl;
		M2=(M1+NP3)/2;
		if(M2>=5.0){
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << M2 << endl;
			}
		else{
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << M2 << endl;
		}
	}else{
		cout << "Media: " << M1 << endl;
		cout << "Aluno reprovado." << endl;
	}

	return 0;
}
