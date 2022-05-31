//Kelompok 11
//Nafilah Salma Triamanda 	(2006482842)
//Luqman Hadiwinata 		(2006483132)
//Khatami Fahziyas 			(2006579762)
#include <stdio.h>
#include <math.h>
#include <string.h>
#include"hitungan.h"
#include"search_sorting.h"
int menu_utama(){
	int back = 3;
	while( back != 0 && back != 1){
		printf("\n\nMenu Utama?\n ketik 1 untuk YA, 0 untuk TIDAK\n");
		printf("Plihan =  ");
		scanf("%d", &back);
	}
	return back;
}

int main(){
	int n = 0, menu, a, b, c, d, e, f, ans, back, x, y, hasil,bil;
	int i = 0, exit = 0;
	int absen[20], nilai[20]={0}, rank[20], nilainya, urutan, absennya, temp;
	char nama[20][20], tmp[20];
	while( exit == 0 ){
		system("cls");
		printf("\t\t\t==========Selamat Datang di Program Ujian Matematika==========\n");
		printf("\n\t\t\t\t\tMenu Utama\n");
		printf("\t\t\t\t1. Ujian\n\t\t\t\t2. Ranking & Absen\n\t\t\t\t3. Pencarian\n\t\t\t\t4. Panduan Pengguna\n\t\t\t\t5. Exit\n");
		printf("\t\t\t\tketik angka: ");
		scanf("%d", &menu);
		
		while ( menu == 1 ){
			system("cls");
			printf("Nama Siswa: ");
			scanf(" %[^\n]s", nama[n]);
			printf("Nomor absen: ");
			scanf("%d", &absen[n]);
			
			a = absen[n];
			b = absen[n]+2;
			c = absen[n]+3;
			d = 2;
			e = absen[n]*2+8;
			f = absen[n]*4+8;
			
			//pertanyaan 1 
			printf("1. Berapakah Nilai Faktorial dari %d ?(poin 5)\n",a);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == faktorial(a)){
				nilai[n] += 5;
			}
			//pertanyaan 2
			printf("2. Berapakah fibonnaci ke %d ? (poin 5)\n",c+1);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == fibo(c)){
				nilai[n] += 5;
			}
			//pertanyaan 3
			printf("3. Berapakah Faktor Persekutan Terbesar dari %d dan %d ? (poin 10)\n",e,f);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == FPB(e,f)){
				nilai[n] += 10;
			}
			//pertanyaan 4
			printf("4. Hasil %d dipangkatkan oleh %d adalah (poin 10)\n", a,d);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == Pangkat(a,d)){
				nilai[n] += 5;
			}
			//pertanyaan 5
			printf("5. Kelipatan Persekutuan Terkecil dari %d dan %d adalah (poin 10) \n",a,b);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == KPK(a,b)){
				nilai[n] += 10;
			}
			//pertanyaan 6
			printf("6. A & B pergi latihan bulu tangkis bersama. A pergi latihan selama %d hari sekali,\n",a);
			printf("sementara B pergi selama %d hari sekali\n", b);
			printf("Berapa hari lagi mereka akan berlatih secara bersamaan? (poin 10)\n");
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == KPK(a,b)){
				nilai[n] += 10;
			}
			//pertanyaan 7
			printf("7.Suatu hari dalam rangka memperingati hari ulang tahun Konoha, Boruto bersama Sarada\n");
			printf("ingin membagikan hadiah kue serta coklat (satu paket) kepada beberapa teman dekatnya.\n");
			printf("Jika kuenya ada %d sedangkan coklatnya ada %d, berapa paket yang akan dibagikan? (poin 10)\n",e,f);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == FPB(e,f)){
				nilai[n] += 10;
			}
			//pertanyaan 8
			printf("8. Hasil %d dipangkatkan oleh %d dikurangi oleh %d adalah (poin 10)\n",a,d,c);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == PangkatModif1(a,d,c)){
				nilai[n] += 10;
			}
			//pertanyaan 9
			printf("9. Berapakah Nilai Faktorial dari %d lalu ditambahkan oleh %d\n",a,b);
			printf("lalu dikurangi oleh %d ?(poin 10))\n",c);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == faktormodif1(a,b,c)){
				nilai[n] += 10;
			}
			//pertanyaan 10
			printf("10. Hasil %d dipangkatkan oleh %d ditambahkan oleh %d adalah (poin 10)\n",a,d,c);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == PangkatModif2(a,d,c)){
				nilai[n] += 10;
			}
			//pertanyaan 11
			printf("11. Berapakah Nilai Faktorial dari %d lalu dikurangi oleh %d\n",a,b+3);
			printf("lalu dijumlahkan oleh %d ?(poin 5)\n",c+2);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == faktormodif2(a,b+3,c+2)){
				nilai[n] += 5;
			}
			//pertanyaan 12
			printf("12. Berapakah Nilai Faktorial dari %d lalu dikurangi oleh %d\n",a,b);
			printf("lalu dikurangi oleh %d ?(poin 5))\n",c);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == faktormodif4(a,b,c)){
				nilai[n] += 5;
			}
			//pertanyaan 13
			printf("13. Berapakah Nilai Faktorial dari %d lalu ditambahkan oleh %d\n",a,c);
			printf("lalu ditambahkan oleh %d ?(poin5)\n",e);
			printf("Jawab = ");
			scanf("%d", &ans);
			if ( ans == faktormodif3(a,c,e)){
				nilai[n] += 5;
			}
			system("cls");
			n++;
			
			for (i=0;i<n;i++){
				nilainya = nilai[i];
				absennya = absen[i];
				strcpy(tmp, nama[i]);
				urutan = i;
				while (urutan > 0 && nilai[urutan-1] < nilainya){
					nilai[urutan] = nilai[urutan-1];
					absen[urutan] = absen[urutan-1];
					strcpy(nama[urutan], nama[urutan-1]);
					urutan--;
				}
				nilai[urutan] = nilainya;
				absen[urutan] = absennya;
				strcpy(nama[urutan], tmp);
			}
			
			for( i = 0 ; i < n ; i++ ){
				rank[i] = i+1;
			}
			
			if ( menu_utama() == 1 ){
				break;
			}			
		}
		
		while ( menu == 2 ){
			system("cls");
			printf("1. Lihat ranking\n2. Sort berdasarkan nomor absen\n3. Back\n");
			printf("ketik angka: ");
			scanf("%d", &x);
			while ( x == 1 ){
				system("cls");
				printf("Lihat Ranking\n");
				sorting_ranking(nama, absen, nilai, rank,n);
				if ( menu_utama() == 1 ){
					menu = 0;
					break;
				}
				break;
			}
			while ( x == 2 ){
				system("cls");
				printf("Urutan Absen\n");
				sorting_absen(nama, absen, nilai, rank,n);
				if ( menu_utama() == 1 ){
					menu = 0;
					break;
				}
				break;
			}
	
			
			while( x == 3 ){
				menu = 0;
				break;
			}
			
			while( x!=1 && x!=2 && x!=3 ){
				("Ketik angka  yang sesuai!!!");
				break;
			}
		}
		
		while( menu == 3 ){
			do{
				system("cls");
				printf("Search berdasarkan:\n");
				printf("1. Nama\n2. Peringkat\n");
				printf("ketik angka: ");
				scanf("%d", &y);
				if ( y == 1 ){
					search_nama(nama, absen, nilai, rank);
				}
				else if ( y == 2){
					search_peringkat(nama, absen, nilai, rank);
				}
				else {
					printf("\nKetik Angka yang sesuai!!!\n");
					printf("Mohon Tunggu Sebentar");
					sleep(3);
				}
			} while ( y!=1 && y!=2 );

			if ( menu_utama() == 1 ){
				menu = 0;
				break;
			}			
		}
		
		while( menu == 4 ){
			system("cls");
			printf("\t\t\t=== Cara Penggunaan Program ===\n");
			printf("1. Ketik angka yang disediakan untuk memilih menu yang diinginkan\n");
			printf("2. Siswa yang ingin memulai ujian silahkan pilih menu 'ujian'\n");
			printf("3. Jika ingin melihat Peringkat atau Urutan nomor absen\n   Silahkan pilih menu 'Ranking dan Absen'\n");
			printf("4. Jika ingin mencari data berdasarkan nama dan peringkat\n   Silahkan pilih menu 'Pencarian'\n");
			printf("5. Pilih menu 'Exit' untuk keluar dari program\n");
			printf("\n\ncatatan: Sorting dan searching akan berisi siswa yang sudah mengikuti ujian\nSorting dan Searching akan di update secara berkala selama program tidak berhenti.\n\n");
			printf("Tekan apa saja untuk kembali ke program......");
			getch();
			menu = 0;
			break;
		}
		
		while( menu == 5 ){
			system("cls");
			printf("\t\t==========Terima Kasih Telah Mengikuti Ujian Kelas Ini==========\n");
			printf("Kelas = AlProg 02\nKelompok 11 : \n");
			printf("Nafilah Salma Triamanda 	(2006482842)\nLuqman Hadiwinata 		(2006483132)\nKhatami Fahziyas               (2006579762)");
			exit = 1;
			break;
		}
	}
	return 0;
}
