#include <iostream>
using namespace std;

int arr[20]; //membuat array dengan panjang data 20
int n; //membuat variable inputan n
int main(){}
void input()
{//procedure input
while (true)
{
cout << "masukkan jumlah data pada array : "; //membuat inputan jumlah element array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{//membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 element.\n"; //menampilkan pesan jika data lebih dari 20
}
}
cout << endl; //membuat jarak per baris program
cout << "======================" << endl; //membuat tampilan sususan data element array
cout << "masukkan element array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) //menggunakan perulangan for untuk mentimpan data pada array
{
cout << "data ke-" << (i + 1) << ": "; //memasukan atau menginput nilai data n
cin >> arr[i]; //menyimpan nilai data n kedalam array arr
}
}

void insertionsort()
{//procedure insertionsort

int temp; //membuat variable data temporer atau penyimpanan sementara
int j, i; //membuat variable j sebagai penanda

for (i = 1; i <= n - 1; i++)
{//step 1

temp = arr[i]; //step 2

j = i - 1; //step 3

while (j >= 0 && arr[j] > temp) // step 4
{
arr[j + 1] = arr[j]; //step 4a
j--; //step 4b
}

arr[j + 1] = temp; //step 5
}
}

void display()
{
    
}