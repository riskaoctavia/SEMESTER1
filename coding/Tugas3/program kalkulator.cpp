/* program kalkulator menggunakan untuk operasi-operasi */
/* tambah, kurang, kali, bagi, modulo */
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A, B, konversi;
	float hasil;
	string operasi;
	
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
			operasi='+';
			break;
		case 2 : hasil=A-B;
			operasi='-';
			break;
		case 3 : hasil=A*B;
			operasi='*';
			break;
		case 4 : hasil=A/B;
			operasi='/';
			break;
		case 5 : hasil=A%B;
			 operasi='%';
			break;
		default :
			cout<<"Salah Masukan Operator"<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"    "<<A<<operasi<<B<<"="<<hasil<<endl;
	cout<<"-----------------------------"<<endl;
	
	getch();
	return 0;
}
