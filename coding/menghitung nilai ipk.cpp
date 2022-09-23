/* Program Menghitung IPK */
#include<iostream> 
#include<conio.h> 
using namespace std;
int HitungIPK(char x, int y);
int main() {
	int jumlahMK,jumlahsks,ipk,nilai;
	float ip,nilai_mk;
	char nama[30];
	jumlahsks=0;
	nilai_mk=0;
	
	struct mahasiswa {
		float ipk 	;
	};
	struct matakuliah{
		char namaMK[30], nilai;
		int sks;
	};
	
	
	cout<<"==============================================\n"<<endl;
	cout<<"\tProgram Menghitung IPK Mahasiswa\n"<<endl;
	cout<<"==============================================\n"<<endl;
	cout<<"Nama : "; cin>>nama;
	cout<<"Berapa MATKUL yang ingin dihitung: ";cin>>jumlahMK;
	
	mahasiswa mhs;
	matakuliah matkul;
	
	for(int a = 0; a<jumlahMK; a++){
		cout<<a+1;
		cout<<"Masukkan Nama Mata Kuliah: ";cin>>matkul.namaMK;
		cout<<"Masukkan Jumlah SKS: ";cin>>matkul.sks;
		cout<<"Masukkan Nilai Mata Kuliah (A,B,C,D,E): ";cin>>matkul.nilai;
		cout<<endl;
		
		jumlahsks+=matkul.sks;
		ip= HitungIPK(matkul.nilai, matkul.sks);
		nilai_mk+=ip;
		nilai_mk=nilai*jumlahsks;
		ipk=nilai_mk/jumlahsks;
		
	}
	
	mhs.ipk = nilai_mk/jumlahsks;
	cout<<"=============================================="<<endl;
	cout<<"Jumlah SKS: "<<jumlahsks<<endl;
	cout<<"Jumlah SKS*Nilai: "<<nilai_mk<<endl;
	cout<<"IPK: "<<ipk<<endl<<endl;
	
	return 0;
	
}
	
int HitungIPK(char x, int y){ 
	
	int nilai;
	switch(x){
		case 'A':
			nilai=4*y;
			break;
		case 'B':
			nilai=3*y;
			break;
		case 'C':
			nilai=2*y;
			break;
		case 'D':
			nilai=1*y;
			break;
		case 'E':
			nilai=0*y;
			break;
		default:
			nilai=0;
			break;
	}
	
	return nilai;	
	
}
	
	
