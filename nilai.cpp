#include <iostream>
#include <string.h>

using namespace std;

struct mhs
{
	string nama;
	string nim;
	float tugas1,tugas2,tugas3;
	float jum,rata2 ;
	int lulus;
};

char grades (int n)
{
	if ( n > 85 )
	{
		return 'A';
		
	}else if ( n > 75 && n <= 85)
	{
		return 'B';

	}else if ( n > 65 && n <= 75)
	{
		return 'C';

	}else if ( n > 45 && n <= 65)
	{
		return 'D';

	}else
	{
		return 'E';

	}
}

int main ()
{
	int jml;
	int data = 0;
	int lulus = 0;
	int total = 0;
	int rata2 = 0;
	cout << "Jumlah Data : ";
	cin  >> jml;
	mhs mahasiswa[jml];
	
	cout << "\t=================================" << endl;
	cout << "\t\t\tDATA MASUK " << endl;
	cout << "\t=================================" << endl;
	cout << "\n" << endl;
	
	for ( int a =0; a < jml; a++)
	{
		cout << "\tData Ke-" << a+1 << endl;
		cout << "\tNama Mahasiswa = ";
		cin  >> mahasiswa[a].nama;
		cout << "\tNIM Mahasiswa  = ";
		cin  >> mahasiswa[a].nim;
		cout << "\tNilai Tugas 1  = ";
		cin  >> mahasiswa[a].tugas1;
		cout << "\tNilai Tugas 2  = ";
		cin  >> mahasiswa[a].tugas2;
		cout << "\tNilai Tugas 3  = ";
		cin  >> mahasiswa[a].tugas3;
		cout << endl;
	}
	system("cls");
	cout << endl;
	cout << "\t=================================" << endl;
	cout << "\t\t\tOUTPUT                       " << endl;
	cout << "\t=================================" << endl;
	cout << "\n" << endl;
	for ( int a =0; a < jml; a++)
	{
		mahasiswa[a].jum = (mahasiswa[a].tugas1)+(mahasiswa[a].tugas2)+(mahasiswa[a].tugas3);
		mahasiswa[a].rata2 = mahasiswa[a].jum/3;

		cout << "\tData Ke-" << a+1 << endl;
		cout << "\tNama Mahasiswa = " << mahasiswa[a].nama  << endl;
		cout << "\tNIM Mahasiswa  = " << mahasiswa[a].nim   << endl;
		cout << "\tJumlah Nilai   = " << mahasiswa[a].jum   << endl;
		cout << "\tRata - Rata    = " << mahasiswa[a].rata2 << endl;
		cout << "\tGrade          = " << grades (mahasiswa[a].rata2) << endl;
		cout << endl;	
		total =	total + mahasiswa[a].rata2;
		if (mahasiswa[a].rata2>60)
		{
			lulus++;
		}

}
	cout << "\t=================================" << endl;
	cout << "\tJUMLAH DATA MAHASISWA      " << endl;
	cout << "\t=================================" << endl;
	cout << "\n" << endl;

	data = (data + jml);
	rata2 = total/jml;
	cout << "\tJumlah Keseluruhan Data Yang Di Input adalah \t" << data << endl;
	cout << "\tJumlah Keseluruhan Data Yang Lulus Adalah \t" << lulus<< endl;
	cout << "\tJumlah Keseluruhan Rata2 mahasiswa Adalah \t" << rata2<< endl;
	cout << endl;
	}


