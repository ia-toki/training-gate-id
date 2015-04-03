# TOKI Training Gate Berbahasa Indonesia

[![Build Status](https://travis-ci.org/ia-toki/training-gate-id.svg?branch=master)](https://travis-ci.org/ia-toki/training-gate-id)

## Daftar Isi
* [Tentang TOKI Training Gate](#tentang-toki-training-gate)
* [Tujuan Dibuatnya TOKI Training Gate](#tujuan-dibuatnya-toki-training-gate)
* [Silabus Pembelajaran](#silabus-pembelajaran)
* [Link Unduh](#link-unduh)
* [Setup Latex](#setup-latex)
* [Skema Kontribusi](#skema-kontribusi)
* [Lisensi](#lisensi)

## Tentang TOKI Training Gate
Diinisiasi oleh Ikatan Alumni Tim Olimpiade Komputer Indonesia (IA TOKI), TOKI Training Gate merupakan proyek e-learning untuk belajar pemrograman kompetitif yang ditujukan bagi pelajar Indonesia.

Training Gate sendiri terdiri dari sekumpulan materi pembelajaran dan soal latihan terpusat yang ditulis dalam Bahasa Indonesia, ke depannya akan diintegrasikan ke website ia-toki.org.

## Latar Belakang
Tidak semua sekolah di Indonesia mendapatkan pelajaran komputer tentang pemrograman, padahal setiap tahunnya ada banyak sekali kompetisi pemrograman bagi pelajar SMA/sederajat di Indonesia. Bahkan, terdapat Olimpiade Sains Nasional di bidang komputer dan International Olympiad in Informatics (IOI). Akibatnya, jawara dari ajang-ajang tersebut didominasi oleh siswa-siswi yang mendapat pelajaran pemrograman di sekolahnya. Meskipun sudah banyak beredar materi pembelajaran pemrograman di internet, masih jarang ada yang berbahasa Indonesia dan spesifik untuk mengarah ke kompetisi pemrograman.

## Tujuan dibuatnya TOKI Training Gate
Sebagai tujuan jangka pendek: mempermudah siswa-siswi Indonesia untuk belajar pemrograman kompetitif secara mandiri.

Sebagai tujuan jangka panjang: diharapkan pengembangan TOKI Training Gate dilakukan hingga materi pembelajaran lanjut, seperti materi Pelatihan Nasional (Pelatnas) TOKI. Dengan demikian, setiap siswa-siswi di Indonesia berkesempatan untuk mempelajari apa yang didapatkan saat Pelatnas TOKI.

## Silabus Pembelajaran

Training Gate pemrograman dasar ini terdiri dari beberapa sesi. Setiap sesi terdiri dari beberapa materi yang masing-masing diwujudkan dalam sebuah slide presentasi. Setiap slide presentasi berisi subtopik-subtopik yang mewakili materi tersebut. Struktur ini dituliskan dalam bentuk:

>###1. Sesi
>
>  1. Materi
>
>    * subtopik 1
>    * subtopik 2
>    * ...

Berikut silabus pembelajaran untuk Training Gate pemrograman dasar:

###1. Perkenalan Pemrograman dan Lingkungan Pemrograman

  1. Perkenalan

    * Perkenalan konsep pemrograman (memprogram, kompilasi, eksekusi)
    * Perkenalan dan instalasi Pascal
    * Perkenalan IDE dan instalasi
    * Program Hello World

###2. Variabel, tipe data, IO

  1. Variabel dan Tipe Data

    * Pengenalan konsep variabel
    * Tipe data sederhana
    * Tipe data buatan (struct)
    * Dekalarasi variabel

  2. Ekspresi dan IO

    * Ekspresi numerik
    * Ekspresi boolean (predikat)
    * Ekspresi relasional
    * Prioritas pengerjaan
    * Input output (read, readln, write, writeln)
    * Penjelasan tentang STDIO

###3. Penunjang Pemrograman Dasar

  1. Penunjang Pemrograman Dasar

    * Komentar
    * Pesan kesalahan IDE
    * I/O redirection

###4. Percabangan

  1. Percabangan

    * If ...
    * If ... else ...
    * If ... elseif ... else ...
    * case ... of ...
    * Pengenalan tentang blok "begin ... end"

###5. Pengulangan
  1. Pengenalan Pengulangan

    * Pengulangan dengan pencacah (for)
    * Pengulangan dengan kondisi awal (while)
    * Pengulangan dengan kondisi akhir (repeat until)

  2. Pengulangan Lanjut

    * Break & continue
    * Perulangan berlapis

  3. Analisis Kompleksitas

    * Pengenalan Big-Oh sederhana
    * Penjelasan tentang apa pentingnya menghitung kompleksitas

###6. Array
  1. Pengenalan Array

    * Konsep array
    * Deklarasi Array
    * Mengisi array (baca)
    * Menulis isi  array (tulis)
    * Array multidimensi

###7. Subprogram

  1. Fungsi dan Prosedur

    * Prosedur
    * Fungsi
    * Scope
    * Parameter dan passing parameter

###8. String

  1. Pendalaman String

    * Penjelasan bahwa string pada Pascal merupakan array of char
    * Fungsi-fungsi dasar pada string (length, copy, delete, insert, pos, str, val)

###9. Pencarian dan Pengurutan Dasar

  1. Pencarian

    * Linear search
    * Binary search
    * Analisis kompleksitas

  2. Pengurutan Dasar

    * Bubble sort
    * Insertion sort
    * Selection sort
    * Analisis kompleksitas
    * Kapan menggunakan insertion sort, kapan selection sort, dsb

###10. Rekursi

  1. Pengenalan Rekursi

    * Mengapa perlu ada rekursi
    * Rekursi tanpa cabang
    * Analsis kompleksitas

  2. Rekursi Lanjutan

    * Rekursi dengan cabang
    * Analsis kompleksitas

###11. Pengurutan Lanjut

  1. Merge Sort

    * Mengapa perlu ada merge sort
    * Konsep algoritma
    * Contoh kode
    * Analisis kompleksitas

  2. Quick Sort

    * Mengapa perlu ada quick sort
    * Konsep algoritma
    * Contoh kode
    * Analisis kompleksitas, bandingkan dengan merge sort

## Link Unduh
Materi dalam bentuk pdf yang sejauh ini sudah dibuat bisa diakses [di sini](https://www.dropbox.com/sh/9v7anrmpd7rr6qz/AAA1tiAqBNinWl7LJ5dR9c01a?dl=0).

## Setup Latex

Jika Anda tertarik untuk mengembangkan atau memodifikasi TOKI Training Gate, Anda perlu memasang Latex pada sistem Anda. Lakukan langkah-langkah berikut.

1. Install Latex. Sebagai contoh, pada Linux Anda dapat meng-install texlive. Pada OS X, Anda dapat meng-install mactex.
2. Install latexmk, setidaknya versi 4.35.
3. Clone repository ini.
4. Jalankan script install_tokitex.sh dengan akses root. Script ini akan meng-install theme beamer bernama tokitex.
5. Untuk mencoba melakukan kompilasi, cd ke folder repository TOKI Training Gate Anda, lalu jalankan `make`.
6. Setelah dijalankan, akan muncul sebuah folder benama "target" yang berisi berkas hasil kompilasi. Selain berkas PDF terdapat pula berkas lainnya yang bisa Anda abaikan. Apabila seluruh PDF ter-compile dengan benar, berarti Anda sudah melakukan setup Latex untuk TOKI Training Gate dengan benar. 

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
