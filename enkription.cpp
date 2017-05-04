/*
	Nama Berkas	: enkription.cpp
	Algoritma	: Substitution Encrypt With ASCII Table
	Pembuatan	: Jum'at 22/Apr/2017, 15.37.26 WIB - Minggu 24/Apr/2017, 23.02.57 WIB
	Language		: C++
	Penulis		: adikj
	License		: CC BY-SA 3.0
*/

#include <iostream>
#include "colors.h"
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int header() //fungsi header pada menu utama
{

	cout << BOLD(FRED("  \n\n\n\t                         PROJECT UAS                        "));
	cout << BOLD(UNDL(FRED("\n\t                  SISTEM PENGAMAN KOMPUTER                  ")));	
	cout << ITLC(BOLD(FBLU("    \n\t               APLIKASI ENCRYPTION SEDERHANA               \n\n\t")));
}

int header_encryption() //fungsi header pada menu encryption
{
	cout << BOLD(FRED("  \n\n\n\t                         PROJECT UAS                        "));
	cout << BOLD(UNDL(FRED("\n\t                  SISTEM PENGAMAN KOMPUTER                  ")));	
	cout << ITLC(BOLD(FBLU("    \n\t               Welcome in the Encryption Mode               \n\n\t")));
}

int header_decryption() // fungsi header pada menu decryption
{
	cout << BOLD(FRED("  \n\n\n\t                         PROJECT UAS                        "));
	cout << BOLD(UNDL(FRED("\n\t                  SISTEM PENGAMAN KOMPUTER                  ")));	
	cout << ITLC(BOLD(FBLU("    \n\t               Welcome in the Decryption Mode               \n\n\t")));
}

int Encryption_mode() //fungsi encryption
{
	header_encryption();
	char plain[1000];		//variabel untuk menampung plaintext
	char key[50];			//variabel untuk menampung kunci
	int ASCII_table;		//variabel untuk menampung kode ascii
	int jumlahK;			//variabel untuk menampung jumlah huruf dari kunci
	
	cin.getline(plain, sizeof (plain));
	cout << FYEL("\n\tWhat's your Plaintext	: "); cin.getline(plain, sizeof (plain));		//input plaintext yang akan di enkripsi 
	cout << FYEL("\tWhat's your Key		: "); cin.getline(key, sizeof (key));					//input kuncinya
	
	jumlahK = 0;
	for (int x = 0; key[x]; x++)		//perulangan untuk menghitung jumlah huruf pada kunci
	{
		jumlahK = jumlahK + 1;			//ketika sudah selesai, maka hasil ditampung di variabel jumlahK
	}
	
	cout << "\n\t";
	cout << BOLD(UNDL(FRED("                                                             ")));
	cout << FYEL("\n\tThis Your Encryption	: ");
	
	for(int i = 0; plain[i]; i++)
	{
		ASCII_table = int (plain[i]);
		
		if ((ASCII_table >= 32) && (ASCII_table <= 47))					//percabangan untuk table ascii symbol
		{
			ASCII_table = 47 - (ASCII_table + jumlahK) % 16;
//			cout << char(ASCII_table);			
		}
		
		else if ((ASCII_table >= 48) && (ASCII_table <= 57))			//percabangan untuk table ascii angka
		{
			ASCII_table = 57 - (ASCII_table + jumlahK) % 10;
//			cout << char(ASCII_table);			
		}

		else if ((ASCII_table >= 97) && (ASCII_table <= 122))			//percabangan untuk table ascii hurufkecil
		{
			ASCII_table = 122 - (ASCII_table - 97 + jumlahK) % 26;
//				cout << char(ASCII_table);
		}
		
		else if((ASCII_table >= 65) && (ASCII_table <= 90))			//percabangan untuk table ascii hurufbesar
		{
			ASCII_table = 90 - (ASCII_table - 65 + jumlahK) % 26;
//				cout << char(ASCII_table);
		}
	
		else
			cout << char(ASCII_table);
			
		cout << char(ASCII_table);		
	}
	cout << "\n\n";
}

