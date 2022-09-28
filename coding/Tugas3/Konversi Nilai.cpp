/* Konversi Nilai */
#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	//input
	char nama [30];
	string nim;
	int nilai;
	
	cout<<"Program Konversi Nilai \n";
	
	//data siswa
	cout<<"Nama Siswa : "; cin>>nama;
	cout<<"NIM : "; cin>>nim;
	cout<<"Masukan Nilai Anda : "; cin>>nilai;
	
	//logika program
	if(nilai>=80 && nilai<=100){
	cout<<"Anda mendapat nilai A \n";
	}else if(nilai>=65 && nilai<=79){
	cout<<"Anda mendapat nilai B \n";
	}else if(nilai>=50 && nilai<=64){
	cout<<"Anda mendapat nilai C \n";
	}else if(nilai>=35 && nilai<=49){
	cout<<"Anda mendapat nilai D \n";
	}else if(nilai>=0 && nilai<=34){
	cout<<"Anda mendapat nilai E \n";
	}
	
	getch();
	return 0;
	
}
