#include<iostream>
using namespace std;

int main() {
	int a, b, e;
	float c;
	string d;

	cout << "Masukkan Nilai Matematika : ";
	cin >> a;
	cout << "Masukkan Nilai Bahasa : ";
	cin >> b;
	cout << "Masukkan Nilai Fisika : ";
	cin >> e;

	c = (a + b + e) / 3;

	if (c > 60 || a > 70) {
		d = "Lulus";
		 if (e >= 90) {
			d = "Lulusan Terbaik";
		}
	}
	else {
		d = "Tidak Lulus";
	}

	cout << "Status Kelulusan : " << d << "\nDengan Nilai : " << c << endl << endl;
}