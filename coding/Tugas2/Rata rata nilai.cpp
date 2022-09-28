/* Menghitung Nilai Rata-rata Mata Kuliah */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(void)
{
	//rata-rata nilai
	char nama [30];
	
	cout<<"Nilai Rata-rata Mata Kuliah \n";
	
	float nilai_praktikum, nilai_teori, nilai_tugas_dan_final_project;
	cout<<"Program Menghitung Rata-rata"<<endl;
	cout<<"Nama siswa : "; cin>>nama;
	cout<<"Masukkan Nilai Praktikum : "; cin>>nilai_praktikum;
	cout<<"Masukkan Nilai Teori : "; cin>>nilai_teori;
	cout<<"Masukkan Nilai Tugas dan Final Projet : "; cin>>nilai_tugas_dan_final_project;
	
	cout <<" Rata_rata : " <<((nilai_praktikum*0.4)+(nilai_teori*0.4)+(nilai_tugas_dan_final_project*0.2))/3<<endl;

	getch();
	return 0;
	

}
