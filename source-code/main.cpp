#include <iostream>
using namespace std;

// ========================================
// TUGAS INFORMATIKA KELAS XII
// IMPLEMENTASI ALGORITMA DALAM C++
// ========================================

// Nama Lengkap :RIKI HIDAYAT
// Kelas        :XII.10
// Nomor Absen  :31
// Judul Program:Program Menghitung Ruas Persegi Panjang


int main() {
 //DEKLARASI
  float  panjang, lebar, luas;

  //INPUT
  cout << "masukan nilai panjang : "<<endl;
  cin >>panjang;
  cout << "masukan nilai lebar : "<<endl;
  cin >>lebar;

  //PROSES
  cout << "hitung luas persegi panjang : "<<endl;

  luas = panjang * lebar;

  //OUTPUT
  cout << "tampilkan hasil luas persegi panjang : "<<luas<<endl;

  return 0;
}

