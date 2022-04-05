#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int x,y,pangkat,i;
	cout<<"==Program untuk bilangan berpangkat=="<<endl;
	cout<<"Masukkan bilangan real x:";cin>>x;
	cout<<"Masukkan bilangan bulat y:";cin>>y;
	pangkat=pow(x,y);
	cout<<"Menampilkan hasil pangkat dua bilangan: "<<pangkat<<endl;
	return 0;
}