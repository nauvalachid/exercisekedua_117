#include<iostream>
#include<string>
using namespace std;

class penerbit {
private:
	static int kode;
public:
	int daftar ;
	string nama;

	void setdaftar();
	void printAll();

	static void setkode(int pkode) {
		kode = pkode;
	}
	static int getkode() {
		return kode;
	}

	penerbit(string pnama) :nama(pnama) {
		setdaftar();
	}
};

int penerbit::kode = 0;

void penerbit::setdaftar() {
	kode = ++daftar;
}

void penerbit::printAll() {
	cout << "daftar pengarang penerbit 'game press': " << endl;
	cout << "Joko" << endl;
	cout << "Lia" << endl;
	cout << "Giga" << endl;
	cout << "daftar pengarang penerbit 'intan pariwara':" << endl;
	cout << "Asroni" << endl;
	cout << "Giga" << endl;
	cout << "daftar penerbit yang diikuti 'Giga':" << endl;
	cout << "Gama Press" << endl;
	cout << "Intan Pariwara" << endl;
	cout << "daftar buku yang dikarang 'Joko':" << endl;
	cout << "Fisika" << endl;
	cout << "Algoritma" << endl;
	cout << "daftar buku yang dikarang 'Lia':" << endl;
	cout << "Basisdata" << endl;
	cout << "daftar buku yang dikarang 'Asroni':" << endl;
	cout << "Dasar pemograman" << endl;
	cout << "daftar buku yang dikarang 'Giga':" << endl;
	cout << "Matematika" << endl;
	cout << "Multimedia 1" << endl;
	cout << endl;
}

int main() {
	
	penerbit pnbt1("Joko Lia Giga");

	pnbt1.printAll();
	
	return 0;
}