#include "pch.h"
#include <iostream>

using namespace std;

extern "C" void cicloFor(int a, int b, int ini, int fin);
int a = 5, b = 2, ini = 1, fin = 5;

int main()
{
	cicloFor(a, b, ini, fin);
	cout << "ciclos\n";

	system("PAUSE");
}
