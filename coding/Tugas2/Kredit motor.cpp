/* Menghitung Cicilan Motor */
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(void)
{
	//form
	char nama [30];
	int harga_motor, lama_kredit, harga_pokok, bunga_kredit, cicilan, total_harga_motor, keuntungan_diler;
	
	cout<<"Program Kredit Motor \n";
	
	//form
	cout<<"Nama pengguna : "; cin>>nama;
	cout<<"Masukan Harga Motor : "; cin>>harga_motor;
	cout<<"Masukan Lama Kredit (bulan) : "; cin>>lama_kredit;
	
	//logika program
	harga_pokok=harga_motor/lama_kredit;
	bunga_kredit=harga_pokok*0.1;
	cicilan=harga_pokok+bunga_kredit;
	total_harga_motor=cicilan*lama_kredit;
	keuntungan_diler=total_harga_motor-harga_motor;
	
	//isi
	cout<<"Harga Pokok : Rp. "<<harga_motor/lama_kredit<<endl;
	cout<<"Bunga kredit : Rp. "<<harga_pokok*0.1<<endl;
	cout<<"Cicilan : Rp. "<<harga_pokok+bunga_kredit<<endl;
	cout<<"Total Harga Motor : Rp. "<<cicilan*lama_kredit<<endl;
	cout<<"Keuntungan Diler : Rp. "<<total_harga_motor-harga_motor<<endl;
	
	
	getch();
	return 0;
	
}
