/*==================================
	NAMA	: IWAN LA UDIN
	NPM		: 07351811031
	KELAS	: 2IF1
====================================*/
#include <iostream>
using namespace std;
			
void judul ();	//-------> Fungsi Tanpa Nilai Kembali
void akhir ();	//-------> Fungsi Tanpa Nilai Kembali

//--------> Fungsi Utama
int main() {
	char kembali,lanjut,cetak, nama[20],hp [13], alamat[15],iden[15],jns_klamin[10];
	int i,jml_tiket,menu,pilihan,harga_tiket,total_bayar,bayar,kembalian,kurang;
 	string jns_kpl;
 
 		tampilan:
 		judul();
 		cout<< "\n\n\n\t\t============================\n";
 		cout<< "\t\t	>>>>MENU<<<<\n";
		cout<< "\t\t============================\n";
		cout<< "\t\t1. Pemesanan Tiket Kapal\n";
		cout<< "\t\t2. Info Harga/Jadwal Tiket\n";
		cout<< "\t\t3. Keluar\n";
		cout<< "\t\tMasukkan Pilihan Menu ---> ";
		cin>> menu;
	
		if (menu ==1)  {
		system ("cls");
		judul();
	//-------> Registrasi Pembeli Tiket
	cout<< "\n\n\n\tRegistrasi Calon Penumpang\n";
	cout<< "\t________________________________\n";
	cout<< "\n\n\tNama			: "; cin>> nama;
	cout<< "\n\tAlamat 			: "; cin>> alamat;
	cout<< "\n\tIdentitas 		: "; cin>> iden;
	cout<< "\n\tJenis Klamin(L/P) 	: "; cin>> jns_klamin;
	cout<< "\n\tNo. HP 			: "; cin>>hp;
	cout<< "\t_________________________________\n\n";
	
	//-------> Menu Pemesanan Tiket Calon Penumpang
	system ("cls");
	tujuan:
	cout<< "\n\n\n\t===========================================\n";
	cout<< "\tSilahkan Masukkan Tujuan Yang Anda Inginkan\n";
	cout<< "\t___________________________________________\n";
	cout<< "\t 1. Taliabu - Sanana                    \n";
	cout<< "\t 2. Taliabu - Ternate                   \n";
	cout<< "\t 3. Sanan - Ternate                     \n";
	cout<< "\t 4. Ternate - Sanana                    \n";
	cout<< "\t 5. Ternate - Taliabu                   \n";
	cout<< "\t-------------------------------------------\n";
	cout<< "\tMasukkan Pilihan ---> ";
	cin >> menu;
 		
		if (menu ==1) {
			system ("cls");
			cout<< "\n\n\tSilahkan Pilih Jenis Kapal Yang Anda Inginkan\n";
			cout<< "\n\tTaliabu - Sanana\n";
			cout<< "\t1. AGIL PRATAMA 04\n";
			cout<< "\t2. PERMAI INDAH\n";
			cout<< "\t3. FUNGKA PERMATA 04\n";
			cout<< "\t4. THEODORA\n";
			cout<< "\t_______________\n";
			cout<< "\tMasukkan Pilihan ---> ";
			cin >> pilihan;
			
			if (pilihan==1) {
				system ("cls");
				jns_kpl="AGIL PRATAMA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==2) {
				system ("cls");
				jns_kpl="PERMAI INDAH";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==3) {
				system ("cls");
				jns_kpl="FUNGKA PERMATA 04";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =300000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==4) {
				system ("cls");
				jns_kpl="THEODORA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =300000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else {
				system ("cls");
				akhir();
				return 0;
					
				}
		}
		else if (menu==2) {
			system ("cls");
			cout<< "\n\n\tSilahkan Pilih Jenis Kapal Yang Anda Inginkan\n";
			cout<< "\n\tTaliabu - Ternate\n";
			cout<< "\t1. AGIL PRATAMA 04\n";
			cout<< "\t2. PERMAI INDAH\n";
			cout<< "\t_______________\n";
			cout<< "\tMasukkan Pilihan ---> ";
			cin >> pilihan;
		
			if (pilihan==1) {
				system ("cls");
				jns_kpl="AGIL PRATAMA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =500000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==2) {
				system ("cls");
				jns_kpl="PERMAI INDAH";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =450000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else {
				system ("cls");
				akhir();
				return 0;	
			}
		}
		else if (menu==3) {
			system ("cls");
			cout<< "\n\n\tSilahkan Pilih Jenis Kapal Yang Anda Inginkan\n";
			cout<< "\n\tSanana - Ternate\n";
			cout<< "\t1. AGIL PRATAMA 04\n";
			cout<< "\t2. AKSAR SAPUTRA\n";
			cout<< "\t3. PERMAI INDAH\n";
			cout<< "\t_______________\n";
			cout<< "\tMasukkan Pilihan ---> ";
			cin >> pilihan;
		
			if (pilihan==1) {
				system ("cls");
				jns_kpl="AGIL PRATAMA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==2) {
				system ("csl");
				jns_kpl="AKSAR SAPUTRA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =200000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==3) {
				system ("csl");
				jns_kpl="PERMAI INDAH";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else {
				akhir();
				return 0;
			}
		}
		else if (menu==4) {
			system ("cls");
			cout<< "\n\n\tSilahkan Pilih Jenis Kapal Yang Anda Inginkan\n";
			cout<< "\n\tTernate - Sanana\n";
			cout<< "\t1. AGIL PRATAMA 04\n";
			cout<< "\t2. AKSAR SAPUTRA\n";
			cout<< "\t3. PERMAI INDAH\n";
			cout<< "\t_______________\n";
			cout<< "\tMasukkan Pilihan ---> ";
			cin >> pilihan;
		
			if (pilihan==1) {
				system ("cls");
				jns_kpl="AGIL PRATAMA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==2) {
				system ("cls");
				jns_kpl="AKSAR SAPUTRA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =200000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==3) {
				system ("cls");
				jns_kpl="PERMAI INDAH";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =250000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else {
				akhir();
				return 0;
			}
		}
		else if (menu==5) {
			system ("cls");
			cout<< "\n\n\tSilahkan Pilih Jenis Kapal Yang Anda Inginkan\n";
			cout<< "\n\tTernate - Taliabu\n";
			cout<< "\t1. AGIL PRATAMA 04\n";
			cout<< "\t2. PERMAI INDAH\n";
			cout<< "\t_______________\n";
			cout<< "\tMasukkan Pilihan ---> ";
			cin >> pilihan;
		
			if (pilihan==1) {
				system ("cls");
				jns_kpl="AGIL PRATAMA";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =500000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else if (pilihan==2) {
				system ("cls");
				jns_kpl="PERMAI INDAH";
				cout <<"\n\n\t"<<jns_kpl;
				cout<< "\n\tMasukkan Jumlah Tiket Yang Dibeli : ";
				cin >> jml_tiket;
				harga_tiket =500000;
				total_bayar = harga_tiket * jml_tiket;
			}
			else {
					akhir();
			}
		}
		else {
			system ("cls");
			cout <<"\n\n\t\tMASUKKAN ANDA SALAH TERIMAKASIH\n";
			akhir();
			return 0;
		}
		//-------> Registrasi Pemilik Tiket
		char nama_tiket [jml_tiket][20];
		char jkp[jml_tiket][20];
		for (int j=1; j<=jml_tiket; j++) {
			cout<< "\n\n\t\tNama Ditiket Ke "<<j <<"\t: "; cin >>nama_tiket[j];
			cout<< "\n\n\t\tJenis Kelamin\t	: "; cin>> jkp[j];		
		}	//-------> Registrasi Pemilik Tiket
			
 	system ("cls");
	judul ();
	tiket:
	cout<< "\n\n\t\t=====================================\n";
	cout<< "\n\t\tJenis Kapal		: "<<jns_kpl;
	cout<< "\n\n\t\tNama Pemesan		: "<<nama;
	cout<< "\n\n\t\tAlamat			: "<<alamat;
	cout<< "\n\n\t\tidentitas		: "<<iden;
	cout<< "\n\n\t\tJenis Klamin		: "<<jns_klamin;
	cout<< "\n\n\t\tNomor Hp 		: "<<hp;
	cout<< "\n\n\t\tharga tiket 		: Rp. "<<harga_tiket;
	cout<< "\n\n\t\tJumlah Tiket 		: "<<jml_tiket;
	cout<< "\n\n\t\tTotal bayar 		: Rp. "<<total_bayar;
	cout<< "\n\t\t***************************************\n";
	cout<< "\n\n\tSilahkan Lakukan Pembayaran Tiket !!!";
	cout<< "\n\tBayar : "; cin >>bayar;
	if (bayar==total_bayar || bayar>total_bayar) {
		kembalian=bayar-total_bayar;
		cout<< "\n\n\t\t ---------\n";
		cout<< "\t\t|  LUNAS  |";
		cout<< "\n\t\t ---------";
		cout<< "\n\tKembalian : Rp."<<kembalian;
		cout<< "\n\n\tSilahkan Cetak Tiket [Y/T]---> "; cin>>cetak;
		if (cetak=='y' || cetak=='Y') {
			system("cls");
			judul();
			cout<< "\n\n";
			for (int j=1; j<=jml_tiket; j++) {
			cout<< "\n\n\t\t=====================================\n";
			cout<< "\n\t\tTiket Ke		: "<<j;
			cout<< "\n\t\tJenis Kapal		: "<<jns_kpl;
			cout<< "\n\n\t\tNama Ditiket		: "<<nama_tiket[j];
			cout<< "\n\n\t\tJenis Klamin		: "<<jkp[j];
			cout<< "\n\n\t\tharga tiket 		: Rp. "<<harga_tiket;
			cout<< "\n\t\t***************************************\n";
		}
		}
		else {
			system ("cls");
			akhir();
			return 0;
		}
	}
	else if (bayar<total_bayar) {
		kurang=total_bayar-bayar;
		cout <<"\n\tMaaf!! Uang Anda Tidak Cukup\n\tKurang : Rp."<<kurang;
		cout<< "\n\tSilahkan Lakukan Pembayaran Kembali[Y/N]---> "; cin>>kembali;
		if (kembali=='Y' || kembali=='y') {
			system ("cls");
			judul();
			goto tiket;
		}
		else {
			system ("cls");
			akhir();
			return 0;
		}
	}
		return 0;
	}	//----------> Batas Menu Pemesanan Tiket Calon Penumpang
		
		else if (menu ==2) {	//----------> Menu Jadwal / Harga Tiket
			system ("cls");
			judul();
			cout<< "\n\n\t\tINFORMASI JADWAL/HARGA TIKET KAPAL\n\n";
			cout<< "\t\t# AGIL PRATAMA\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t|  Hari |  Jam  |      Tujuan        |  Harga Tiket  |\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t| jumat | 03:00 | Taliabu - Sanana   | (Rp. 250.000) |\n";
			cout<< "\t\t| jumat | 03:00 | Taliabu - Ternate  | (Rp. 500.000) |\n";
			cout<< "\t\t| sabtu | 09:00 | Sanan - Ternate    | (Rp. 250.000) |\n";
			cout<< "\t\t| rabu  | 09:00 | Ternate - Taliabu  | (Rp. 500.000) |\n";
			cout<< "\t\t| rabu  | 09:00 | Ternate - Sanana   | (Rp. 250.000) |\n";
			cout<< "\t\t-----------------------------------------------------\n";
		
			cout<< "\t\t# PERMAI INDAH\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t|  Hari  |  Jam  |      Tujuan       |  Harga Tiket  |\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t| minggu | 03:00 | Taliabu - Sanana  | (Rp. 250.000) |\n";
			cout<< "\t\t| minggu | 03:00 | Taliabu - Ternate | (Rp. 500.000) |\n";
			cout<< "\t\t| senin  | 09:00 | Sanana - Ternate  | (Rp. 250.000) |\n";
			cout<< "\t\t| jumat  | 04:00 | Ternate - Taliabu | (Rp. 500.000) |\n";
			cout<< "\t\t| sabtu  | 04:00 | Ternate - Sanana  | (Rp. 250.000) |\n";
			cout<< "\t\t-----------------------------------------------------\n";
		
			cout<< "\t\t# AKSAR SAPUTRA\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t|  Hari  |  Jam  |      Tujuan       |  Harga Tiket  |\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t| senin  | 03:00 | Sanana - Ternate  | (Rp. 250.000) |\n";
			cout<< "\t\t| Minggu | 03:00 | Ternate - Sanana  | (Rp. 250.000) |\n";
			cout<< "\t\t-----------------------------------------------------\n";
		
			cout<< "\t\t# THEODORA\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t|  Hari  |  Jam  |      Tujuan       |  Harga Tiket  |\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t| Selasa | 09:00 | Taliabu - Sanana  | (Rp. 250.000) |\n";
			cout<< "\t\t-----------------------------------------------------\n";
		
			cout<< "\t\t# FUNGKA PERMATA 04\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t|  Hari  |  Jam  |      Tujuan       |  Harga Tiket  |\n";
			cout<< "\t\t-----------------------------------------------------\n";
			cout<< "\t\t| Sabtu  | 04:00 | Taliabu - Sanana  | (Rp. 250.000) |\n";
			cout<< "\t\t-----------------------------------------------------\n";
		
			cout<< "\tApakah Anda ingin  kembali (Y/N) : ";
			cin >> kembali;
			if (kembali=='Y' || kembali=='y') {
					system ("cls");
					goto tampilan;
			}
			else {
				system("cls");
				cout <<"\n\n\t\tTERIMAKASIH ATAS KUNJUNGANNYA\n";
				return 0;
			}
		}	//----------> Batas Menu Jadwal / Harga Tiket
		
		else if (menu ==3) {
			system ("cls");
			akhir();
			return 0;
		}
		else {
			cout<< "\n\n\t\tPilihan Anda Salah";
			system ("cls");
			akhir();
			return 0;
		}
 	
}
void judul () {
			cout<<"\n\t            ======================================";
			cout<<"\n\t          ==========================================";
			cout<<"\n\t        ==============================================";
			cout<<"\n\t      ==================================================";
			cout<<"\n\t    ======================================================";
			cout<<"\n\t\t\t AGEN TIKET KAPAL 'NUMBER ONE' ";
			cout<<"\n\n\t\t    Jln. Yossudarso No.112, telp. 0277200";
			cout<<"\n\t\t     Pelabuhan Ahmat Yani, Ternate, MALUT ";
			cout<<"\n\t\t =============================================";
			cout<<"\n\t\t================================================"; 
			
}
void akhir () {
	cout<< "\n\n\n\t\tTERIMAKASIH ANDA TELAH BERKUNJUNG ";
	cout<<"\n\n\n";
}
