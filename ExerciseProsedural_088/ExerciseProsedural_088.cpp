#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menghitung rata-rata dari dua nilai
float hitungRataRata(float a, float b) {
    return (a + b) / 2;
}

// Prosedur untuk menampilkan nama dan status diterima/tidaknya
void tampilkanStatus(string nama, bool diterima) {
    if (diterima) {
        cout << nama << " diterima" << endl;
    }
    else {
        cout << nama << " tidak diterima" << endl;
    }
}

int main() {
    // Deklarasi variabel untuk nama dan nilai kandidat
    string nama[20];
    float nilaiMatematika[20], nilaiBahasaInggris[20];

    // Input data kandidat
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        getline(cin, nama[i]);

        cout << "Masukkan nilai matematika kandidat ke-" << i + 1 << ": ";
        cin >> nilaiMatematika[i];

        cout << "Masukkan nilai bahasa Inggris kandidat ke-" << i + 1 << ": ";
        cin >> nilaiBahasaInggris[i];

        cin.ignore();
    }

    // Deklarasi variabel untuk menghitung jumlah kandidat yang diterima
    int jumlahDiterima = 0;

    // Loop untuk mengecek setiap kandidat
    for (int i = 0; i < 20; i++) {
        float rataRata = hitungRataRata(nilaiMatematika[i], nilaiBahasaInggris[i]);
        if (rataRata >= 70 || nilaiMatematika[i] > 80) {
            tampilkanStatus(nama[i], true);
            jumlahDiterima++;
        }
        else {
            tampilkanStatus(nama[i], false);
        }
    }

    // Tampilkan jumlah kandidat yang diterima dan tidak diterima
    cout << "Jumlah kandidat yang diterima: " << jumlahDiterima << endl;
    cout << "Jumlah kandidat yang tidak diterima: " << 20 - jumlahDiterima << endl;

    return 0;
}
