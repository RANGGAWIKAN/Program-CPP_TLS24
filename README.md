1.Library yang digunakan:
-cmath: Untuk fungsi pow(), yang digunakan untuk menghitung kuadrat dari tinggi badan.
-iomanip: Sebenarnya tidak digunakan langsung di sini, namun jika ingin menggunakan std::cout untuk output dengan format, bisa menambahkan library ini untuk mengatur presisi output.
-cstdio: Digunakan untuk fungsi scanf dan printf, sebagai alternatif dari iostream untuk input dan output.

2.Input:
Program menggunakan scanf untuk mengambil input dari pengguna untuk berat badan (dalam kilogram) dan tinggi badan (dalam meter).

3.Proses Perhitungan:
Program menghitung BMI menggunakan rumus standar:
BMI = berat/tinggi^2
 
4.Output:
-Output ditampilkan menggunakan printf dengan format %.2f untuk menampilkan angka desimal hingga 2 tempat.
-Program juga memberikan kategori BMI berdasarkan hasil perhitungan.
