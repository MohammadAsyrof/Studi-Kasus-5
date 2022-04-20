#include <iostream>
#include <fstream>
#include "../library/input.h"
int main() {
  string nama, nim;
  int sks, diskon1, diskon2, bayar, jumlah, total;
  
  cout<<"============PEMBAYARAN SKS============="<<endl;
  cout<<"--------------------------------------"<<endl;
  cout <<"Masukkan Nama Mahasiswa : ";
  cin >>nama;
  cout <<"Masukkan NIM Mahasiswa  : ";
  cin >>nim;
  cout<<"Jumlah sks yang diambil : ";
  cin>>sks;
  cout<<"-------------------------------------"<<endl;
  cout<<"Jumlah Mata Kuliah = 5"<<endl;
  mahasiswa asyrof; 
  asyrof.mhs(5);
    cout<<endl;
    cout<<"============PEMBAYARAN SKS============="<<endl;
    cout<<"---------------------------------------------"<<endl;
    bayar= sks*120000;
    cout<<"Nama Mahasiswa : "<<nama<<endl;
    cout<<"NIM Mahasiswa  : "<<nim<<endl;
    cout<<"Jumlah sks yang diambil : "<<sks<<endl;
    cout<<"Jumlah total pembayar : "<<bayar<<endl;
    diskon1 = bayar * 0.10;
    bayar = bayar-diskon1;
    diskon2 = bayar * 0.05;
    total = bayar - diskon2;
    cout<<"Total pembayaran keseluruhan (setelah tambah diskon 10% + 5%) = "<<total<<endl;
 return 0;
  }