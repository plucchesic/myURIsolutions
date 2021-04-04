#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de variáveis!
	//sempre dar ctrl+shift+f ao terminar o código.


	string w1, w2, w3; //w1,w2,w3=palavra 1,2,3, respectivamente

	cin >> w1;

	if(w1 == "vertebrado")
	{
		cin >> w2;
		if(w2 == "ave")
		{
			cin >> w3;
			if(w3 == "carnivoro")
				cout << "aguia" << endl;
			else if(w3 == "onivoro")
				cout << "pomba" << endl;
		}
		else if(w2 == "mamifero")
		{
			cin >> w3;
			if(w3 == "onivoro")
				cout << "homem" << endl;
			else if(w3 == "herbivoro")
				cout << "vaca" << endl;
		}

	}
	else if(w1 == "invertebrado")
	{
		cin >> w2;
		if(w2 == "inseto")
		{
			cin >> w3;
			if(w3 == "hematofago")
				cout << "pulga" << endl;
			else if(w3 == "herbivoro")
				cout << "lagarta" << endl;
		}
		else if(w2 == "anelideo")
		{
			cin >> w3;
			if(w3 == "hematofago")
				cout << "sanguessuga" << endl;
			else if (w3 == "onivoro")
				cout << "minhoca" << endl;
		}
	}

	return 0;
}
