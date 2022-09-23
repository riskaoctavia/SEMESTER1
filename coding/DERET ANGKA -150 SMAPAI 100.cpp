/* Program Mencetak Angka Urut (Penurunan) */ 
#include<iostream> 
#include<conio.h> 
using namespace std;
main() { 
int i;
char x; 
for (i=100;i>=-150;i=i-=5) 
cout << "DERET ANGKA= "<< i<<endl; 
 cout<<"\nLagi ? [Y/T] : "; cin>>x;
    cout<<endl;
    while (x == 'y' || x == 'Y'){ 
    cout<<"exit! "<<endl;
    cout<<" "<<endl;
    x++;
	}
getch(); 
}
