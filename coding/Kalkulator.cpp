/* program kalkulator menggunakan untuk operasi-operasi */
/* tambah, kurang, kali, bagi, modulo */
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main(void)
{
	int konversi,A,B;
	string operasi;
	float hasil;
	
	
	cout<<"Program Kalkulator \n"<<endl;
	
	cout<<"Pilihan Jenis Konversi \n";
	cout<<"1. Penjumlahan \n";
	cout<<"2. Pengurangan \n";
	cout<<"3. Perkalian \n";
	cout<<"4 Pembagian \n";
	cout<<"5. Modulo \n";
	
	cout<<"Masukan Jenis Konversi: "; cin>>konversi;
	cout<<"Masukan Bilangan Pertama: "; cin>>A;
	cout<<"Masukan Bilangan Kedua: "; cin>>B;
	
	switch(konversi){
		case 1 : hasil=A+B;
		cout<<"Hasil A+B= ";cin<<hasil;
		break;
		case 2 : hasil=A-B;cin<<hasil;
		cout<<"Hasil A-B= ";
		break;
		case 3 : hasil=A*B;cin<<hasil;
		cout<<"Hasil A*B= ";
		break;
		case 4 : hasil=A/B;cin<<hasil;
		cout<<"Hasil A/B= ";
		break;
		case 5 : hasil=A%B;cin<<hasil;
		cout<<"Hasil A%B= ";
		break;
		deafult :
			cout<<"Salah Masukan Operator ";
	}
	
	cout<<"-----------------------------"<<endl;
	cout<<"   "<<a<<operasi<<b<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
	return 0;	
		
	
}
