#include<iostream>
#include<math.h>

using namespace std;
int pangkat(int x, int y){
	int pkt;
	pkt=pow(x,y);
	return pkt;
}
int main(){
	int x,y,i;
	cout<<"==Program untuk bilangan berpangkat=="<<endl;
	cout<<"Masukkan bilangan real x:";cin>>x;
	cout<<"Masukkan bilangan bulat y:";cin>>y;
	cout<<"Bilangan x pangkaty= "<<pangkat(x,y)<<endl;
	return 0;
}