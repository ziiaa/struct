#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct mahasiswa
{
	string nama;
	string prodi;
	string angkatan;
	string nim;
	
};

struct nilai
{
	mahasiswa pemeran_1;
	mahasiswa pemeran_2;
};


int main()
{
	mahasiswa mahasiswa1, mahasiswa2;
	nilai ipk;
	
	mahasiswa1.nama     = "\tNur Azzizah";
	mahasiswa1.nim      = "\t21.11.4382";
	mahasiswa1.angkatan = "\t2";
	mahasiswa1.prodi	= "\tInformatika";
	
	mahasiswa2.nama     = "\tZia";
	mahasiswa2.nim      = "\t21.11.4383";
	mahasiswa2.angkatan = "\t2";
	mahasiswa2.prodi	= "\tInformatika";
	
	ipk.pemeran_1 = mahasiswa1;
	ipk.pemeran_2 = mahasiswa2;
	
	cout << mahasiswa1.nama 	<< endl;
	cout << mahasiswa1.nim  	<< endl;     
	cout << mahasiswa1.angkatan << endl; 
	cout << mahasiswa1.prodi	<< endl;
	cout << "\n" << endl;
	cout << mahasiswa2.nama		<< endl;     
	cout << mahasiswa2.nim		<< endl;     
	cout << mahasiswa2.angkatan	<< endl;
	cout << mahasiswa2.prodi	<< endl;
		
	cin.get();
	return 0;
}
