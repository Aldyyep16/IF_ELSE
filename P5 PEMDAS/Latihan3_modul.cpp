
#include  <iostream>
#include <string>

using namespace std;

int main(){
string k;
cout<< "masukkan kalimat :";
getline(cin ,k);

for(int c = 0 ; c< k.length(); c++) {
 if (k[c] == 'a')
   {k[c] = 'i';}}


cout<< "Kalimat sesudah di ubah :" << k<< endl;


return 0;
    }


