//Mengkonversi total detik menjadi jam menit detik//

#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	int totdet,jam,sisa,menit,detik;
	cout <<"Program Konversi Detik Menjadi Jam Menit Detik \n";
	cout <<"---------------------------------------------- \n";
	cout <<"Masukkan total detik = ";
	cin>>totdet;
	jam=totdet/3600;
	sisa=totdet%3600;
	menit=sisa/60;
	detik=sisa%60;
	cout <<"Jumlah jam = "<<jam<<"jam\n";
	cout <<"Jumlah menit = "<<menit<<"menit\n";
	cout <<"Jumlah detik = "<<detik<<"detik";
	
	getch();
	return 0;
	
}
