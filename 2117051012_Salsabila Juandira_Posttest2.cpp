#include <iostream>
#include <cmath>
//salsabila juandira_2117051012
using namespace std;
	
int main(){
	int pena = 12;
	int buku = 48;
	int penghapus = 20;
	int penggaris = 35;
	int harga_pena;
	int harga_buku;
	int harga_penghapus;
	int harga_penggaris;
	cout<<"Harga Pena		: Rp. ";
	cin>>harga_pena;
	cout<<"Harga Buku		: Rp. ";
	cin>>harga_buku;
	cout<<"Harga Penghapus		: Rp. ";
	cin>>harga_penghapus;
	cout<<"Harga Penggaris		: Rp. ";
	cin>>harga_penggaris;
	cout
	<<endl
	<<"========= Daftar Belanjaan ========="<<endl
	<<endl
	<<"Harga "<<pena<<" buah pena	= Rp."<<(harga_pena * pena)<<endl
	<<"Harga "<<buku<<" buah buku	= Rp."<<(harga_buku * buku)<<endl
	<<"Harga "<<penghapus<<" buah penghapus = Rp."<<(harga_penghapus * penghapus)<<endl
	<<"Harga "<<penggaris<<" buah penggaris = Rp."<<(harga_penggaris *penggaris)<<endl
	<<"-----------------------------------"<<endl
	<<"Total Barang		= " <<(pena+buku+penghapus+penggaris)<<" item"<<endl
	<<"Total Belanja		= Rp."<<(harga_pena*pena+harga_buku*buku+harga_penghapus*penghapus+harga_penggaris*penggaris);
	return 0;
}
