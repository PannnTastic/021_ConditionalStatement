#include <iostream>
using namespace std;

int main()
{
	int a, b;
	string c;
	srand(time(0));

	a = rand() % 10;
	b = rand() % 10;

	if (a == b) {
		c = "Bilangan 1 sama dengan Bilangan 2";
	}
	else if (a > b) {
		c = "Bilangan 1 lebih besar dari Bilangan 2";
	}
	else {
		c = "Bilangan 1 lebih kecil dari bilangan 2";
	}

	cout << "Bilangan pertama : " << a;
	cout << "Bilangan Kedua : " << b;
	cout << "Status Bilangan : " << c;
   
}
