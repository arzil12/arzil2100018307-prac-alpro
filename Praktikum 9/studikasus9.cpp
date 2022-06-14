#include <iostream>
using namespace std;

class matriks{
  public:
          int input();
          int dimensi1();
          int tukar(int a, int b);
          int tampil();
          int bubble_sort();
          int kembali();
          int output();
  private:
          int ar1[10][10], ar2[20], ar3[10][10];
          int d=0,k=0,i,j,n=20;
          int baris, kolom;        
};


int matriks::input(){
  cout<<"Masukkan baris: ";cin>>baris;
  cout<<"Masukkan kolom: ";cin>>kolom;
  for( i=0; i<baris; i++){
             for( j=0; j<kolom; j++){
                     cout<<"masukan data array ke-["<<i<<"],["<<j<<"] : ";
                     cin>>ar1[i][j];}}
  
}
int matriks::dimensi1(){
  for( i=0;i<4;i++){
             for( j=0;j<5;j++){
                     ar2[k]=ar1[i][j];
					 k++;
                     }
                     }
  cout<<endl;
  cout<<"Data Array ar2 Hasil Penggabungan  :"<<endl<<endl;
	for (k=0; k<n; k++){
    cout<<"ar2["<<k<<"]="<<ar2[k]<<endl;}
    cout<<endl;
}

int matriks::tukar(int a,int b){
    int t;
    t=ar2[b];
    ar2[b]=ar2[a];
    ar2[a]=t;
}

int matriks::tampil(){
	for (int i=0;i<n;i++){
	     cout<<"["<<ar2[i]<<"] ";
	}
	cout<<endl;
}
