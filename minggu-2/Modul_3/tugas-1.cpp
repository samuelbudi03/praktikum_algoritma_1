#include <iostream>
using namespace std;
#define phi 3.14

int main()
{
float lpkerucut,s;
float r;
cout << "Masukkan jari-jari lingkaran alas: "; cin >> r;
cout << "Masukkan tinggi sisi miring selimut: "; cin >> s;
lpkerucut=phi*(r*(r+s));
cout << "Luas Permukaan kerucut adalah " << lpkerucut;

return 0;
}
