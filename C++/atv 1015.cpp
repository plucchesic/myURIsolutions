#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	double X1,X2,Y1,Y2,DIF1,DIF2,DIST;
	
	cin >> X1;
	cin >> Y1;
	cin >> X2;
	cin >> Y2;
	
	DIF1=pow(X2-X1,2);
	DIF2=pow(Y2-Y1,2);
	DIST=sqrt(DIF1+DIF2);
	
	cout << fixed << setprecision(4);
	cout << DIST << endl;
	
	return 0;	
}