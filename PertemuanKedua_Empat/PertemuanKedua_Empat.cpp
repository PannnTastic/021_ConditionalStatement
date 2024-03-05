#include <iostream>
using namespace std;

int main()
{
	int bil1, bil2;
	string status;
	srand(time(0));

	bil1 = rand() % 10;
	bil2 = rand() % 10;

	if (bil1 == bil2) {
		status = "Bilangan 1 sama dengan Bilangan 2";
	}
	else if (bil1 > bil2) {
		status = "Bilangan 1 lebih besar dari Bilangan 2";
	}
	else {
		status = "Bilangan 1 lebih kecil dari bilangan 2";
	}

	cout << "Bilangan pertama : " << bil1;
	cout << "Bilangan Kedua : " << bil2;
	cout << "Status Bilangan : " << status;
   
}
