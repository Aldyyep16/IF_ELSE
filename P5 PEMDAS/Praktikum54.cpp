#include <iostream>
#include <string>

int main(){

std::string stringmodifikasi = "Belajar,Daspro";
std::size_t posisikarakter = stringmodifikasi.find(",");

stringmodifikasi[posisikarakter] = '_';
std::cout <<"String setelah modifikasi : " << stringmodifikasi << std::endl;

return 0;



}
