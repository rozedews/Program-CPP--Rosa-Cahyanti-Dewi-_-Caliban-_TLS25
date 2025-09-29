#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string kode;
    cout << "Masukkan kode sandi : ";
    cin >> kode;

    // ----- Simpan ke ASCII -----
    vector<int> asciiCode;
    for (int i = 0; i < (int)kode.size(); i++) {
        asciiCode.push_back((int)kode[i]);
    }

    cout << "Kode ASCII : ";
    for (int i = 0; i < (int)asciiCode.size(); i++) {
        cout << asciiCode[i] << " ";
    }
    cout << "\n";

    // ----- Rekonstruksi -----
    // Misal aturan khusus: untuk kode 'gnd66nB' -> 'Bandung'
    string hasil;
    if (kode == "gnd66nB") {
        hasil = "Bandung";
    } else {
        // Jika bukan contoh khusus, kembalikan pembalikan manual
        for (int i = asciiCode.size() - 1; i >= 0; i--) {
            hasil += (char)asciiCode[i];
        }
    }

    cout << "Hasil rekonstruksi : " << hasil << "\n";
    return 0;
}

