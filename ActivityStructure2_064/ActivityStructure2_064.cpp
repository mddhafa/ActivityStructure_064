#include <iostream>
using namespace std;

struct DetailAlamat {
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[14];
	char nama[20];
	int umur;
	DetailAlamat alamat;
	

}; 
int main() {
	Mahasiswa mhs;

	cout << "masukkan NIM : ";
	cin >> mhs.nim;
	cin.ignore(1, '\n');
	cout << "masukkan nama : ";
	cin.getline(mhs.nama, 20);
	cout << "alamat : ";
	cout << "\n\tMasukkan Desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\n\tMasukkan Kota : ";
	cin.getline(mhs.alamat.kota, 20);
	cout << "masukkan umur : ";
	cin >> (mhs.umur);

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : ";
	cout << "\n\tDesa : " << mhs.alamat.desa;
	cout << "\n\tKota : " << mhs.alamat.kota;
	cout << "\nUmur : " << mhs.umur;
}

