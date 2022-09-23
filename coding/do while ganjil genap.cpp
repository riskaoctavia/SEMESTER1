/* Program while do ganjil genap */
#include<iostream>
using namespace std;
int main()
{
	int ganjil, genap;
	ganjil=1;
	genap=0;
	cout<<"Program while do ganjil genap"<<endl;
	cout<<"\n Ganjil : "<<endl;
	while(ganjil<35)
	{
		ganjil=ganjil+=2;
		cout<<" \n"<<ganjil;
	}
	
	cout<<"\n Genap : "<<endl;
	do
	{
		genap=genap+2;
		cout<<" \n"<<genap;
	}
	while(genap<34);
}
