#include <iostream>
#include <string>
using namespace std;

int main() {
    const int green = 15;
    const int yellow = 8;
    const int red = 50;
    const int total = green + yellow + red; // 73 detik per siklus

    int waktu;
    cout << "Masukkan waktu (detik): ";
    cin >> waktu;

    // Hitung posisi dalam siklus
    int t = waktu % total;

    // Tentukan lampu dengan if singkat (maks 3 baris)
    string lampu = (t < green) ? "Hijau" :
                   (t < green + yellow) ? "Kuning" : "Merah";

    cout << "Lampu menyala: " << lampu << endl;
    return 0;
}

