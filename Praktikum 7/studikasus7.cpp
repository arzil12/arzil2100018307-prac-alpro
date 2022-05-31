#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class sorting{
    public:
    void input();
    void proses();
    void output();
    private:
    typedef struct{

    int kode;
    char nama[20];
    int stock;

    }
    brg;
    brg barang[5];
    brg temp;
    int n,i,b, cari, ada;
};
void sorting::input(){

cout<<"Masukan banyak data = ";
cin>>n;
for(i=0;i<n;i++){

cout<<endl;
cout<<"Data ke-"<<(i+1)<<":"<<endl;
cout<<"Input Kode Barang : ";
cin>>barang[i].kode;
cout<<"Input Nama Barang: ";
cin>>(barang[i].nama);
cout<<"Input Stock Barang : ";
cin>>barang[i].stock;
