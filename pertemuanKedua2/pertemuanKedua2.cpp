#include <iostream>
using namespace std;
int main()
{
	int bilangan2;

	srand(time(0));

	bilangan2 = rand() % 10;

	cout << "Bilangan Awal : " << bilangan2 << endl;

	if (bilangan2 < 5) {
		cout << "Bilangan Lebih Kecil dari 5";
		return 0;
	}
	bilangan2 = 2 * bilangan2;
	cout << "Bilangan Akhir : " << bilangan2 << endl << endl;
    
}

