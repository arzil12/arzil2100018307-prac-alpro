#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
    int x1,x2,y1,y2;
    int p,l,s,a,b;
    float j;
    cout<<"Masukkan jarak x1: ";
    cin>>x1;
    cout<<"Masukkan jarak x2: ";
    cin>>x2;
    cout<<"Masukkan jarak y1: ";
    cin>>y1;
    cout<<"Masukkan jarak y2: ";
    cin>>y2;
    a=x2-x1;
    b=y2-y1;
    p=pow(a,2);
    l=pow(b,2);
    s=p+l;
    j=sqrt(s);
    cout<<"Jauhnya jarak: "<<j<<endl;
}