#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;

};

int main() {
	Mahasiswa mhs, mhs2;
	mhs.nim = "20220140064";
	mhs.nama = "Muhmammad Dhafa";
	mhs.alamat = "Bantul";
	mhs.umur = 18;

	cout << "masukkan NIM : ";
	cin >> mhs2.nim;
	cout << "masukkan nama : ";
	cin >> mhs2.nama;
	cout << "masukkan alamat : ";
	cin >> mhs2.alamat;
	cout << "masukkan umur : ";
	cin >> mhs2.umur;

	cout << "NIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;
	cout << "\nUmur : " << mhs.umur;

	cout << "\n\nNIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : " << mhs.alamat;
	cout << "\nUmur : " << mhs.umur;

}