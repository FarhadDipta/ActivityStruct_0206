#include <iostream>
using namespace std;

struct Mahasiswa{
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main(){
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : " << endl;
    cin >> mhs.alamat;

    cout << endl;
    cout << "\nNim : " << mhs.nim;
    cout << "\nNama : " << mhs.nama;
    cout << "\nAlamat : " << mhs.alamat;
    cout << "\nUmur : " << mhs.umur;
}