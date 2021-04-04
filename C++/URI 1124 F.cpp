#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.
	
	double L = 1, C = 1, R1 = 1, R2 = 1, X; //largura, comprimento, raio1, raio2, variavel while

	X = 0;

	while(X == 0)
	{
		cin >> L >> C >> R1 >> R2;
		double X2,Y2;
		double D1=2*R1;
		double D2=2*R2;
		X2=C-R2;
		Y2=L-R2;
		double DIST = sqrt(pow(X2-R1,2)+pow(Y2-R1,2));
		
		double MD = (D1 + D2 + abs(D1 - D2)) /2 ;
		double MnL = (L + C - abs(L-C)) /2 ;
		
		if(L == 0 && C == 0 && R1 == 0 && R2 == 0)
		{
			X = 1;
			break;
		}
		if(DIST >= R1+R2 && MD <= MnL){
			cout << "S" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}
	
	return 0;	
}