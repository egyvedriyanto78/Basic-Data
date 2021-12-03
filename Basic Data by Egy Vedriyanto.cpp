#include <iostream>
//untuk menggunakan cout dan cin
using namespace std;

/* NAMA   : EGY VEDRIYANTO
   NPM    : 2117051035
   KELAS  : B
*/

// ini merupakan program untuk membuat data basic BIODATA PELANGGAN
int main(){
	string a, b, c, d;
	
	cout<<"--------------->>> BIODATA PELANGGAN <<<---------------"<<endl<<""<<endl;
	cout<<"Masukkan data dengan urutan Nama Pelanggan, Alamat, Email, dan Nomor telepon."<<endl;
	cout<<"Contoh :"<<endl<<"Eren Yeager"<<endl<<"Natar"<<endl<<"Eren123@gmail.com"<<endl<<"089512345678"<<endl;
	cout<<""<<endl;
	cout<<"<Masukkan Biodata Pelanggan>"<<endl<<""<<endl;
	
	
	//Input
	cout<<"";
	getline(cin,a);
	cout<<"";
	getline(cin,b);
	cout<<"";
	getline(cin,c);
	cout<<"";
	getline(cin,d);
	
	//Output
		cout<<""<<endl;
		cout<<"--------------->>> BIODATA PELANGGAN <<<---------------"<<endl;
		cout<<""<<endl;
	cout<<"Nama Pelanggan  : "<<a<<endl;
	cout<<"Alamat Rumah    : "<<b<<endl;
	cout<<"Email Pelanggan : "<<c<<endl;
	cout<<"Nomor Telepon   : "<<d<<endl;
	
	return 0;
}
