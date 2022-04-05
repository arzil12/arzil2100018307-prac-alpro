/* Program tahun kabisat flowchart 2*/
#include <iostream>
#include <conio.h>
 
using namespace std;
class tahun{
    public:
        void kabisat();
    private:
        int tahun;
};
 
void tahun::kabisat(){
    cout<<"Inputkan Tahun : ";
    cin>>tahun;
 
    if (tahun%4==0){cout<<"\n\nTahun "<<tahun<<" adalah tahun kabisat";}
   
    else{cout<<"\n\nTahun "<<tahun<<" adalah bukan tahun kabisat";}
 
}
int main()
{   tahun apa;
    apa.kabisat();
 
   getch();
}