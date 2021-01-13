#include <iostream>
using namespace std;
void tinggi(int a, int b, int c);
int main (){
    int a, b,c;
    cout<<"Mencari bilagan terkecil dan terbesar dai 3 bilangan"<<endl;
    cout<<"Masukkan bilangan pertama : ";cin>>a;
    cout<<"Masukkan bilangan kedua   : ";cin>>b;
    cout<<"Masukkan bilangan ketiga  : ";cin>>c;
    tinggi(a,b,c);
    return 0;
}
void tinggi(int a, int b, int c){
    int max=a,min=a;
    if (b>a)
    {max=b;
        if (c>b)
        {max=c;}
    }
    else if(c>a){max=c;}
    
    if (b<a)
    {min=b;
        if (c<b)
        {min=c;}
    }
    else if(c<a){min=c;}
    cout<<"Bilangan terbesar adalah "<<max<<endl;
    cout<<"Bilangan terkecil adalah "<<min;
}