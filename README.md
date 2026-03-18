
# SEKURO 25 Tugas 1 Divisi Programming

> Tenggat Waktu : **Jumat, 21 Maret pukul 23.59 WIB**

### *[PERINGATAN]*
- Silahkan klik "Use This Template" pada repo ini, lalu buatlah repository baru dengan format SEKURO_TUGAS_1_{Nama}_PROGRAMMING. Selain itu, Cakru *WAJIB* mengubah repository visibility menjadi public agar dapat dinilai. Pengumpulan repository yang private tidak akan diberikan nilai.
- Soal-soal berikut ini dapat diakses pada folder `soal`. Untuk pengumpulan, masukkan jawaban ke folder `src`. Berikut adalah contoh format cara menyimpan jawaban:

![alt text](bin/contoh.png)

## ROS 2
Tugas ini akan mengevaluasi semua pengetahuan Cakru mengenai materi yang kalian pelajari pada Day 1 SEKURO 18 mengenai ROS 2. Penggunaan AI diperbolehkan, tetapi kami berharap Cakru tidak menggunakan AI secara penuh dalam mengerjakan tugas ini dan memanfaatkan materi yang telah diberikan agar Cakru benar-benar memahaminya.

1) Buatlah sebuah workspace ROS2 dengan sebuah package didalamnya (penamaan dibebaskan). Package tersebut akan mengandung program ROS2 yang mengandung seminimalnya satu publisher node, satu subscriber node, dan satu topic. Program ROS2 boleh dibuat sekreatif mungkin, tetapi minimal terdapat komunikasi antara node publisher dan node subscriber tersebut.
2) Jelaskan cara kerja program dari proses build hingga menghasilkan output, serta struktur folder workspace. Selain itu, jelaskan node dan topic yang sedang berjalan, informasi dari node dan topic tersebut, dan isi pesan dari topic yang telah dibuat. Rekam penjelasan dalam bentuk video dengan durasi maksimal 5 menit. Pastikan suara Cakru terdengar dengan jelas sepanjang video. Cakru tidak diwajibkan untuk menampilkan muka pada rekaman tersebut.


## Standard Template Library C++

### Robot Penjaga Gudang
> Gunakanlah <code>std::vector</code> dan <code>std::map</code> untuk mengerjakan soal ini

Sebuah robot penjaga gudang bergerak di sepanjang koridor lurus. Di koridor tersebut terdapat n buah paket yang diletakkan di berbagai titik koordinat x. Setiap paket memiliki sebuah ID Kategori (angka bulat).

Robot memulai perjalanannya dari koordinat terkecil yang memiliki paket dan bergerak hanya ke arah kanan (koordinat x yang semakin besar).

Robot memiliki misi untuk mengambil paket sebanyak mungkin. Namun, robot memiliki keterbatasan memori: Robot tidak boleh mengambil paket dengan kategori yang sudah pernah ia ambil sebelumnya.

**Tentukan berapa banyak paket maksimal yang bisa diambil oleh robot!**

### Format Input

Baris pertama berisi satu integer n (1≤n≤10^5) — jumlah paket.

Baris kedua berisi n integer xi(−10^9≤xi≤10^9) — posisi koordinat tiap paket.

Baris ketiga berisi n integer ci(1≤ci≤10^9) — ID kategori tiap paket.

### Format Output
Cetak satu bilangan bulat yang menyatakan jumlah paket maksimal yang dapat diambil.

### Contoh 1:

INPUT:

![alt text](bin/inputcpp1.png)

OUTPUT:

![alt text](bin/outputcpp1.png)

### Contoh 2:

INPUT:

![alt text](bin/inputcpp2.png)

OUTPUT:

![alt text](bin/outputcpp2.png)

## OOP

1) Lengkapilah file [core_mcu.cpp](src/soal_1_oop/core_mcu.cpp) serta [core_mcu.hpp](src/soal_1_oop/core_mcu.hpp) yang terdapat pada folder `soal`. Implementasikan kelas Core_MCU yang terdapat pada file-file tersebut agar `main.cpp` dapat dijalankan dengan output yang tertera di bawah ini! 

![alt text](bin/no1_oop.png)

*[TIPS]*: Pelajarilah cara menggunakan konstruktor dan destruktor. Untuk soal ini, Cakru dapat untuk meng-compile program menggunakan g++ untuk mendapatkan outputnya.

2) Lengkapi dan implementasikan file-file berikut agar `main.cpp` dapat dijalankan dan menghasilkan output seperti pada gambar di bawah ini. Gunakanlah prinsip-prinsip inheritance, virtualization, serta static. 
- [mcu.cpp](src/soal_2_oop/mcu.cpp)
- [mcu.hpp](src/soal_2_oop/mcu.cpp)
- [mcu_walker.cpp](src/soal_2_oop/mcu_walker.cpp)
- [mcu_walker.hpp](src/soal_2_oop/mcu_walker.hpp)
- [mcu_cam_controller.cpp](src/soal_2_oop/mcu_walker.cpp)

*[PERINGATAN]* [main.cpp](src/soal_2_oop/main.cpp) dilarang untuk diubah dihapus ataupun diedit.

Berikut output yang diharapkan:
![alt text](bin/no2_oop.png)

## CMAKE
- Modifikasilah struktur folder pada soal nomor 2 bagian OOP berikut [soal_2_oop](soal/soal_2_oop/) dengan menyalin seluruh file terkait ke dalam direktori folder jawaban Anda lalu atur strukturnya sesuai dengan gambar di bawah ini: 

![alt text](bin/no_cmake.png)

Selanjutnya, lengkapi file [CMakeLists.txt](soal/soal_cmake/CMakeLists.txt) yang tersedia. Pastikan konfigurasi CMake dapat menghasilkan file eksekusi (.exe) di dalam folder ***bin*** setelah proses build selesai.


---

# GOOD LUCK !!!
