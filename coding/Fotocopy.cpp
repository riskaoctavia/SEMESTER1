/* UTS no.2 */
/* Grafity FotoCopy */

#include<iostream>
#include<conio.h>
using namespace std;
int main(void)
{
	char op;
	int status_pelanggan,jumlah,harga,bayar;
	
	cout<<"Apakah Pelanggan? (Pelanggan/tidak) : "; cin>>status_pelanggan;
	cout<<"Banyak Fotocopy : "; cin>>jumlah;
	
	//deklarasi
	cout<<"Jika pelanggan maka dapat harga Rp.75,-, Jika bukan maka mendapat harga yang berbeda\n";
	switch(op) {
        case 'Pelanggan':
            cout << "Mendapatkan harga : Rp.75,- "<<harga;
            break;

        case 'Tidak':
        	if(jumlah<=100){
			harga	= 150;
			cout<<"\nHarga per kertas = Rp."<<jumlah;
			}else if(jumlah>=100 && jumlah<=200){
			harga	=100;
			cout<<"\nHarga per kertas = Rp."<<jumlah;
			}else if(jumlah>=200){
			harga	=80;
			cout<<"\nHarga per kertas = Rp."<<jumlah;
			}
			cout << "Mendapatkan harga : Rp.75,- "<<harga;
            break;
            
    bayar=harga*jumlah;
   	cout << "\nBayar=" << bayar;
	getch();
	return 0;
	
	}
}