int Decryption_mode()
{
	header_decryption();
	char chiper[1000];
	char key[50];
	int ASCII_table;
	int jumlahK;
	
	cin.getline(chiper, sizeof (chiper));
	cout << FYEL("\n\tWhat's your Chiepertext	: "); cin.getline(chiper, sizeof (chiper));
	cout << FYEL("\tWhat's your Key		: "); cin.getline(key, sizeof (key));
	
	jumlahK = 0;
	for (int x = 0; key[x]; x++)
	{
		jumlahK = jumlahK + 1;
	}
	
	cout << "\n\t";
	cout << BOLD(UNDL(FRED("                                                             ")));
	cout << FYEL("\n\tThis Your Decryption	: ");
	for(int i = 0; chiper[i]; i++)
	{
		ASCII_table = int (chiper[i]);
		
		if ((ASCII_table >= 32) && (ASCII_table <= 47))					//percabangan untuk table ascii symbol
		{
			ASCII_table = 47 - (ASCII_table + jumlahK) % 16;
//			cout << char(ASCII_table);			
		}
		
		else if ((ASCII_table >= 48) && (ASCII_table <= 57))			//percabangan untuk table ascii angka
		{
			ASCII_table = 57 - (ASCII_table + jumlahK) % 10;
//			cout << char(ASCII_table);			
		}

		else if ((ASCII_table >= 97) && (ASCII_table <= 122))			//percabangan untuk table ascii hurufkecil
		{
			ASCII_table = 122 - (ASCII_table - 97 + jumlahK) % 26;
//				cout << char(ASCII_table);
		}
		
		else if((ASCII_table >= 65) && (ASCII_table <= 90))			//percabangan untuk table ascii hurufbesar
		{
			ASCII_table = 90 - (ASCII_table - 65 + jumlahK) % 26;
//				cout << char(ASCII_table);
		}
	
		else
			cout << char(ASCII_table);
			
		cout << char(ASCII_table);		
	}
	cout << "\n\n";
}

//------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	home :
	system("clear");
	int pil;
	header();

	cout << FYEL("1. Encryption Mode\n\t2. Decryption Mode\n\t3. Exit\n\n\tWhat you choose mode	: "); cin >> pil;

	if (pil == 1) 						//Akar Percabangan
	{ true;
		encrypt :
		
		system("clear");
		Encryption_mode();
		
		cout << BOLD(FWHT("\n\n\t1. Decrypt Your Encryption\n\t2. Try Again\n\t3. Back to Home\n\t0. Exit")); cin >> pil;
		
		if (pil == 1)
		{ true;
		
			while (pil == 1)
			{
				system("clear");
				Decryption_mode();
			
				cout << BOLD(FWHT("\n\n\t1. Back to Home\n\t0. Exit")); cin >> pil;	
				
				if (pil == 1)
				{ true;
				
					while (pil == 1)
					{
						goto home;
					}
				}
				
				else if (pil == 0)
				{ true;
					
					while (pil == 0)
					{
						exit (EXIT_SUCCESS);
					}
				}
				
				else
					cout << "\n\t\tSorry, It's Wrong and Try Again";										
			}		
		}
		
		else if (pil == 2)
		{ true;
		
			while(pil = 2)
			{
				system("clear");
				goto encrypt;
			}	
		}
		
		else if (pil == 3)
		{
			goto home;
		}
		
		else if (pil == 0)
		{
			cout << BOLD(FYEL("\n\n\t\t     ^,^ Thank's For Your This Test ^,^\n\n"));
			exit (EXIT_SUCCESS);
		}
	}	
	
	else if (pil == 2)
	{ true;
		while (pil == 2)
		{
			system("clear");
			Decryption_mode();
			
			cout << BOLD(FWHT("\n\n\t1. Back to Home\n\t0. Exit")); cin >> pil;
			
			if (pil == 1)
			{ true;
				while (pil == 1)
				{
					goto home;
				}
			}
			
			else if (pil == 0)
			{
				cout << "\n\n\t\t     ^,^ Thank's For Your This Test ^,^\n\n";
				exit (EXIT_SUCCESS);
			}
		}
	}
	
	else if (pil == 3)
	{ true;
		while (pil == 3)
		{
			cout << "\n\n\t\t     ^,^ Thank's For Your This Test ^,^\n\n";
			exit (EXIT_SUCCESS);
		}
	}
	
	else
		cout << "\n\t\t\tSorry, it's Wrong and Try Again";
}
