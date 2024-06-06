#include <iostream>
#include <fstream>
#define N 5
using namespace std;

void lihatMenu (char Kandidat[][50]);
void lihatHasil (char Kandidat[][50], int *hasil);
int Maks(int * arr);

int main (){
	struct voting{
		char pilih;
		int n;
	}
	data [N];
	char Kandidat[N][50] = {
	"",
	"Abdul Hamid",
	"Ali Fikri",
	"Saiful Kurob",
	"Omar Adellion",
	};
	int hasil [N]={
	0
	};
	while (true){
		cout<<"\t-----Voting Ketua Kelas-----\n";
		lihatMenu(Kandidat);
		cout<<"Masukkan pilihan anda = ";
		cin>> data[N].pilih;
		
		switch (tolower(data[N].pilih)){
			case 'a':
				cout<<"Masukkan kandidat pilihan anda = ";
				cin>> data[N].n;
				hasil[data[N].n]++;
				break;
			case 'b':
				cout<<"Hasil Voting Ketua Kelas\n";
				lihatHasil(Kandidat, hasil);
				break;
			case 'c':
				cout<<"Pemenang Voting Ketua Kelas adalah\n" << Kandidat[Maks(hasil)] << endl;
				break;
			case 'd':
				return 0;
			default :
				cout<<"Pilihan anda tidak sesuai"<<endl;
		}
	}
	return 0;
}
void lihatMenu (char Kandidat[][50]){
	cout<<"List kandidat calon ketua kelas" << endl;
	for (int i=1; i<N; i++){
		cout << i << ". "<< Kandidat[i] << endl;
	}
	cout << "Pilih Menu Berikut"<<endl;
	cout << "\tA - Memvoting"<<endl;
	cout << "\tB - Melihat jumlah suara masuk"<<endl;
	cout << "\tC - Melihat Pemenang"<<endl;
	cout << "\tD - Keluar APK"<<endl;
}
void lihatHasil (char Kandidat[][50], int * hasil){
	for (int i=1; i<N; i++){
		cout << Kandidat[i] << "\t" << hasil[i] << endl;
		ofstream program;
		program.open("Voting.txt", ios::app);
		program << Kandidat[i] <<"\t"<< hasil[i] <<endl; 
	}
}
int Maks(int *arr){
	int Maks = 0;
	for (int i=1; i<N; i++){
		if(arr[i]>arr[Maks]){
			Maks = i;
		}
	}
	return Maks;
	return 0;
}

