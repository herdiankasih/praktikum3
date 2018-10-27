# praktikum3


A. Latihan1 #Program menampilkan bilangan terbesar dari sejumlah bilangan acak yang di inputkan.

=> Berikut Alur Algoritma :

	1.Mendeklarasikan int i,max,a, dan x.
	2.mendeklarasikan variabel a dan x sebagai nilai inputan.
	3.Mendeklarasikan variabel i sebagai perulangan.
	4.Mendeklarasikan variabel max sebagai pengingat nilai.
	5.Membuat rumus perulangan untuk menentukan banyak bilangan yang akan di bandingkan
		for (i;i<a;i++)
	6.Menginputkan nilai a.
	7.menginputkan nilai x.
	8.Membandingkan nilai x dengan max
		if ( x> max) // jika x lebih besar dari max
	    	max= x   // maka nilai max adalah x

=> Berikut Flowchartnya :
![flowchart1](https://user-images.githubusercontent.com/43899109/47564530-83b32680-d94f-11e8-8c80-9458d8de3c61.jpg)



=> Berikut kode C++ :

#include<iostream>

using namespace std;

int main() {
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukkan jumlah bilangan: ";
    cin >> a;

    for (i;i<a;i++){
        cout << "masukkan bilangan ke- " << i+1 << ": ";
        cin >> x;

        if (x > max)
            max = x;
    }

    cout << "Bilangan terbesar adalah: " << max << endl;
}

=> Berikut Hasil Screenshoot Program :
![sslatihan1](https://user-images.githubusercontent.com/43899109/47354382-c8895400-d6e8-11e8-9c06-87c7c6078484.jpg)

 
B. Latihan2 # Program menampilkan urutan bilangan dari yang terkecil sampai yang terbesar, dari 3 buah bilangan yang di inputkan.

=> Berikut Alur Algoritma :

	1.Mendeklasrasikan int a,b,c sebagai variabel input
	2.Membandingkan setiap variabel untuk menentukan nilai yang terkceil sampai yang terbesar
	3.Dengan menggunkan rumus if dan percabangan
		if (a<b)
    		    {
       		       if (b<c)
                       cout<< a << "  " << b << "  " <<c;
		Jika a lebih kecil dari b dan jika b lebih kecil dari c maka yang akan ditampilkan
		a b c

=> Berikut Flowchartnya :
![flowchart2](https://user-images.githubusercontent.com/43899109/47354924-3c782c00-d6ea-11e8-85bb-7d4df02c6c76.jpg)


=> Berikut Kode C++ :
#include <iostream>

	using namespace std;

	int main()
	{
	    int a,b,c;
	    cin>> a >> b >> c;
	    if (a<b)
	    {
	        if (b<c)
	            cout<< a << "  " << b << "  " <<c;
	        else
	        {
	            if (a<c)
	                cout<< a << "  " << c << "  " <<b;
	            else
	                cout << c << "  " << a << "  " <<b;
	        }
	    }
	    else
	    {
	        if (a<c)
	            cout << b << "  " << a << "  " << c;
	        else
	        {
	            if ( b<c )
	                cout << b << "  " << c << "  " <<a;
	            else
	                cout << c << "  " << b << "  " <<a;
	        }
	    }
	    return 0;
	}
=> Berikut Hasil Screenshoot Program, :
![sslatihan2](https://user-images.githubusercontent.com/43899109/47354470-0b4b2c00-d6e9-11e8-8a8d-1cf5d71177e7.jpg)


C. Laihan3 # Program mencetak nilai tengah dari 3 buah bilangan yang di inputkan.

=> Berikut Alur Algoritma :

	Algoritma Mencari Nilai Tengah

	
1.	Inputkan data
2.	Data  diurutkan lebih dahulu    
3.	Banyaknya Data yaitu ada 3 data.
4.	Posisi data Median berada di tengah yaitu di urutan ke-2.
5.	Selesai


=> Berikut Kode C++ :
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    int data[3];
    int median,i;

   for(i=0;i<3;i++){
    cout<<"Masukan Data : "<<(i+1)<<"\n";
    cin>>data[i];
   }
    i=i-1;
    median=(i+1)/2;
    cout<<endl<<data[median]<<endl;

    return 0;
}

=> Berikut Hasil Screenshoot Program :
![sslatihan3](https://user-images.githubusercontent.com/43899109/47355143-ca541700-d6ea-11e8-9fe4-b46922f94320.jpg)

