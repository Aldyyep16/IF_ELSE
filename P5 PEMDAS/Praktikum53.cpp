#include <iostream>
#include <string>

int main(){
 std::string stringpisah = "Saya Mahasiswa Tekkom ,sedang belajar Daspro";
 std::size_t PosisiPemisah = stringpisah.find(",");

  std::string bagianpertama = stringpisah.substr(0, PosisiPemisah);
    std::string bagiankedua = stringpisah.substr(PosisiPemisah + 1);

std::cout <<"Bagian pertama: "<< bagianpertama << std::endl;
std::cout <<"Bagian kedua: "<< bagiankedua << std::endl;

return 0;
}

