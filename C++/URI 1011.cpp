#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	double R,V;
	double pi=3.14159;
	
	cin >> R;
	V=(4/3.0)*pi*pow(R,3);
	
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << V << endl;
	
	return 0;	
}