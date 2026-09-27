# Foodie Special ID Generator

## Deskripsi Singkat

Program ini menerima 4 data masukan dari pengguna melalui terminal (Nama, Makanan, Umur, Tanggal Lahir), lalu mengolahnya menjadi satu ID unik berupa kombinasi huruf dan angka. Pengolahan melibatkan manipulasi nilai ASCII dari karakter nama dan makanan, operasi aritmatika pada umur, serta pengolahan data tanggal lahir. Seluruh bagian ID kemudian digabungkan menjadi satu string utuh menggunakan fungsi `sprintf()`.

## Format Susunan ID

`[FS] [C1] [C2] [DD] [MM] [YY] [UU] [M]`

| Bagian | FS | C1 | C2 | DD | MM | YY | UU | M |
|---|---|---|---|---|---|---|---|---|
| Keterangan | Kode tetap | Huruf pertama nama | Huruf kedua nama | Tanggal lahir | Bulan lahir | 2 digit tahun | Hasil perhitungan umur | Inisial makanan |

Total karakter menyesuaikan panjang nama makanan yang diinput.

## Alur Pengolahan Data

1. **FS** — kode tetap `"FS"` sebagai identitas Foodie Special ID.
2. **C1** — huruf pertama nama diubah menjadi huruf kapital menggunakan nilai ASCII jika awalnya berupa huruf kecil.
3. **C2** — huruf kedua nama diubah menjadi huruf kapital menggunakan nilai ASCII jika awalnya berupa huruf kecil.
4. **DD** — menggunakan nilai `Tanggal_Lahir` yang dimasukkan oleh pengguna dan ditampilkan dalam format 2 digit menggunakan `02d`.
5. **MM** — menggunakan nilai `Bulan_Lahir` dan ditampilkan dalam format 2 digit menggunakan `%02d`.
6. **YY** — dua digit terakhir dari `Tahun_Lahir` diperoleh menggunakan operasi `% 100`.
7. **UU** — nilai umur diolah menggunakan operasi `1000 - Umur`.
8. **M** — mengambil huruf pertama dari setiap kata pada `Makanan` dengan mendeteksi karakter yang berada setelah spasi menggunakan `for` dan `if`.
9. Kedelapan bagian di atas digabungkan secara berurutan lewat `sprintf()` menjadi satu ID final.

# Hasil Running Code
<img width="959" height="505" alt="Screenshot 2026-09-26 104233" src="https://github.com/nnayottamaa/Foodie-Special-ID-Generator/blob/main/Screenshot%202026-09-27%20150041.png" />
