#include <iostream>

using namespace std;

void power(int base, int exp);

int main()
{
	

	return 0;
}

//takes a base and an exponent and finds base to exponent
void power(int base, int exp)
{
	int result = 1;

	//multiply the base by itself exp times
	for(int i = 0; i < exp; i++)
	{
		result = result * base;
	}

	cout << base << " to the power of " << exp << " is " << result << endl << endl;
}