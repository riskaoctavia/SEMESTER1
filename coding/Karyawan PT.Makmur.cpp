/* Praktikum Minggu ke-2 no.2 */
#include <iostream>
#include <conio.h>
using namespace std;
int main(void)
{
	string nama;
 	char golongan;
 	int jam_kerja, upah_per_jam, total_upah;
 
	cout<<"Program Menghitung Gaji Karyawan PT MAKMUR\n";
	cout<<"==============================================\n";
	
	cout<<"Nama Karyawan : "; cin>>nama;
	cout<<"Total Jam Kerja Selama Seminggu : "; cin>>jam_kerja;
	cout<<"Golongan : "; cin>>golongan;
	
// tentukan jumlah upah per jam berdasarkan golongan
 switch (golongan) {
  case 'A':
    upah_per_jam = 5000;
    break;
  case 'B':
    upah_per_jam = 7000;
    break;
  case 'C':
    upah_per_jam = 8000;
    break;
  case 'D':
    upah_per_jam = 10000;
    break;
  }
 
  total_upah = jam_kerja * upah_per_jam;
 
  // cek apakah jam kerja lebih dari 48 jam
  if ( (jam_kerja - 48) > 0 ) {
     total_upah = total_upah + ((jam_kerja - 48)*4000);
  }
 
  // proses output
   cout << endl;
   cout << nama << " menerima upah Rp." << total_upah << " per minggu";
   cout << endl;
 
 
 return 0;

}
