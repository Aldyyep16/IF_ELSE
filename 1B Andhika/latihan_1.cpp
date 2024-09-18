
#include <iostream>
using namespace std;

int main() {
    float buku;
    string diskon;
    cout<<"Masukkan kode buku : "; cin>>buku;

    if(buku == 1){
            cout<<"Judul Buku = Kalkulus"<<endl;
            cout<<"Masukkan Kode Diskon"; cin>>diskon;
            if (diskon == "D"){
                    cout<<("Harga nya : 45.000,00");
            }else
            {cout<<("Harga nya : 50.000,00");}

            }else if(buku == 2){
            cout<<"Judul Buku = Pengantar Teknik Komputer"<<endl;
            cout<<"Masukkan Kode Diskon :"; cin>>diskon;
            if (diskon == "D"){
                    cout<<("Harga nya : 65.000,00");
            }else
            {cout<<("Harga nya : 70.000,00");}


            }else

             return 0;

    }


