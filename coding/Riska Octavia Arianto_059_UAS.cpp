#include<conio.h>
#include<iostream>
#include<fstream>

using namespace std;
int main()
{
		ofstream simpan;
		char nama_matkul[30];
		int nilai, sks, i,j, tnk, total=0, p, kj, dosen, ip;
		
		simpan.open("ts_nim.txt");
		for (int i=1; i<16; i++){
			cout<<"Mata Kuliah ke-"<<i<<endl;
			cout<<"======================="<<endl;
			cout << "Masukkan nama matkul: ";cin >>nama_matkul[i][j];
        	cout << "Masukkan jumlah sks matkul: ";cin >>sks[i][j];
			cout << "Masukkan nilai matkul: ";cin >>nilai[i][j];
			cout<<endl;
			simpan<<"Nama Matkul"<<nama_matkul<<endl;
			simpan<<"Nilai"<<nilai<<endl;
			simpan<<"SKS"<<sks<<endl;
			
			tnk=nilai*sks;
			total=total*tn;
			
			
		if (nilai[i][j] == 'A') {
            nilai = 4 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'B') {
            nilai = 3 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'C') {
            nilai = 2 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='D') {
            nilai = 1 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='E') {
            nilai = 0 * sks[i][j];
          }
          else {
            cout << "Input salah!\n";
            return 0;
          }
		
		ulang:
		cout<<"Masukan Mata Kuliah Lain Bila Ada maks 15 (1/0)?: "; cin>>p;
		if (p==1){
			cout<<endl;
		}
		else if (p==0){
			goto next;
		}
		else{
			cout<<"Input yang anda masukkan salah"; goto ulang;
		}
	
	cout<<" Nama Dosen Penasihat : " ;cin>>dosen;
	cout<<" Nama Ketua Jurusan : ";cin>>kj;
		
		
		next:
		file<<"NIM  :"<<setw(3)<<mhs.nim[15]<<setw(2); file<<" Fakultas :"<<setw(3)<<mhs.fakultas[30]<<setw(2);
		file<<"NAMA :"<<setw(3)<<mhs.nama[15]<<setw(2); 
			simpan<<"			TRANSKRIP NILAI		"<<endl;
			simpan<<"==============================="<<endl;
			simpan<<" No |	Nama Matkul	|	SKS	|	Nilai	|	NK	|"<<endl;
			for(int i=1;i<<16;i++){
			simpan<<"| "<<i<<"| 	"<<nama_barang<<" |		"<<hrg<<"|		"<<jum<<"|		"<<tjum<<"|"<<endl;
			}
			simpan<<"==============================="<<endl;
			simpan<<"IP/GPA		|		"<<ip<<"|"<<endl;
			simpan<<"==============================="<<endl;
		
		simpan.close();
		getch();
		return 0;
		
		
}
