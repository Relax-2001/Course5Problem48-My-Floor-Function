#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber()
{

	float Number = 0;

	cout << "Please enter a number : \n";

	cin >> Number;

	return Number;

}

int MyFloorFunction(float Number)
{

	if (Number > 0)
	{
		return int(Number);
	}
	else
	{
		return int(--Number);
	}

}


int main()
{

	float Number = ReadNumber();

	cout << "C++ Round function result : ";
	cout << floor(Number) << "\n";

	cout << "My Round Result : ";
	cout << MyFloorFunction(Number) << "\n";



}