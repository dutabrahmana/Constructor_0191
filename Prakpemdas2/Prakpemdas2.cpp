#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
	static int nim;

public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi function*/ }
	static int getNim() { return nim; /*Definisi Function*/ }


	Mahasiswa(string pnama) :nama(pnama) { setID(); }
};
int Mahasiswa::nim = 191;

void Mahasiswa::setID() {
	id = ++nim;
}

void Mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	Mahasiswa mhs1("Sri Dadi");
	Mahasiswa mhs2("Budi Jatmiko");
	Mahasiswa::setNim(9);
	Mahasiswa mhs3("Andi Kurniawan");
	Mahasiswa mhs4("Joko Purbo");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar objek = " << Mahasiswa::getNim() << endl;

	system("pause");

	return 0;
}












int main()
{
    
}
