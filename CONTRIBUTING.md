# Skema Kontribusi TOKI Training Gate

Setelah Anda membaca atau menggunakan TOKI Training Gate, Anda dapat berkontribusi dalam pengembangannya. 
Sebelum mulai berkontribusi, mohon baca dokumen berikut supaya Anda mengerti dengan alur kontribusi, dan proyek ini dapat dikerjakan dengan lancar.

# Bentuk Kontribusi

Anda dapat berkontribusi dengan cara apapun. Contoh:

1. Menuliskan ulasan (*review*)
2. Memberikan masukan, misalnya ketika ada pembahasan materi yang kurang jelas
3. Melaporkan adanya penjelasan yang kurang tepat
4. Melaporkan kesalahan pengetikan
5. Mengerjakan isu terbuka (ditunjukkan dengan label *open*) yang diangkat orang lain (kontribusi Anda sangat dibutuhkan!)

Untuk kontribusi semacam poin 1 sampai poin 4, Anda perlu [menuliskan isu](#menuliskan-isu) terlebih dahulu. Tujuannya untuk mendiskusikan jalan keluar dan tindakan apa yang akan dilakukan setelah isu tersebut diangkat.

# Menuliskan Isu

Seluruh masukan yang Anda berikan dituliskan pada [GitHub Issue Tracker](https://github.com/ia-toki/training-gate-id/issues). Untuk menuliskan isu, Anda perlu memiliki akun [GitHub](http://github.com/). Beberapa hal yang perlu diperhatikan:

1. Periksa apakah isu yang akan Anda angkat sudah pernah dikerjakan. Caranya dengan mengacu pada [branch master](https://github.com/ia-toki/training-gate-id) dan memastikan isu yang akan Anda angkat masih perlu diselesaikan.
2. Periksa apakah isu yang serupa sudah pernah diangkat. Caranya dengan melihat daftar [GitHub Issue Tracker](https://github.com/ia-toki/training-gate-id/issues).

Tata cara penulisan isu:

1. Tulis isu dengan Bahasa Indonesia.
2. Judul isu merupakan garis besar tentang apa yang Anda angkat sebagai isu, tuliskan dengan singkat dan jelas. Khusus untuk isu yang menyangkut suatu materi, tulis dalam format "\<judul materi\>: \<isu Anda\>". Beberapa contoh penulisan isu: "Pencarian: tambahan contoh", "Pengulangan lanjut: perbaikan typo", "Tokitex error untuk penambahan gambar .TIFF".
3. Isi isu merupakan penjelasan tentang apa yang Anda angkat sebagai isu, tuliskan dengan jelas dan tidak ambigu (tidak menimbulkan pertanyaan dari kontributor lainnya). Jika isu yang diangkat mengacu pada suatu materi, tuliskan di slide ke berapa. Jika mengacu pada penulisan kata-kata, tuliskan di mana kata tersebut muncul. Jika isu yang diangkat adalah penulisan materi baru, cukup tuliskan secara garis besar apa yang akan Anda tulis.

Setelah isu dituliskan, kontributor dari IA TOKI akan menanggapi masukan Anda dan membahasnya pada isu yang Anda tambahkan. Hasil akhir dari pembahasan adalah keputusan apakah masukan tersebut akan diimplementasikan pada TOKI Training Gate. Jika diputuskan bahwa masukan itu akan diimplementasikan, Anda boleh memutuskan apakah Anda yang akan mengimplementasikannya atau tidak. Jika ya, ikuti [tata cara implementasi](#tata-cara-implementasi). Jika tidak, isu tersebut akan menjadi *open issue* dan dapat dikerjakan oleh kontributor lainnya (mengacu pada poin 5 pada [bentuk kontribusi](#bentuk-kontribusi)).

# Tata Cara Implementasi

Anda diharapkan paham perintah-perintah dasar git seperti clone, checkout, branch, add, commit, push, dan pull. Tutorial penggunaan git sudah banyak beredar di internet. Salah satu yang singkat dan mudah dipahami: https://try.github.io/levels/1/challenges/1

Selain itu, Anda juga diharapkan memiliki pengetahuan tentang penulisan materi dengan [Latex](http://latex-project.org/guides/).

Jika Anda baru pertama kali akan melakukan kontribusi, lakukan langkah-langkah berikut:

1. Fork repository TOKI Training Gate dengan pergi ke [halaman utama](https://github.com/ia-toki/training-gate-id), lalu pilih fork di ujung kanan atas.
2. Pilih username Anda untuk melakukan fork.
3. Lakukan clone terhadap repository yang sudah Anda fork, dengan mengetikkan `git clone https://github.com/<username Anda>/training-gate-id.git`.
4. Lakukan `git remote add upstream https://github.com/ia-toki/training-gate-id`. Perintah ini bertujuan untuk membuat sebuah remote bernama `upstream` yang merujuk pada repository TOKI Training Gate, sehingga Anda bisa melakukan pull dari repository TOKI Training Gate ke repository hasil fork Anda.

Setelah itu, Anda bisa mulai bekerja dengan:

1. Pastikan Anda berada di branch master. Caranya dengan mengetikkan perintah `git status` dan pastikan ada tulisan `On branch master`. Jika Anda belum berada di branch master, ketikkan `git checkout master`.
2. Checkout branch baru dengan cara mengetikkan `git checkout -b <nama branch>`. Gunakan nama branch dalam bahasa Inggris (*camelCase*), mudah dipahami, dan berkaitan dengan isu yang mau Anda selesaikan. Contoh nama branch: "addRecursiveExample", "modifyMergeSortMaterial".
3. Lakukan perubahan secukupnya. Anda bebas melakukan add, commit, atau push. Namun sebaiknya Anda tidak melakukan merge atau pull. Hal ini akan mengakibatkan struktur graph git menjadi kurang rapi. Ketimbang melakukan merge atau pull, lakukan rebase atau pull --rebase, atau tidak sama sekali.
4. Setelah Anda selesai mengerjakan, lakukan `git push origin <nama branch>`.
5. Kemudian lakukan pull request dengan:
 1. Pergi ke halaman [pull request](https://github.com/ia-toki/training-gate-id/pulls).
 2. Pilih `New pull request`.
 3. Kemudian pilih link `compare across forks`. 
 4. Pilih `base fork: ia-toki/training-gate-id`, `base: master`, `head fork: <username Anda>/training-gate-id`, dan `compare: <nama branch yang mau di-push>`. 
 5. Pilih `Create pull request`, isi judul dan penjelasan singkat tentang apa saja yang sudah Anda kerjakan, lalu pilih lagi `Create pull request`.
 6. Pastikan hasil push Anda lulus build dari Travis CI (jika tidak lulus, lihat pesan kesalahannya, perbaiki, lalu commit lagi).
6. Kontributor dari IA TOKI akan melakukan review terhadap perubahan yang Anda lakukan. Jika belum disepakati, perubahan Anda akan diberi ulasan dan Anda dapat memperbaikinya. Jika sudah disepakati, kontribusi Anda akan digunakan dan dimasukkan ke materi Training Gate.
7. Anda bisa kembali ke branch master dengan cara mengetikkan `git checkout master`. 
8. Jika kontribusi Anda sudah digabungkan dengan master, Anda bisa melakukan pull dengan mengetikkan `git pull upstream master` untuk mendapatkan perubahan dari repository TOKI Training Gate.

# Panduan Menulis

Pada pada beberapa materi, masih terdapat slide dengan judul <TODO: ...> (lihat daftar isu untuk mengetahui materi mana saja yang masuk dalam kategori ini). Artinya materi ini masih butuh pengembangan konten dan Anda bisa menambahkan konten sesuai petunjuk yang ditulis pada halaman tersebut. Tentu saja, Anda boleh menambahkan beberapa slide untuk materi tersebut. Selain pada materi yang mengandung <TODO: ...> dan konten wajib, boleh juga ditambahkan beberapa konten yang dirasa penting dan telah disepakati pada diskusi isu.

Untuk membuat tulisan konsisten antar materi, berikut konvensi yang ditetapkan:

1. Gunakan kata "Anda" (diawali huruf kapital) untuk merujuk pada pembaca, bukan "kamu", atau "kalian".
2. Gunakan kata "kita" untuk merujuk pada pembaca dan penulis.
3. Jangan ada penjelasan yang disampaikan dari sudut pandang orang pertama, seperti "saya akan menjelaskan bagaimana quick sort bekerja..." atau "penulis akan memberi contoh...".
4. Saat menulis kode sumber, ikuti [**panduan menulis kode**](#panduan-menulis-kode) yang telah ditetapkan.
5. Pada penjelasan:
    1. Rujuk nama identifier dengan menuliskan entitas tersebut dalam cetak tebal, contoh: **counter**, **isPrime**.
    2. Cetak tebal setiap istilah asing yang merupakan bagian dari bahasa pemrograman, contoh: **longint**, **function**, **if ... then**, **writeln**.
    3. Cetak miring setiap istilah asing lainnya, contoh: *default*, *infinite loop*, *compile error*.
    4. Bila ada istilah yang baru diperkenalkan, Anda boleh juga mencetak tebal dan membuatnya berwarna merah (dengan perintah \alert{}).
    5. Penekanan pada penjelasan bisa menggunakan cetak merah (dengan perintah \alert{}).
    6. Rujuk suatu perintah pada program dengan petik dua, contoh: "fpb := fpb(b, a mod b)".
6. Jika suatu topik dijelaskan pada beberapa slide, tambahkan "... (lanj.)" pada halaman slide berikutnya.
7. Jika Anda menambahkan gambar, masukkan gambar tersebut di folder aset materi yang bersangkutan. Masukkan juga berkas mentah gambar tersebut (misalnya .svg). Hindari hanya memasukkan gambar jadinya (misalnya .png atau .jpg) karena gambar tidak bisa diedit lagi (kecuali gambar tersebut memang screenshot). Lebih disarankan menggunakan .svg dan pengolah gambar [inkscape](https://inkscape.org/).  

# Panduan Menulis Kode

Untuk menjaga konsistensi kode-kode antar materi, gunakan cara penulisan kode berikut.

## Umum

1. Gunakan nama identifier (variabel, fungsi, dsb) dalam bahasa Indonesia.
2. Tuliskan identifier dalam *camelCase*, contoh: nilaiAkhir, cariNilaiTengah.
3. Untuk penulisan komentar pada Pascal, usahakan menggunakan blok `(* komentar *)`.
4. Selalu gunakan tanda kurung pada kondisi `if`, `while`, dan `until`.
5. Gunakan indentasi berupa 2 spasi.

## Blok begin...end
Pada Bahasa Pascal, selalu gunakan blok `begin ... end` pada struktur percabangan dan pengulangan. Contoh:

```
if (i < 3) then begin
  ...
end else if (i < 5) then begin
  ...
end else begin
  ...
end

for i := 1 to N do begin
  ...
end;

while (i < 3) do begin
  ...
end;
```

## Penulisan Operasi
Gunakan spasi untuk setiap operasi. Contohnya `x := a + b;`, bukan `x:=a+b`. Untuk beberapa kasus khusus, jika pemberian spasi justru mempersulit pembacaan kode, maka spasi bisa dihilangkan. Contohnya `y := a*x*x + b*x + c`, ketimbang `y := a * x * x + b * x + c`.

## Penulisan Subprogram
Untuk penulisan subprogram, tuliskan menurut gaya seperti:

```
function cekPrima(x: longint): boolean
var
  i: longint;
begin
  ...
end;
```
