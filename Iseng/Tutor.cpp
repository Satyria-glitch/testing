#include <iostream>
#include <conio.h> 
#include <time.h>
#include <stdlib.h>     //mengandung informasi untuk fungsi alokasi memori dan pembebasan alokasi memori

using namespace std;

void bermain();
void instruksi();

int main(){
	srand( (unsigned)time(NULL) );
	
	char opsi;
	
	do{
		system("cls");      //untuk menjalankan perintah diluar dari program bahasa C
		cout<<"-----------------------------------"<<endl;
		cout<<"    GAME MATEMATIKA ASIK BANGET	  "<<endl;
		cout<<"-----------------------------------"<<endl<<endl;
		cout<<"1. Mulai"<<endl;
		cout<<"2. Instruksi"<<endl;
		cout<<"3. Keluar"<<endl<<endl;
		cout<<"Pilih opsi: ";
		cin>>opsi;
	
		switch(opsi){
			case '1':
				bermain();
				break;
			case '2':
				instruksi();
				break;
		}
	}while(opsi != '3');
	
	return 0;
}

void bermain(){ 
	 int level, limit;
	 char opsi;
	 
	 system("cls");
	 cout<<"-----------------------------------"<<endl;
	 cout<<"    GAME MATEMATIKA ASIK BANGET	   "<<endl;
	 cout<<"-----------------------------------"<<endl<<endl;
	 cout<<"1. Level 1"<<endl;
	 cout<<"2. Level 2"<<endl;
	 cout<<"3. Level 3"<<endl;
	 cout<<"4. Kembali ke Menu"<<endl<<endl;
	 cout<<"Pilih opsi: ";
	 cin>>opsi;

	 switch(opsi){
		case '1': limit = 10; break;
		case '2': limit = 20; break;
		case '3': limit = 100; break;
		case '4': break;
	 }
	 
	 float a, b, ans, correctAns;
	 int correctNo = 0, total, hasil;
	 char operasi;
	 total = 5;
	 
	 if( opsi != '4' ){
		 for(int i=0; i<total; i++){
		 	a = rand()%limit;
		 	b = rand()%limit;
		 	
		 	int cek = rand()%3;
	 		switch(cek){
			      case 0:operasi = '+'; break;
				  case 1:operasi = '-'; break;
				  case 2:operasi = '*'; break; 
	 		}
	 		
		 	cout<<"("<<(i+1)<<"). ";
		 	cout<<a<<" "<<operasi<<" "<<b<<" = ";
		 	
			cin>> ans;
			
			switch(operasi){
			      case '+': correctAns = a + b; break;
				  case '-': correctAns = a - b; break;
				  case '*': correctAns = a * b; break; 
	 		}
			
			if( correctAns == ans ){
				correctNo++;
				cout<<"Benar"<<endl<<endl;
			}
			else{
				cout<<"salah"<<endl;
		 		cout<<a<<" "<<operasi<<" "<<b<<" = ";
			 	cout<<correctAns<<endl<<endl;
			}
		 }
		 
		 cout<<"Total: "<<total<<endl;
		 cout<<"Benar: "<<correctNo<<endl;
		 cout<<"Salah: "<<5-correctNo<<endl<<endl;

		 if (correctNo>2)
		 {
			 cout<<"SELAMAT ANDA MENANG"<<endl;
			 cout<<"Hubungi nomor [087850583844] untuk menerima hadiah"<<endl<<endl;
		 }else
		 {
			cout<<"ANDA BELUM BERUNTUNG"<<endl<<endl;
		 }
		 
		 
		 cout<<"Tekan apa saja untuk melanjutkan"<<endl;
		 getch();
	 }
}

void instruksi(){
	system("cls");
	cout<<"-----------------------------------"<<endl;
	cout<<"             Instruksi			  "<<endl;
	cout<<"-----------------------------------"<<endl<<endl;
	cout<<"1. Permainan ini hanya menggunakan rumus sederhana"<<endl;
	cout<<"2. Menjawab dengan benar akan mendapatkan 1 Poin"<<endl;
	cout<<"3. Total soal berjumlah 5"<<endl;
    cout<<"4. Soal yang di dapat tidak akan sama "<<endl;
	cout<<"5. Jawab 3 soal atau lebih dengan benar untuk memperoleh kemenangan"<<endl;
	cout<<endl;
	
	cout<<"Tekan apa saja untuk melanjutkan"<<endl;
	getch();        //Ketika memasukan karakter maka tidak akan ditampilkan pada layar
}