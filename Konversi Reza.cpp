#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

void db(int des)
{
	string simpan;
	if (des == 0)
	{
		cout << "0";
	}
	else if (des == 1)
	{
		cout << "1";
	}
	else
	{
		for (int i = 0; i != des; des /= 2)
		{
			int hasil = des % 2;
			string convert = to_string(hasil);
			simpan.append(convert);
		}
		int panjang = simpan.length();
		for (int i = panjang; i != 0; i--)
		{
			cout << simpan[i - 1];
		}
	}
}

void doo(int des)
{
	string simpan;
	if (des == 0)
	{
		cout << "0";
	}
	else if (des == 1)
	{
		cout << "1";
	}
	else
	{
		for (int i = 0; i != des; des /= 8)
		{
			int hasil = des % 8;
			string convert = to_string(hasil);
			simpan.append(convert);
		}
		int panjang = simpan.length();
		for (int i = panjang; i != 0; i--)
		{
			cout << simpan[i - 1];
		}
	}
}

void dh(int des)
{
	string simpan;
	const int desTetap = des;
	for (int i = 0; des != i; des /= 16)
	{
		int bil = des % 16;
		string convert;
		switch (bil)
		{
		case 10:
			convert = "A";
			break;
		case 11:
			convert = "B";
			break;
		case 12:
			convert = "C";
			break;
		case 13:
			convert = "D";
			break;
		case 14:
			convert = "E";
			break;
		case 15:
			convert = "F";
			break;
		default:
			convert = to_string(bil);
		}

		simpan.append(convert);
	}
	int length = simpan.length();
	if (desTetap == 0) {
		cout << "0";
	}
	for (int i = length; i != 0; i--)
	{
		cout << simpan[i - 1];
	}
}

int main()
{
	do
	{
		long long int des, pilihan, pilihan2;
		string simpan;
		system("CLS");
		cout << "Konversi Bilangan Desimal" << endl << endl;
		cout << "Reza Kurnia Setiawan" <<endl;
		system("pause");
		system("CLS");
		cout << "Pilihan Konversi" << endl << endl;
		cout << "1. Desimal ke Biner \n2. Desimal ke Oktal \n3. Desimal ke Heksadesimal  \n4. Keluar Program \n" << endl;
		cout << "Pilih: ";
		cin >> pilihan;
		if (pilihan == 1)
		{
			system("CLS");
			cout << "Anda Memilih Desimal ke Biner" << endl << endl;
			cout << "Masukkan Angka: ";
			cin >> des;
			db(des);
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else if (pilihan == 2)
		{
			system("CLS");
			cout << "Anda Memilih Desimal ke Oktal" << endl << endl;
			cout << "Masukkan Angka: ";
			cin >> des;
			doo(des);
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else if (pilihan == 3)
		{
			system("CLS");
			cout << "Anda Memilih Desimal ke Heksadesimal" << endl << endl;
			cout << "Masukkan Angka: ";
			cin >> des;
			dh(des);
			cout << endl << endl;
			system("pause");
			system("CLS");
			cout << "Keluar Program?" << endl;
			cout << "1. Ya \n2. Tidak" << endl << endl;
			cout << "Pilih: ";
			cin >> pilihan2;
			cout << endl;
			if (pilihan2 == 1)
			{
				break;
			}
			else if (pilihan2 == 2)
			{

			}
		}
		else
		{
			break;
		}
	} while (true);
}