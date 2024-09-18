#include <iostream>
using namespace std;

int main() {
    float HB,HD,HSD;
    cout<<"Menghitung harga barang setelah diskon 10%" <<endl;
    cout<< "masukkan nilai barang =" ;
    cin>> HB  ;

    cout<<"diskon ="  <<endl;
    cin>> HD;

    HSD =HB -(HB*(HD/100));



    cout<<HSD;




}
