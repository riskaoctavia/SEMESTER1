/* Nilai Matkul Pointer */

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int main(){
	int nilai_matkul;
	char matkul[30], grade[30]="keterangan nilai";
	string grd;
	char *p_matkul, *p_grade;
	p_matkul=matkul;
	p_grade=grade;
	
	cout<<"================================\n";
	cout<<"Menghitung Nilai Matkul \n";
	cout<<"================================\n";
	
	cout<<"Masukkan Mata Kuliah: "; cin>>p_matkul;
	cout<<"Masukkan Nilai Mata Kuliah: "; cin>>nilai_matkul;
	
	if(nilai_matkul>=90 && nilai_matkul<=100){
			grd="A";
	} else if (nilai_matkul>=80 && nilai_matkul<90){
			grd="B";
		} else if (nilai_matkul>=70 && nilai_matkul<80){
			grd="C";
		} else if (nilai_matkul>=60 && nilai_matkul<70){
			grd="D";
		} else if (nilai_matkul>=50 && nilai_matkul<60){
			grd="E";
		}else if (nilai_matkul<50){
			grd="ANDA TIDAK LULUS!";
		}else{
			grd=" NILAI YANG DI INPUT SALAH!!";
		}
	
	cout<<"_______________________________________\n";
	cout<<" nilai "<<matkul<<" = "<<nilai_matkul<<", "<<p_grade<<" = "<<grd<<endl;
	
	getch();
}
