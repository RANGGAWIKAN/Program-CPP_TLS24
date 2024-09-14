#include <cmath>    // Untuk fungsi pow()
#include <iomanip>  // Untuk setprecision
#include <cstdio>   // Untuk fungsi printf()

int main() {
    double berat, tinggi, bmi;

    // Meminta input menggunakan scanf dari library cstdio
    printf("Masukkan berat badan Anda (kg): ");
    scanf("%lf", &berat);

    printf("Masukkan tinggi badan Anda (meter): ");
    scanf("%lf", &tinggi);

    // Menghitung BMI
    bmi = berat / pow(tinggi, 2);

    // Menampilkan hasil BMI dengan dua angka di belakang koma
    printf("BMI Anda adalah: %.2f\n", bmi);

    // Menampilkan kategori BMI
    if (bmi < 18.5) {
        printf("Anda berada dalam kategori: Berat badan kurang.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Anda berada dalam kategori: Berat badan normal.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Anda berada dalam kategori: Berat badan berlebih.\n");
    } else {
        printf("Anda berada dalam kategori: Obesitas.\n");
    }

    return 0;
}
