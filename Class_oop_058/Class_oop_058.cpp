#include <iostream>
using namespace std;

class Mahasiswa {
private:
	string nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukkan NIM : ";
		cin >> nim;
		cout << "\nMasukkan Nama : ";
		cin >> nama;
		cout << "\nMasukkan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa::printData() {
	cout << "\nData Mahasiwa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK() {
		cout << "\nMasukkan kode matakuliah : ";
		cin >> kode;
		cout << "\nMasukkan Nama matakuliah : ";
		cin >> namaMK;
		cout << "\nMasukkan SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode matakuliah : " << kode;
		cout << "\nNama matakuliah : " << namaMK;
		cout << "\nSKS : " << sks;
	}
};

int main()
{
	Mahasiswa mhs;
	matakuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}
