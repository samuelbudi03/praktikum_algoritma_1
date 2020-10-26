#include <iostream>
using namespace std;
int main(){
int x;
x = 7 ; 
//melakukan pre-increment
cout << "Nilai x awal: " << x << endl;
cout << "Nilai ++x : " << ++x << endl;
cout << "Nilai x akhir : " << x << endl ;

x = 10 ;
//melakukan post-increment
cout << "Nilai x awal: " << x << endl;
cout << "Nilai x++ : " << x++ << endl;
cout << "Nilai x akhir : " << x << endl;
return 0;}
