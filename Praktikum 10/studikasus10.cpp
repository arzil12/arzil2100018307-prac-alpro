#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
using namespace std;

class pointer{
      public:
      	void pilih();
        void input();
        void tambah_depan();
        void tambah_belakang();
        void output();

      private:
        int pil;
        struct simpul{
          char nim[10], nama[80];
          struct simpul *next;
        }
        mhs, *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;
  
    };
void clrscr(){
 system("cls");
}
