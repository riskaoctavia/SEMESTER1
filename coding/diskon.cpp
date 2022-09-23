/* Program Menghitung Diskon */
#include<iostream> 
#include<conio.h> 
using namespace std;
int totalpembayaran(int i, int j);
int diskon(int i,int j);
int jml_barang,harga,disc,total;
int main() {
	
  	cout<<"==========================\n";
  	cout<<"Masukan Jumlah Barang: ";cin>>jml_barang;
  	cout<<"Masukkan harga barang: ";cin>>harga;	
  	cout<<"==============================================\n"<<endl;
  	disc=diskon(jml_barang, harga);
  	cout<<"Mendapat Potongan: Rp. "<<disc<<endl;
  	total=totalpembayaran(jml_barang,harga);
  	cout<<"Total Pembayaran: Rp. "<<total<<endl;
}

int totalpembayaran(int i, int j)
{
	int totalbelanja(int i,int j);
	int diskon(int i,int j);
	
	return totalbelanja(i,j)-diskon(i,j);
}

int diskon(int i,int j)
{
	float d;
	int totalbelanja(int i,int j);
	if (totalbelanja(i,j)<=200000)
	{
		d=0;
	}
	else if (totalbelanja(i,j)>=200000 && totalbelanja(i,j)<=500000)
	{
		d=0.05;
	}
	else if (totalbelanja(i,j)>=500000)
	{
		d=0.1;
	}
	return totalbelanja(i,j)*d;
}

int totalbelanja(int i, int j)
{
	return i*j;
}
