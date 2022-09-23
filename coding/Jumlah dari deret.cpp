/* Jumlah dari deret */
/* Praktikum minggu ke-3 no.5 */
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	int a, b, c, jmlh, i, n;
	
	cout<<"PROGRAM MENGHITUNG JUMLAH DERET BILANGAN"<<endl;
    cout<<" ------------------------------------------------"<<endl;
    cout<<" Masukkan bilangan awal\t: "; cin>>a;
    cout<<" Masukkan selisih\t: "; cin>>b;
    cout<<" Masukkan deret ke-n\t: "; cin>>n;
    cout<<"-------------------------------------------------"<<endl;
    cout<<" Deret ke-"<<n<<" : ";
    cout<<a<<",";
    
    jmlh=jmlh+a; 
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jmlh=jmlh+c;
    }
     
    cout<<"\n Jumlah deret ke-"<<n<<" = "<<jmlh; 
     
    getch();
}

