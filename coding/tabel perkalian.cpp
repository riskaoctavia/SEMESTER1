/* Tabel Perkalian */
/* Praktikum minggu ke-3 no.6 */
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	cout<<"\t\t\tTabel Perkalian"<<endl;
	cout<<"==========================================================================="<<endl<<endl;
	
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			cout<<i*j<<"\t";
		}
		cout<<"\n"<<endl;
	}
	
	return 0;
}
