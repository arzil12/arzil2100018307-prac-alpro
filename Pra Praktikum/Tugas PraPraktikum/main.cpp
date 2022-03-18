#include<iostream>
#include<math.h>
using namespace std;
int penambahan(int a,int b){
	int penambahan=a+b;
	return penambahan;
}
int pengurangan(int c,int d){
	int pengurangan=c-d;
	return pengurangan;
}
int pembagian(int c,int d){
	int pembagian=c/d;
	return pembagian;
}
int perkalian(int c,int d){
	int perkalian=c*d;
	return perkalian;
}
int main(){
	int menu,p,q;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi:"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Pembagian"<<endl;
	cout<<"4. perkalian"<<endl;
	cout<<"Pilih Menu no: ";cin>>menu;
	switch(menu){
	
	case 1:cout<<"Bilangan pertama: ";cin>>p;
		cout<<"Bilangan Kedua: ";cin>>q;
		cout<<"Hasil= "<<penambahan(p,q)<<endl;
		break;
	case 2:cout<<"Bilangan pertama: ";cin>>p;
		cout<<"Bilangan Kedua: ";cin>>q;
		cout<<"Hasil= "<<pengurangan(p,q)<<endl;
		break;	
	case 3:cout<<"Bilangan pertama: ";cin>>p;
		cout<<"Bilangan Kedua: ";cin>>q;
		cout<<"Hasil= "<<pembagian(p,q)<<endl;
		break;
	case 4:cout<<"Bilangan pertama: ";cin>>p;
		cout<<"Bilangan Kedua: ";cin>>q;
		cout<<"Hasil= "<<perkalian(p,q)<<endl;
		break;		
	}

}
