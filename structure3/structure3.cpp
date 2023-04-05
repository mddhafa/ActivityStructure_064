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
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "masukkan NIM : ";
		cin >> mhs[i].nim;
		cin.ignore(1, '\n');
		cout << "masukkan nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "alamat : ";
		cout << "\n\tMasukkan Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\n\tMasukkan Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "masukkan umur : ";
		cin >> (mhs[i].umur);
	}
	for (int i = 0; i < 3; i++){

		cout << "\n\nNIM : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nAlamat : ";
		cout << "\n\tDesa : " << mhs[i].alamat.desa;
		cout << "\n\tKota : " << mhs[i].alamat.kota;
		cout << "\nUmur : " << mhs[i].umur;
	}
}
