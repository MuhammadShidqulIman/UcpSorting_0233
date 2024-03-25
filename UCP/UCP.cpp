//1.	Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
//2.	Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen - elemen.
//3.	Dalam algorithma sortir, jika data sudah ada beberapa yang berutan, maka algorithma mana yang harus dipilih ? Jelaskan mengapa.
//Jawab:
//1. Membandingkan mulai indeks terkecil sampe terbesar dengan membandingkan indeks pertama dan kedua jika indeks kedua lebih kecil maka digeser ke kiri dan indeks pertama ke kanan sampe nilai nya terurut jika nilai kanan lebih besar maka tidak diganti
//2. Membandingkan shell short semua indeks harus dibagi 3 setelah ketiga indeks yang telah dibagi dan telah tersusun dari kecil sampe terbesar maka akan digabungkan kembali dan dibagi 2 setelah disusun dari terkecil sampe terbesar gabungkan kembali jadi satu dan diurutkan kembali
//3. algorithma insertion sort karena indeks terkecil dipisahkan terlebih dahulu kemudian bandingkan dengan indeks 1 jika lebih besar maka posisi indeks 1 dikanan indeks 0 dan jika indeks selanjutnya lebih kecil maka dikiri indeks yang nilainya lebih kecil



#include <iostream>
using namespace std;

int shidqul[33];
int shidqul, n, j;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada shidqul : ";
        cin >> n;
        if (n <= 33)
            break;
        else {
            cout << "\nShidqul dapat mempunyai maksimal 33 elemen.\n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "Masukan Elemen Shidqul" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> shidqul[i];

    }

}

void bubbleSortArray() {
    for (j = 0, 0 <= n - 2; j++) { // step 1
        while (j >= 0 && shidqul[j] > )
        {





        }
    }
}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Shidqul yang telah tersusun" << endl;
    cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << shidqul[j] << endl; // Output setiap element shidqul pada garis baru

    }
    cout << "jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
}

int main()
{
    input();  //memanggil prosedur untuk menginput data
    bubbleSortArray();  //memanggil prosedur bubblesort untuk proses mengurutkan data
    display();//memanggil prosedur untuk menampilkan data yang telah urut
    system("pause");


    return 0;
}

    