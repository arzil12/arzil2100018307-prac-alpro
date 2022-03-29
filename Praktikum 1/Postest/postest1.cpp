#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
int main(){

	int x1,x2,y1,y2,px,py;
	float j;
	cout<<"Program menghitung jarak dua titik"<<endl;
	cout<<"Masukkan jarak x1: ";cin>>x1;
	cout<<"Masukkan jarak x2: ";cin>>x2;
	cout<<"Masukkan jarak y1: ";cin>>y1;
	cout<<"Masukkan jarak y2: ";cin>>y2;
	px=pow((x2-x1),2);
	py=pow((y2-y1),2);
	j=sqrt(px+py);
	cout<<"Jarak dua titik adalah: "<<j<<endl;
	return 0;
}