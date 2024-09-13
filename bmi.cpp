#include <iostream>
using namespace std;

// Fungsi untuk mengkonversi Celsius ke Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

// Fungsi untuk mengkonversi Fahrenheit ke Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0/9.0;
}

int main() {
    double suhuAwal, suhuAkhir;
    int pilihan;
    char lanjut;

    do {
        cout << "Program untuk Menghitung Perubahan Suhu\n";
        cout << "Pilih jenis konversi suhu:\n";
        cout << "1. Celsius ke Fahrenheit\n";
        cout << "2. Fahrenheit ke Celsius\n";
        cout << "Masukkan pilihan (1 atau 2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            // Konversi dari Celsius ke Fahrenheit
            cout << "Masukkan suhu awal dalam Celsius: ";
            cin >> suhuAwal;
            suhuAkhir = celsiusToFahrenheit(suhuAwal);
            cout << "Suhu dalam Fahrenheit: " << suhuAkhir << "°F\n";
        } else if (pilihan == 2) {
            // Konversi dari Fahrenheit ke Celsius
            cout << "Masukkan suhu awal dalam Fahrenheit: ";
            cin >> suhuAwal;
            suhuAkhir = fahrenheitToCelsius(suhuAwal);
            cout << "Suhu dalam Celsius: " << suhuAkhir << "°C\n";
        } else {
            cout << "Pilihan tidak valid.\n";
        }

        // Tanyakan apakah ingin input lagi
        cout << "Apakah ingin memberikan inputan lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terima kasih telah menggunakan program ini!\n";

    return 0;
}
