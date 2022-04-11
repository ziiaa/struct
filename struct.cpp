#include <iostream>
using namespace std;

struct datanilai
{
	float ipk;
};

struct mhs
{
	string nama;
	string nim;
	string prodi;
	string angkatan;
	struct datanilai nilai;
};

int main()
{
	int jml_mhs;
	cout << "\tJumlah Data Mahasiswa : ";
	cin  >> jml_mhs;
	
	mhs isi_mhs[jml_mhs];
	datanilai nilai;
	
	cout << "\n" << endl;
	cout << "\tData Masuk" << endl;
	for (int a =0; a < jml_mhs; a++)
	{
		cout << "\n" << endl;
		cout << "\tData Ke- " << a+1 << endl;
		cout << "\tNIM 		: ";
		cin  >> isi_mhs[a].nim;
		cout << "\tNama 	: ";
		cin  >> isi_mhs[a].nama;
		cout << "\tProdi 	: ";
		cin  >> isi_mhs[a].prodi;
		cout << "\tAngkatan : ";
		cin  >> isi_mhs[a].angkatan;
		cout << "IPK 		: ";
		cin  >> isi_mhs[a].nilai;
	}
	
	cout << "\t============================"<<endl;
	cout << "\n" << endl;
	cout << "\tOutput" << endl;
	
	for (int a =0; a < jml_mhs; a++)
	{
		cout << "\tData Ke- " << a+1 << endl;
		cout << "\tNIM 		: " << isi_mhs[a].nim;
		cout << "\tNama 	: " << isi_mhs[a].nama;
		cout << "\tProdi 	: " << isi_mhs[a].prodi;
		cout << "\tAngkatan : " << isi_mhs[a].angkatan;
		cout << "IPK 		: " << isi_mhs[a].ipk.nilai;
		cout << "\n" << endl;
	}
	
	cin.get();
	return 0;
}
