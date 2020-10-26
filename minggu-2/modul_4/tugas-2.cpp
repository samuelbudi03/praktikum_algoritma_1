#include <iostream>
using namespace std;
int main()
{ 
 float celsius, hasil;
 cout << "Masukkan Suhu dalam Celsius: ";
 cin >> celsius;
 hasil = (9.00/5*celsius)+32;
 cout << "Hasil konversi adalah " << hasil <<" Derajat Fahrenheit\n";
 hasil = 4.00/5*celsius;
 cout << "Hasil konversi adalah " << hasil <<" Derajat Reamur\n";
 hasil = celsius + 273;
 cout << "Hasil konversi adalah " << hasil <<" Derajat Kelvin";
 cin.get();
 cin.get();
 return 0;
}