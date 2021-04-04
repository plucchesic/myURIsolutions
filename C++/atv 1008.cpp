#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>;
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	double A,B,C,TRI,CIR,TRA,QUA,RET; 
	double pi=3.14159;
	
	cin >> A; 
	cin >> B; 
	cin >> C; 
	
	TRI = (A*C)/2;
	CIR = pi*pow(C,2);
	TRA = (A+B)*C/2;
	QUA = pow(B,2);
	RET = A*B;
	
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << TRI << endl;
	cout << "CIRCULO: " << CIR << endl;
	cout << "TRAPEZIO: " << TRA << endl;
	cout << "QUADRADO: " << QUA << endl;
	cout << "RETANGULO: " << RET << endl;
 
	return 0;	
}