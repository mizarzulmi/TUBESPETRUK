#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;

struct tabel{
	char nama[20];
	char nilai[7];
}

tbl[10];
int n,x,y,a,z,closemu=0;
char tmp[20],searchnama[20];

void garis(){
	cout<<"-------------------------------------------------------\n";
}

void block(){
	cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
}

void inputmug(){
// Tampilan Awal
	garis();
	cout<<"Mau Berapa Data : ";cin>>n;
	cin.ignore();
	garis();
	cout<<endl;
	for(x=1;x<=n;x++){
		cout<<"Input Data ke-"<<x<<endl;
		cout<<"Nama Mahasiswa\t\t: ";
		gets(tbl[x].nama);
		cout<<"Nilai Mahasiswa\t\t: ";
		cin>>tbl[x].nilai;
		cin.ignore();

		garis();
		cout<<endl;
		}
}

void mugtampil(){
	system("cls");
	// Tabel Data Setelah diinputkan
	garis();
	block();
	cout<<"Data Nilai Mahasiswa Matakuliah "<<matkul[b]<<endl;
	garis();
	cout<<"\tNo."<<"\tNama"<<"\t\tNilai"<<endl;
	for(x=1;x<=n;x++){
		cout<<"\t"<<x<<"\t"<<tbl[x].nama<<"\t\t"<<tbl[x].nilai<<endl;
	}
	cout<<endl<<endl;
}

void mugsorting(){
	garis();block();
	cout<<"Sorting Data Secara Descending Berdasarkan Nilai"<<endl;
	garis();
	// Proses Selection Sort
	for(x=0;x<=n-1;x++){
		for(y=x+1;y<=n;y++){
			a=strcmp(tbl[x].nilai,tbl[y].nilai);
			if(a<0){
				strcpy(tmp,tbl[x].nilai);
				strcpy(tbl[x].nilai,tbl[y].nilai);
				strcpy(tbl[y].nilai,tmp);
				strcpy(tmp,tbl[x].nama);
				strcpy(tbl[x].nama,tbl[y].nama);
				strcpy(tbl[y].nama,tmp);
			}
		}
	}
	
	// Tabel Sorting Descending Berdasarkan Nilai
	cout<<"\tNo."<<"\tNilai"<<"\t\tNama"<<endl;
	for(y=0;y<=n-1;y++){
		cout<<"\t"<<y+1<<"\t"<<tbl[y].nilai<<"\t\t"<<tbl[y].nama<<endl;
	}
}

void mugcari(){
	reset:
	cout<<endl;
	// Searching Data
	garis();
	block();
	cout<<"Terdapat 1 dari "<<n<<" Data Nilai Mahasiswa"<<endl;
	cout<<"Cari Nilai Berdasarkan Nama = ";cin>>searchnama;
	garis();
	for(x=0;x<=n;x++){
		if(strcmp(tbl[x].nama,searchnama)==0){
			cout<<"Nilai "<<searchnama<<" Adalah\t : "<<tbl[x].nilai<<endl;
			cout<<"Terdapat di Peringkat \t : Ke-"<<x+1<<endl;
			closemu=1;
		}
	}
	if (closemu==0)
		{cout<<"Maaf, Data Nama "<<searchnama<" Tidak ditemukan, Coba Kembali :)";
		goto reset;
	}
}

int main(){
	cout<<"-----------------------------------------------------------------------------------------"<<endl;
	cout<<"|                                                                                        |"<<endl;
	cout<<"|				Program Input Nilai & Mengurutkan Nilai Mahasiswa						|"<<endl;
	cout<<"|                                                                                        |"<<endl;
	cout<<"------------------------------------------------------------------------------------------"<<endl;
	cout<<"|                        Mizar Zulmi Ramadhan     1717051073                             |"<<endl;
	cout<<"|                        Yosua Sandi Susanto      1717051064                             |"<<endl;
	cout<<"|                        Diana Rohma              1717051060                             |"<<endl;
	cout<<"|                        Rizka Widyani AP         1717051052                             |"<<endl;
	cout<<"------------------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	getch();
	system("cls");
	inputmug();
	mugtampil();
	mugsorting();
	mugcari();
	getch();
}
