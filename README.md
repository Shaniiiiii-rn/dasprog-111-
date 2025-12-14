# Demonstrasi Proyek Mata Kuliah Dasar Pemrograman: Toolkit Lengkap Asisten Laboratorium Elektro


## Identitas Kelompok
**Dosen Pengampu: Arta Kusuma Hernanda, S.T., M.T.** 

Kelompok: **6**

| No | Nama | NRP | Program Studi |
|----|------|-------------|----------------|
| 1  | Shania Rahmatun Nazwa |5022251042| Teknik Elektro |
| 2  | Novita Salsabila |5022251052 | Teknik Elektro |
| 3  | Moch. Damar Unggul Prayogo | 5022251096 | Teknik Elektro |
| 4  | Abdullah Fathan Syauqi | 5022251086 | Teknik Elektro |

---
## Deskripsi Program 📌

Pada proyek mata kuliah Dasar Pemrograman ini berisikan toolkit lengkap sebagai alat bantu menghitung dan mengonversi dalam keperluan asistensi Laboratorium pada Departemen Teknik Elektro. Berikut adalah penjelasan pada tiap toolkit yang ada pada program yang telah dibuat.

### 1. Tampilan Menu
Pada bagian pertama, tampilan menu berfungsi sebagai tampilan paling awal yang memiliki peran penting dalam memilih dan menginisialisasi suatu program melalui perintah tertentu, dalam tampilan menu ini ialah input bilangan 1 - 9. Berikut adalah output dari Tampilan Menu yang telah dibuat.

```
===SELAMAT DATANG DI PROGRAM SERBABISA DASPROG!===

Silahkan pilih fitur yang ingin anda jalani!

---Kalkulator Rangkaian Listrik---
1. Kalkulator Hukum Ohm (V = I . R)
2. Kalkulator Daya Listrik (P = V. I)
3. Kalkulator Resistor Seri
4. Kalkulator Resistor Paralel

---Utilitas Sistem Digital---
5. Konversi Desimal -> Biner, Oktal, Heksadesimal
6. Konversi Biner -> Desimal
7. Konversi Oktal -> Desimal
8. Konversi Heksadesimal -> Desimal
9. Keluar

Silahkan pilih angka (1 - 9):
```

### 2. Kalkulator Rangkaian Listrik 🔌
#### 1. Kalkulator Hukum Ohm (V = I . R)
  Fitur ini digunakan untuk memverifikasi perhitungan tegangan listrik pada rangkaian DC sederhana berdasarkan Hukum Ohm. Pengguna diminta memasukkan nilai arus listrik dan hambatan, kemudian program akan menghitung besar tegangan yang dihasilkan. Kegunaan utama fitur ini adalah membantu praktikan memastikan hasil perhitungan manual sebelum digunakan dalam laporan atau analisis rangkaian.
Rumus yang digunakan:
```
V = I × R
Keterangan:
- V : Tegangan (Volt)
- I : Arus listrik (Ampere)
- R : Hambatan (Ohm)
```
#### 2. Kalkulator Daya Listrik
  Fitur ini berfungsi untuk menghitung daya listrik yang terdisipasi pada suatu komponen atau rangkaian. Program meminta input nilai tegangan dan arus, lalu menghitung daya berdasarkan rumus dasar daya listrik. Fitur ini sangat berguna dalam analisis konsumsi daya dan evaluasi keamanan komponen listrik pada rangkaian DC.
Rumus yang digunakan:
```
P = V × I
Keterangan:
- P : Daya listrik (Watt)
- V : Tegangan (Volt)
- I : Arus listrik (Ampere)
```
#### 3. Kalkulator Resistor Seri
  Fitur ini digunakan untuk menghitung hambatan ekivalen dari beberapa resistor yang dirangkai secara seri. Pengguna diminta memasukkan jumlah resistor, kemudian nilai masing-masing resistor satu per satu. Program akan menjumlahkan seluruh nilai hambatan untuk memperoleh nilai total hambatan rangkaian seri. Fitur ini membantu praktikan dalam menganalisis rangkaian resistif sederhana secara cepat dan akurat.
Rumus yang digunakan:
```
Rtotal = R1 + R2 + ... + Rn
Keterangan:
-R1 = Resistor ke-1
-R2 = Resistor ke-2
-Rn = Resistor ke-n
```
#### 4. Kalkulator Resistor Paralel
  Fitur ini dirancang untuk menghitung hambatan ekivalen dari beberapa resistor yang dirangkai secara paralel. Dalam rangkaian paralel, hambatan total tidak diperoleh dari penjumlahan langsung, melainkan dari penjumlahan kebalikan setiap hambatan. Pada implementasi konseptual sesuai spesifikasi tugas, program akan meminta jumlah resistor, kemudian secara berulang meminta nilai setiap resistor. 
  Setiap nilai hambatan akan dikonversi ke bentuk kebalikannya (1/R), dijumlahkan, lalu hasil akhirnya dibalik kembali untuk memperoleh hambatan total paralel. Fitur ini sangat penting dalam praktikum rangkaian listrik karena rangkaian paralel seringdigunakan untuk analisis pembagian arus dan karakteristik beban.
Rumus yang digunakan:
```
                     1
Rtotal = --------------------------  
         (1/R1 + 1/R2 + ... + 1/Rn)
Keterangan:
-R1 = Resistor ke-1
-R2 = Resistor ke-2
-Rn = Resistor ke-n
```
### 3. Utilitas Sistem Digital💻 
#### 1. Konversi Desimal → Biner, Oktal, dan Heksadesimal
Fitur ini mengonversi satu bilangan desimal ke dalam tiga sistem bilangan lain secara bersamaan, yaitu biner (basis 2), oktal (basis 8), dan heksadesimal (basis 16).
Konversi dilakukan menggunakan algoritma sisa pembagian, sehingga hasil konversi diperoleh secara sistematis dan sesuai dengan konsep sistem bilangan pada rangkaian digital.
Fitur ini sangat membantu praktikan dalam proses debugging dan analisis data digital.

#### 2. Konversi Biner → Desimal
Fitur ini digunakan untuk mengonversi bilangan biner ke dalam bentuk desimal. Input bilangan biner dimasukkan dalam bentuk string untuk memastikan setiap digit dapat divalidasi.
Program menggunakan metode posisional dan bit shifting, sehingga konversi dilakukan secara efisien dan akurat. Jika ditemukan digit selain 0 atau 1, program akan menampilkan pesan kesalahan.

#### 3. Konversi Oktal → Desimal
Fitur ini mengonversi bilangan oktal ke desimal dengan melakukan validasi digit (hanya 0 hingga 7). Jika input tidak valid, program akan memberikan peringatan kepada pengguna.
Konversi dilakukan menggunakan prinsip sistem bilangan berbasis 8 dan operasi perpangkatan.

#### 4. Konversi Heksadesimal → Desimal
Fitur ini memungkinkan pengguna mengonversi bilangan heksadesimal ke desimal. Input dibaca menggunakan format heksadesimal sehingga karakter A–F dapat diproses dengan benar.
Fitur ini sangat relevan dalam analisis data digital, alamat memori, dan representasi data pada sistem komputer.
