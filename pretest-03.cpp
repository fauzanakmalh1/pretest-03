/*
Nama Program    : pretest-03
Nama            : Fauzan Akmal Hariz
NPM             : 140810180005
Tanggal buat    : 12 Maret 2019
Deskripsi       : Praktikum
*/

#include <iostream>

using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n)
{
    cout<<"Silahkan masukkan jumlah pegawai : ";
    cin>>n;
}

void inputMhs(larikMhs& mhs, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
        cout << "NPM        : "; cin >> mhs[i].npm;
        cout << "Nama       : "; cin >> mhs[i].nama;
        cout << "IPK        : "; cin >> mhs[i].ipk;
        cout << endl;
    }

}
void cetakMhs(larikMhs mhs, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "Data mahasiswa ke-" << i+1 << endl;
        cout << "NPM        : " <<mhs[i].npm;
        cout << "Nama       : " <<mhs[i].nama;
        cout << "IPK        : " <<mhs[i].ipk;
        cout << endl;
    }
}

void sortNPM(larikMhs& mhs, int n)
{
    int i;
    r_mhs temp;
    for(i=1; i<n; i++)
    {
        temp = mhs[i];
        while(i>0 && mhs[i-1].npm>temp.npm){
            mhs[i]= mhs[i-1];
            i = i-1;
        }
        mhs[i]= temp;
    }
}



int main()
{
    int n;
    larikMhs mhs;

    cout<<"================================" <<endl;
    cout<<"Selamat Datang di Data Mahasiswa" <<endl;
    cout<<"================================" <<endl;

    banyakData(n);
    inputMhs(mhs, n);
    cetakMhs(mhs, n);
    sortNPM(mhs, n);
}
