#include <stdio.h> //mendeklarasikan library yang digunakan
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int i=0;//mendeklarasikan variabel yang akan digunakan
int menu;//mendeklarasikan variabel yang akan digunakan
char name[100],pass[12];//mendeklarasikan variabel yang akan digunakan
char usr[100],pas[12];//mendeklarasikan variabel yang akan digunakan
char nama[100], npm[20],no[20],kls[10],prodi[50];//mendeklarasikan variabel yang akan digunakan

void dashboard();//mendeklarasikan fungsi yang akan digunakan
void rubrik();//mendeklarasikan fungsi yang akan digunakan
void profile();//mendeklarasikan fungsi yang akan digunakan
void afterlogin();//mendeklarasikan fungsi yang akan digunakan
void buatakun();//mendeklarasikan fungsi yang akan digunakan
void isiprofil();//mendeklarasikan fungsi yang akan digunakan


int main()//masuk ke fungsi main(utama)
{	
	printf ("BUAT AKUN SIOBEL\n\n");//menampilkan judul program
	buatakun();//masuk ke fungsi buat akun
	fflush(stdin);//digunakan untuk membersihkan buffer	
  	while(i < 3){//membuat looping menggunakan fungsi while sesuai kondisi
  		printf ("SIOBEL UPNVJT\n\nMasuk\n");//bagian log in
		printf("Username / E-mail : ");//memasukkan username/email
		gets(usr);//menyimpan username/email ke dalam variabel usr
		printf("Password : ");//memasukkan password 
		gets(pas);//menyimpan password ke dalam variabel pas

      if(strcmp(usr,("%c",name))==0 && strcmp(pas,("%c",pass))==0){//membuat branching sesuai dengan kondisi
      	printf("\nLogin Berhasil");
      	getch();// digunakan untuk membaca data karakter. Karakter yang dimasukkan tidak perlu diakhiri dengan penekanan tombol enter.
      	system("cls");//menghapus outputan 
      	isiprofil();//masuk ke fungsi isiprofil
        afterlogin();//masuk ke fungsi afterlogin
        break;
      }else{//jika kondisi tidak memenuhi
		system("cls"); //menghapus outputan 
		printf("PASSWORD SALAH\n");
		}
    i++;//melakukan increment pada variabel i
    printf("\n");
}
	return 0;
}

void afterlogin()//membuat fungsi afterlogin
{
	do{//melakukan looping menggunakan fungsi do-while
	
	printf("<=================================>\n");//menampilkan menu-menu yang ada pada siobel
	printf("<===>SELAMAT DATANG DI SIOBEL<====>\n");
	printf("<=================================>\n");
	printf ("1. DASHBOARD\n");
	printf ("2. RUBRIK\n");
	printf ("3. PROFIL\n");
	printf ("4. LOGOUT\n");
	
	printf ("Silahkan Pilih Menu = ");//memasukkan pilihan menu
	scanf ("%d",&menu);//menyimpan pilihan menu ke dala variabel menu
	system("cls");//menghapus outputan
	
	switch (menu){//melakukan branching sesuai kondisi
		case 1://masuk ke pilihan 1
			{
			dashboard();//masuk ke fungsi dashboard
			break;
			}
		case 2://masuk ke pilihan 2
			{
			rubrik();//masuk ke fungsi rubrik
			break;
			}
		case 3://masuk ke pilihan 3
			{
			profile();//masuk ke fungsi profile
			break;
			}	
		default://masuk ke pilihan selain 1,2,3
			{
			}
		}getch();// digunakan untuk membaca data karakter. Karakter yang dimasukkan tidak perlu diakhiri dengan penekanan tombol enter.
		system("CLS");//menghapus outputan
	}while (menu != 4);//kondisi looping
}

void dashboard()//membuat fungsi dashboard
{
	printf("Penugasan\n\n");//menampilkan menu yang ada di dashboard
	printf("Hasil Penilaian\n");
}

void rubrik()//membuat fungsi rubrik
{
	printf("<=================================>\n");//menampilkan menu yang ada di rubrik
	printf("<========Rubrik Bela Negara=======>\n");
	printf("<=================================>\n");
	printf("Nilai Cinta Tanah Air\n");
	printf("Nilai Kesadaran Berbangsa dan Bernegara\n");
	printf("Nilai Keyakinan Pancasila Sebagai Ideologi Negara\n");
	printf("Nilai Rela Berkorban Untuk Bangsa dan Negara\n");
	printf("Nilai Memiliki Kemampuan Awal Bela Negara\n");
}

void profile()//membuat fungsi profile
{	
	printf("<=================================>\n");//menampilkan informasi pada profile
	printf("<========Informasi Profile=======>\n");
	printf("<=================================>\n");
	printf("Nama	: %s\n",nama);
	printf("NPM	: %s\n",npm);
	printf("E-Mail	: %s\n",name);
	printf("No.Telp	: %s \n",no);
	printf("Kelas	: %s \n",kls);
	printf("PRODI	: %s\n",prodi);
	
}

void buatakun()//membuat fungsi buat akun
{
	printf ("Masukkan Username / E-mail = ");//memasukkan username/email
	gets(name);//menyimpan username/email ke dalam variabel name
	printf ("Masukkan Password  = ");//memasukkan email
	gets(pass);//menyimpan password ke dalam variabel pass
	printf("\nAKUN BERHASIL DIBUAT");
	getch();
	system("cls");
}

void isiprofil()//membuat fungsi isi profile
{
	printf ("Silahkan isi Data Diri\n");
	printf ("Nama Lengkap = ");//memasukkan nama lengkap
	gets(nama);//menyimpan nama lengkap ke dalam cariabel nama
	printf ("NPM = ");//memasukkan NPM
	gets(npm);//menyimpan NPM ke dalam variabel npm
	printf ("Kelas = ");//memasukkan kelas
	gets(kls);//menyimpan kelas ke dalam variabel kls
	printf ("No.Telp = ");//memasukkan no.telp
	gets(no);//meyimpan no telp ke dalam variabel no
	printf ("Program Studi = ");//memasukkan program studi
	gets(prodi);//menyimpan program studi ke dalam variabel prodi
	system ("cls");
}
