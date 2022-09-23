/* Menghitung Luas dan Keliling Lingkaran */

#include <iostream>
#include <conio.h>
#define phi 3.14
using namespace std;
int main (void)
{
	float jari, luas, keliling;
		cout << "Masukan jari-jari lingkaran= ";
		cin >> jari;
		luas=phi*jari*jari;
		keliling=2*phi*jari;
		cout << "luas lingkaran=" << luas;
		cout << "\nkeliling lingkaran=" << keliling;
		getch();
		return 0;
}
