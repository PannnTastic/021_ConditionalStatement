#include <iostream>
using namespace std;

int main()
{
	int a;
	srand(time(0));
	a = rand() % 10;

	cout << "Nilai Awalnya : " << a;

	if (a >= 5) {
		a = 2 * a;
	}
	else {
		a = a * 4;
	}
	cout << "Nilai Sekarang : " << a;
}




