#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
   	   	  
	int entr;
	
	cin >> entr;
	
	int seg=0;
	int min=0;
	int hora;
	
	if(seg<60){
		seg=entr;
		min=0;
		hora=0;
	}
	if(seg>=60){
		
		min= entr/60;
		seg= entr%60;
		hora=0;
		
	}
	
	min=entr/60;
	hora=min/60;
	
	if(min>60){
		min=min%60;
	}
	
	cout << hora << ":" << min << ":" << seg << endl;
	
	return 0;	
}