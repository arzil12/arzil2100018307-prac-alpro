/* Program tahun kabisat flowchart 1*/
#include <iostream>
#include <conio.h>
 
using namespace std;
int main(){
	int tahun;
	cout<<"=====Program membuat tahun kabisat===="<<endl;
	cout<<"======================================"<<endl;
	cout<<"Masukkan tahun: ";cin>>tahun;
	if(tahun%4==0){
		cout<<"Merupakan tahun kabisat"<<endl;
	}else{
		cout<<"Bukan tahun kabisat"<<endl;
	}
	return 0;
}