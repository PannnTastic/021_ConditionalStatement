#include <iostream>
using namespace std;

int main()
{
	int bil;
	srand(time(0));
	bil = rand() % 10;

	cout << "Nilai Awalnya : " << bil;

	if (bil >= 5) {
		bil = 2 * bil;
	}
	else {
		bil = bil * 4;
	}
	cout << "Nilai Sekarang : " << bil;
}




