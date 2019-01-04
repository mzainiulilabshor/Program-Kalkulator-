#include<iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char Aritmatika;
	cout<<"============SELAMAT DATANG DI PROGRAM KALKULATOR KAMI========= \n\n";
	cout<<"============MASUKAN NILAI======= : ";
	cin>>a;
	cout<<"=============KALKULATOR======= +,-,/,* : ";
	cin>>Aritmatika;
	cout<<"=============MASUKAN NILAI KEDUA========== : ";
	cin>>b;
	cout<<"\n hasil perhitungan : ";
	cout<<a<<Aritmatika<<b;

	if(Aritmatika == ' + '){
		hasil=a+b;
	} else if (Aritmatika == '-'){
		hasil=a-b;
	} else if (Aritmatika == '/'){
		hasil=a/b;
	} else if (Aritmatika == '*'){
		hasil=a*b;
	} else {
		cout << "Operator Anda Salah" <<endl;
	}
	cout<<" = "<< hasil <<endl;
	return 0;
}
