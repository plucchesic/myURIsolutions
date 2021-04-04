#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{

	int x, y, z;
	cin >> x >> y >> z;

	if(x > y && x > z)
	{

		if(y > z)
		{
			cout << z << endl;
			cout << y << endl;
			cout << x << endl;
		}
		else
		{
			cout << y << endl;
			cout << z << endl;
			cout << x << endl;
		}
	}

	if(y > z && y > x)
	{

		if(x > z)
		{
			cout << z << endl;
			cout << x << endl;
			cout << y << endl;
		}
		else
		{
			cout << x << endl;
			cout << z << endl;
			cout << y << endl;
		}
	}

	if(z > y && z > x)
	{

		if(y > x)
		{
			cout << x << endl;
			cout << y << endl;
			cout << z << endl;
		}
		else
		{
			cout << y << endl;
			cout << x << endl;
			cout << z << endl;
		}
	}

	cout << "" << endl;
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}
