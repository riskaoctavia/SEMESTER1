/* Buat progran menghitung jumlah 6 suku pertama dari barisan */
/* Praktikum minggu ke-3 no.4 */
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	int jmldr,i;
	cout<<"Program Menghitung Jumlah 6 Suku Pertama"<<endl;
	cout<<"--------------------------------------------"<<endl<<endl;
	
	cout<<"Jumlah Deret Yang Di Inginkan: ";
	cin>>jmldr;
	
	for(i=1; i<=jmldr;i++) {
		cout<<i*i*i <<" ";
	}
	cout<<endl;
	return 0;
}

