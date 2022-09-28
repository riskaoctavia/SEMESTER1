//Menghitung sisi miring dan keliling segitiga siku-siku dengan sisi tegak mendatar//
/* Menghitung sisi miring dan keliling segitiga */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main (void)
{
	//Mencari sisi miring
	float alas, tinggi, miring, keliling;
		cout<<"alas= "; cin>>alas;
		cout<<"tinggi= "; cin>>tinggi;
		miring= sqrt(alas*alas+tinggi*tinggi);
		keliling= alas+tinggi+miring;
		cout<<"\nAkar "<<alas+tinggi<<" = "<<miring;
		cout<< "\nkeliling segitiga= " <<keliling;
		
		getch();
		return 0;
}
