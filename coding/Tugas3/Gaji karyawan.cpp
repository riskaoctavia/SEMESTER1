/* Menghitung Gaji Karyawan */
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	// input
	char nama [30];
	string nik;
	int jenis_kelamin,status_pernikahan,kendaraan,gaji_pokok,uang_makan,tunjangan,transport,gaji_kotor,pajak,gaji_bersih;
	
	cout<<"Program Menghitung Gaji Karyawan \n";
	cout<<"Seusai ketentuan yang berlaku \n";
	
	// data karyawan
	cout<<"Nama Karyawan : "; cin>>nama;
	cout<<"NIK : "; cin>>nik;
	cout<<"Jenis Kelamin (0=perempuan,1=laki-laki)  : "; cin>>jenis_kelamin;
	cout<<"Status Pernikahan (0=single,1=menikah) : "; cin>>status_pernikahan;
	cout<<"Kendaran (0=motor,1=mobil): "; cin>>kendaraan;
	cout<<"Gaji Pokok : "; cin>>gaji_pokok;
	cout<<"Uang Makan : "; cin>>uang_makan;

	// tunjangan
	cout<<"Jika jenis kelamin laki-laki dan status menikah maka mendapat 500 selain itu tunjangan 0 \n";
	if (jenis_kelamin==1 && status_pernikahan==1)
	{
	tunjangan	= 500;
	cout<<"\nBesar Uang Tunjangan : Rp."<<tunjangan;
	}
	else{
	tunjangan	=0;
	cout<<"\nBesar Uang Tunjangan : Rp."<<tunjangan;
	}
	
	// transport
	if(kendaraan==1)
	{
	transport	= 1000;
	cout<<"\nBesar Uang Transport = Rp."<<transport;
	}
	else if(kendaraan==0)
	{
	transport	=500;
	cout<<"\nBesar Uang Transport = Rp."<<transport;
	}else
	{
	transport	=0;
	cout<<"\nBesar Uang Transport = Rp."<<transport;
	}
	
	// gaji kotor
	gaji_kotor=gaji_pokok+tunjangan+uang_makan+transport;
	cout<<"\nGaji Kotor : Rp."<<gaji_kotor;
	
	// pajak
	pajak=0.05*gaji_kotor;
	cout<<"\nTotal Pajak : Rp."<<pajak;
	
	// gaji bersih
	gaji_bersih=gaji_kotor-pajak;
	cout<<"\nGaji Bersih : Rp."<<gaji_bersih;
	
	getch();
	return 0;
	
}
