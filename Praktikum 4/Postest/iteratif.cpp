// dengan iteratif
#include <iostream>
#include <string>
 
using namespace std;
class cetak{
      public:
             cetak();
             void proses();
      private:
              int a;
      };

cetak::cetak(){};
void cetak::proses(){
     a =1;
     while (!(a>100)){
     if (a % 5==0 && a % 7==0){
     cout << a << endl;      
     }else{}
     a =a+1;
     }
     }
      
int main(){
     
    cetak flow;
    flow.proses();
 
    system("pause");
    return 0;
}