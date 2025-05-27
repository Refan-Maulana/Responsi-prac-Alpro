#include<iostream>
using namespace std;

int barang_a(){

int menu;
string barang;

cout<<"Menu admin\n";
cout<<"1.lihat barang \n";
cout<<"2.lihat catatan bulanan\n";
cout<<"3.hapus barang \n";
cout<<"4.input barang\n";
cout<<endl;
cin>>menu;

switch(menu){
	
	case 1:
		cout<<"Daftar menu\n";
		cout<<"1.Ayam\n";
		cout<<"2.Ikan\n";
		cout<<"3.semangka\n";
		cout<<"4.nuget\n";
		cout<<"5.bakso\n";
		cout<<"6.sosis\n";
		cout<<"7.bumbu\n";
		cout<<"8.alat pengorengan\n";
		cout<<"9.sendok\n";
		cout<<"10.baju\n";
		cout<<"11.selesai";
		cout<<endl;
		cin>>menu;
	case 2:
		cout<<"--------------Pendapatan Bulanan--------------|\n";
		cout<<"|pendapatan bersih: 1,500,000,000			 |\n";
		cout<<"|Pendapatan kotor : 3,000,000,000			 |\n";			 
		cout<<"|pajak bagunan    : 250,000,000				 |\n";
		cout<<"|gaji karyawan 	 : 750,000,000				 |\n";
		cout<<"|Biaya listrik&air: 500,000,000				 |\n";
		cout<<"|TTL				 :selasa/27/05/2025			 |\n";
		cout<<"----------------------------------------------|\n";
	case 3:
		cout<<"Daftar menu";
		cout<<"1.Ayam\n";
		cout<<"2.Ikan\n";
		cout<<"3.semangka\n";
		cout<<"4.nuget\n";
		cout<<"5.bakso\n";
		cout<<"6.sosis\n";
		cout<<"7.bumbu\n";
		cout<<"8.alat pengorengan\n";
		cout<<"9.sendok\n";
		cout<<"10.baju\n";
		cout<<endl;
		cout<<"Menu mana yang ingin anda hapus : \n";
		cin>>barang;
	case 4:
		cout<<"Masukan barang apa saja yang mau di input :";
		cin>>barang;
		break;
	default:
return 0;		
}
}
int barang_m(){

int menu;
int piro;
float total[50];

cout<<"Masukan baran apa saja yang mau di beli (1-9)\n";
cout<<"1.Ayam\n";
cout<<"2.Ikan\n";
cout<<"3.semangka\n";
cout<<"4.nuget\n";
cout<<"5.bakso\n";
cout<<"6.sosis\n";
cout<<"7.bumbu\n";
cout<<"8.alat pengorengan\n";
cout<<"9.sendok\n";
cout<<"10.baju\n";
cout<<"11.selesai";
cout<<endl;
cin>>menu;

switch(menu){
	
	case 1:
		cout<<"Brapa yang anda pesan (per ekor) :";
		cin>>piro;
		cout<<"ayam = 15000";
		total[1] =15000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total<<endl;
		break;
	case 2:
		cout<<"Brapa yang anda pesan (per ekor) :";
		cin>>piro;
		cout<<"ikan = 25000";
		total[2] =25000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[2]<<endl;
		break;
	case 3:
		cout<<"Brapa yang anda pesan (per KG) :";
		cin>>piro;
		cout<<"smangka = 7500(KG)";
		total[3] =7500 * piro;
		cout<<endl;
		cout<<"total harga=" <<total[3]<<endl;
		break;
	case 4:
		cout<<"Brapa yang anda pesan (per bungkus) :";
		cin>>piro;
		cout<<"nugget = 32000";
		total[4]=32000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[4]<<endl;
		break;
	case 5:
		cout<<"Brapa yang anda pesan (per bungkus) :";
		cin>>piro;
		cout<<"bakso = 17000";
		total[5]=17000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[5]<<endl;
		break;
	case 6:
		cout<<"Brapa yang anda pesan (per bungkus) :";
		cin>>piro;
		cout<<"sosis = 45000";
		total[6]=45000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[6]<<endl;
		break;
	case 7:
		cout<<"Brapa yang anda pesan (per bungkus) :";
		cin>>piro;
		cout<<"bumbu = 2000";
		total[7]=2000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[7]<<endl;
		break;
	case 8:
		cout<<"Brapa yang anda pesan (per iteam) :";
		cin>>piro;
		cout<<"alat pengorengan = 2000000";
		total[8]=2000000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[8]<<endl;
		break;
	case 9:
		cout<<"Brapa yang anda pesan (per iteam) :";
		cin>>piro;
		cout<<"sendok = 22000";
		total[9]=22000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[9]<<endl;
		break;
	case 10:
		cout<<"Brapa yang anda pesan (per iteam) :";
		cin>>piro;
		cout<<"baju = 120000";
		total[10]=120000 * piro;
		cout<<endl;
		cout<<"total harga ="<<total[10]<<endl;
		break;
	default:
return 0;		
}
}

int input_user(){
string use ="admin";
string pass="172";
string nama;
string password;

cout<<"Masukan user name: ";
cin>>nama;
cout<<"Masukan passworld: ";
	cin>>password;
if(nama == use && password == pass){
	cout<<"Admin Berhasil masuk";
	barang_a;
}else if(nama=="kasir" && password =="kasir"){
	cout<<"kasir berhasil masuk";
	barang_m;
}else{
	cout<<"maleng yaa";
	cout<<endl;
	system("cls");
	input_user();
}return 0;
}

int main(){
	input_user();
	cout<<endl;
	cout<<endl;
	barang_a();
	cout<<"======Supermarket======";
	cout<<"Total harga : \n";
	cout<<"27/05/2025 selasa";
	cout<<"";
}
