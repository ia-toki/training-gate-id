# TLX Training Gate Berbahasa Indonesia

[![Build Status](https://travis-ci.org/ia-toki/training-gate-id.svg?branch=master)](https://travis-ci.org/ia-toki/training-gate-id)

## Daftar Isi
* [Tentang TLX Training Gate](#tentang-toki-training-gate)
* [Tujuan Dibuatnya TLX Training Gate](#tujuan-dibuatnya-toki-training-gate)
* [Silabus Pembelajaran](#silabus-pembelajaran)
* [Link Unduh](#link-unduh)
* [Setup Latex](#setup-latex)
* [Skema Kontribusi](#skema-kontribusi)
* [Lisensi](#lisensi)

## Tentang TLX Training Gate
Diinisiasi oleh Ikatan Alumni Tim Olimpiade Komputer Indonesia (IA TOKI), TLX Training Gate merupakan proyek e-learning untuk belajar pemrograman kompetitif yang ditujukan bagi pelajar Indonesia.

Training Gate sendiri terdiri dari sekumpulan materi pembelajaran dan soal latihan terpusat yang ditulis dalam Bahasa Indonesia, ke depannya akan diintegrasikan ke website ia-toki.org.

## Latar Belakang
Tidak semua sekolah di Indonesia mendapatkan pelajaran komputer tentang pemrograman, padahal setiap tahunnya ada banyak sekali kompetisi pemrograman bagi pelajar SMA/sederajat di Indonesia. Bahkan, terdapat Olimpiade Sains Nasional di bidang komputer dan International Olympiad in Informatics (IOI). Akibatnya, jawara dari ajang-ajang tersebut didominasi oleh siswa-siswi yang mendapat pelajaran pemrograman di sekolahnya. Meskipun sudah banyak beredar materi pembelajaran pemrograman di internet, masih jarang ada yang berbahasa Indonesia dan spesifik untuk mengarah ke kompetisi pemrograman.

## Tujuan dibuatnya TLX Training Gate
Sebagai tujuan jangka pendek: mempermudah siswa-siswi Indonesia untuk belajar pemrograman kompetitif secara mandiri.

Sebagai tujuan jangka panjang: diharapkan pengembangan TLX Training Gate dilakukan hingga materi pembelajaran lanjut, seperti materi Pelatihan Nasional (Pelatnas) TOKI. Dengan demikian, setiap siswa-siswi di Indonesia berkesempatan untuk mempelajari apa yang didapatkan saat Pelatnas TOKI.

## Silabus Pembelajaran

Saat ini, Training Gate hanya berisi sebuah topik (*course*): **Pemrograman Dasar**.

Topik Pemrograman Dasar ini terdiri dari beberapa bab. Setiap bab terdiri atas materi-materi yang diwujudkan dalam sebuah slide presentasi.

Berikut ini adalah bab-bab dalam silabus pembelajaran untuk topik Pemrograman Dasar, beserta materi-materi yang ada di dalamnya:

###1. Perkenalan

  * Perkenalan konsep pemrograman (memprogram, kompilasi, eksekusi)
  * Perkenalan dan instalasi Pascal
  * Perkenalan IDE dan instalasi
  * Program Hello World

###2. Variabel dan Tipe Data

  * Pengenalan konsep variabel
  * Tipe data sederhana
  * Tipe data buatan (struct)
  * Dekalarasi variabel

###3. Ekspresi dan Masukan/Keluaran

  * Ekspresi numerik
  * Ekspresi boolean (predikat)
  * Ekspresi relasional
  * Prioritas pengerjaan
  * Input output (read, readln, write, writeln)
  * Penjelasan tentang STDIO

###4. Penunjang Pemrograman Dasar

  * Komentar
  * Pesan kesalahan IDE
  * I/O redirection

###5. Percabangan

  * If ...
  * If ... else ...
  * If ... elseif ... else ...
  * case ... of ...
  * Pengenalan tentang blok "begin ... end"

###6. Perulangan

  * Pengulangan dengan pencacah (for)
  * Pengulangan dengan kondisi awal (while)
  * Pengulangan dengan kondisi akhir (repeat until)

###7. Perulangan Lanjut

  * Break & continue
  * Perulangan berlapis

###8. Analisis Kompleksitas

  * Pengenalan Big-Oh sederhana
  * Penjelasan tentang apa pentingnya menghitung kompleksitas

###9. Array

  * Konsep array
  * Deklarasi Array
  * Mengisi array (baca)
  * Menulis isi array (tulis)
  * Array multidimensi

###10. Fungsi dan Prosedur

  * Prosedur
  * Fungsi
  * Scope
  * Parameter dan passing parameter

###11. Pendalaman String

  * Penjelasan bahwa string pada Pascal merupakan array of char
  * Fungsi-fungsi dasar pada string (length, copy, delete, insert, pos, str, val)

###12. Pencarian

  * Linear search
  * Binary search
  * Analisis kompleksitas

###13. Pengurutan Dasar

  * Bubble sort
  * Insertion sort
  * Selection sort
  * Analisis kompleksitas
  * Kapan menggunakan insertion sort, kapan selection sort, dsb

###14. Rekursi

  * Mengapa perlu ada rekursi
  * Rekursi tanpa cabang
  * Analsis kompleksitas

###15. Rekursi Lanjut

  * Rekursi dengan cabang
  * Analsis kompleksitas

## Link Unduh
Materi dalam bentuk PDF yang sejauh ini sudah dibuat bisa diakses [di sini](https://github.com/ia-toki/training-gate-id-pdf/archive/master.zip).

## Setup Latex

Jika Anda tertarik untuk mengembangkan atau memodifikasi TLX Training Gate, Anda perlu memasang Latex pada sistem Anda. Lakukan langkah-langkah berikut.

1. Install Latex. Sebagai contoh, pada Linux Anda dapat meng-install `texlive`. Pada OS X, Anda dapat meng-install `mactex`.
2. Install `latexmk`, setidaknya versi 4.35.
3. Clone repository ini.
4. Jalankan script `setup.sh` dengan akses root. Script ini akan meng-install theme beamer bernama tokitex dan meng-install package CTAN yang dibutuhkan.
5. Untuk mencoba melakukan kompilasi, cd ke folder repository TLX Training Gate Anda, lalu jalankan `make`.
6. Setelah dijalankan, akan muncul sebuah folder bernama `target` yang berisi berkas hasil kompilasi. Selain berkas PDF terdapat pula berkas lainnya yang bisa Anda abaikan. Apabila seluruh PDF ter-compile dengan benar, berarti Anda sudah melakukan setup Latex untuk TLX Training Gate dengan benar.

## Skema Kontribusi

Baca sepenuhnya [di sini](https://github.com/ia-toki/training-gate-id/blob/master/CONTRIBUTING.md).

## Lisensi

<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License</a>.

Hal ini berarti:

- **Share**: Anda bebas untuk menggunakan dan mendistribusikan materi-materi ini pada media dan bentuk apapun.
- **Adapt**: Anda bebas untuk memodifikasi materi-materi ini pada penggunaannya.

Dengan ketentuan sebagai berikut:

- **Attribution**: Apabila Anda menggunakan materi-materi ini, Anda harus memberikan *credit* kepada **Ikatan Alumni TOKI**.
- **NonCommercial**: Anda tidak boleh menggunakan materi-materi ini untuk keperluan komersial.
- **ShareAlike**: Apabila Anda memodifikasi materi-materi ini, Anda harus mendistribusikannya kembali dengan lisensi yang sama. Hal ini dapat dilakukan dengan cara melakukan *fork* repositori ini dan melakukan *commit* modifikasi-modifikasi yang Anda lakukan di sana.

Untuk penjelasan lebih lanjut mengenai lisensi ini, silakan membuka tautan lisensi di atas.
