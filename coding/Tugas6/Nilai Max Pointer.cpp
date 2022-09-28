/* Mencari Nilai Maksimal Pointer*/

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main(){
	int n,i,nilai,max;
	int *p_max;
	p_max=&max;
	
	cout<<"================================\n";
	cout<<"Nilai Max dari n (pointer)\n";
	cout<<"================================\n";
	
	cout<<"Banyak Nilai yang Ingin Diinput: \n";cin>>n;
	
	for(i=1; i<=n; i++){
		cout<<" Masukkan nilai ke-"<<i<<" : "; cin>>nilai;
		if(nilai>max){
			max=nilai;
		}
	}
	
	cout<<" Nilai Maksimum = "<<max<<" dengan alamat = "<<&max<<endl;
	
	getch();	
}
