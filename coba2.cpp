#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;
struct tabel
{
char nama[20];
char nilai[7];
}
tbl[10];
int n,xnyamug,y,a,z,closemu=0;
char tamp[20],carigie[20];
void garis()
{
cout<<"-------------------------------------------------------\n";
}
void block()
{
cout<<"ßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßßß\n";
}
void inputmug()
{
// Tampilan Awal
garis();
cout<<"Mau Berapa Data : ";cin>>n;
cin.ignore();
garis();
cout<<endl;
for(xnyamug=1;xnyamug<=n;xnyamug++)
{
cout<<"Input Data ke-"<<xnyamug<<endl;
cout<<"Nama Mahasiswa\t\t: ";
gets(tbl[xnyamug].nama);
cout<<"Nilai Mahasiswa\t\t: ";
cin>>tbl[xnyamug].nilai;
cin.ignore();

garis();
cout<<endl;
}
}
void mugtampil()
{
system("cls");
// Tabel Data Setelah diinputkan
garis();block();
cout<<"Data Nilai Mahasiswa"<<endl;
garis();
cout<<"\tNo."<<"\tNama"<<"\t\tNilai"<<endl;
for(xnyamug=1;xnyamug<=n;xnyamug++)
{
cout<<"\t"<<xnyamug<<"\t"<<tbl[xnyamug].nama<<"\t\t"<<tbl[xnyamug].nilai<<endl;
}
cout<<endl<<endl;
}
void mugsorting()
{
garis();block();
 cout<<"Sorting Data Secara Descending Berdasarkan Nilai"<<endl;
 garis();
// Proses Selection Sort
 for(xnyamug=0;xnyamug<=n-1;xnyamug++)
 {
  for(y=xnyamug+1;y<=n;y++)
  {
   a=strcmp(tbl[xnyamug].nilai,tbl[y].nilai);
   if(a<0)
   {
   strcpy(tamp,tbl[xnyamug].nilai);
   strcpy(tbl[xnyamug].nilai,tbl[y].nilai);
   strcpy(tbl[y].nilai,tamp);
   strcpy(tamp,tbl[xnyamug].nama);
   strcpy(tbl[xnyamug].nama,tbl[y].nama);
   strcpy(tbl[y].nama,tamp);
   }
  }
 }
// Tabel Sorting Descending Berdasarkan Nilai
cout<<"\tNo."<<"\tNilai"<<"\t\tNama"<<endl;
for(y=0;y<=n-1;y++)
{
cout<<"\t"<<y+1<<"\t"<<tbl[y].nilai<<"\t\t"<<tbl[y].nama<<endl;
}
}
void mugcari()
{
reset:
cout<<endl;
// Searching Data
garis();block();
cout<<"Terdapat 1 dari "<<n<<" Data Nilai Mahasiswa"<<endl;
cout<<"Cari Nilai Berdasarkan Nama = ";cin>>carigie;
garis();
for(xnyamug=0;xnyamug<=n;xnyamug++)
 {
 if(strcmp(tbl[xnyamug].nama,carigie)==0)
 {
 cout<<"Nilai "<<carigie<<" Adalah\t : "<<tbl[xnyamug].nilai<<endl;
 cout<<"Terdapat di Peringkat \t : Ke-"<<xnyamug+1<<endl;
 closemu=1;
 }
 }
 if (closemu==0)
 {cout<<"Maaf, Data Nama "<<carigie<<" Tidak ditemukan, Coba Kembali :)";
 goto reset;}
}
int main()
{
system("cls");
inputmug();
mugtampil();
mugsorting();
mugcari();
getch();
}

