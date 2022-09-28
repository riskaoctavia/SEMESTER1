/* Program Billing Warnet */
/* Menghitung tarif warnet dengan menghitung lama pemakaian */
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	// Program Billing Warnet
	//deklarasi variabel
	char nama [30];
	int total_waktu;
	int jam, total_jam;
	int menit, total_menit;
	int detik, total_detik;
	
	cout<<"Aplikasi Billing Warnet \n";
	cout<<"Tarif per jam Rp. 5000 \n";
	
	//form data pengguna
	cout<<"Nama pengguna : "; cin>>nama;
	cout<<"Waktu penggunaan Warnet => \n";
	cout<<"Masukan jam : "; cin>>jam;
	cout<<"Masukan menit : "; cin>>menit;
	cout<<"masukan detik : "; cin>>detik;
	
	//logika program
	total_jam=jam*5000;
	total_menit=menit*5000/60;
	total_detik=detik*5000/3600;
	
	//kalkulasi logika program
	cout<<"Total Pembayaran : Rp. ";
	total_waktu=total_jam+total_menit+total_detik;
	
	cout<<total_waktu<<endl<<endl;
	
	
	
	cout<<"develop @riskaoctavia";
	
	getch();
	return 0;
}

