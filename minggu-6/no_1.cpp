#include <iostream>
using namespace std;
void printarray(int array[][20], int baris, int kolom);
void perkalianmatriks(int array1[][20],int array2[][20], int baris, int kolom1, int kolom2);
int main(){
    int baris,kolom1,kolom2,nilai;
    int M1[20][20]={{0,0}};
    int M2[20][20]={{0,0}};
    cout<<"Masukkan"<<endl;
    cout<<"Jumlah Baris Matriks A dan B : ";cin>>baris;
    cout<<"Jumlah Kolom Matriks A       : ";cin>>kolom1;
    cout<<"Jumlah Kolom Matriks B       : ";cin>>kolom2;
    for (int i = 0; i < baris; i++)
    {
        for (int a = 0; a < kolom1; a++)
        {
            cout<<"["<<i<<"] ["<<a<<"] : ";cin>>nilai;
            M1[i][a]=nilai;
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int b = 0; b < kolom2; b++)
        {
            cout<<"["<<i<<"] ["<<b<<"] : ";cin>>nilai;
            M2[i][b]=nilai;
        }
    }
    cout<<"Matriks A adalah "<<endl;printarray(M1,baris,kolom1);
    cout<<"Matriks B adalah "<<endl;printarray(M2,baris,kolom2);
    if (baris==kolom1)
    {cout<<"Matriks A x B adalah "<<endl;perkalianmatriks(M1,M2,baris,kolom1,kolom2);}
    else{cout<<"Tidak dapat melakukan perkalian matriks.";}
    return 0;
}
void printarray(int array[][20], int baris, int kolom){
    for (int i = 0; i < baris; i++)
    {
        cout<<"| ";
        for (int a = 0; a < kolom; a++)
        {
            cout<<array[i][a]<<" | ";
        }
        cout << endl;
    }
}
void perkalianmatriks(int array1[][20],int array2[][20], int baris, int kolom1, int kolom2){
    int hasil[20][20]={{0,0}};
    for (int i = 0; i < baris; i++)
    {
        for (int a = 0; a < kolom2; a++)
        {
            hasil[i][a]=0;
            for (int b = 0; b < kolom1; b++)
            {
                hasil[i][a]+=array1[i][b]*array2[b][a];
            }
        }
    }
    printarray(hasil,baris,kolom2);
}
