# Array

Struktur data sederhana yang dapat didefinisikan sebagai pemesanan alokasi memory sementara pada komputer. Array dapat didefinisikan sebagai suatu himpunan hingga elemen terurut (berurutan) dan homogen (tipe data sama).

## Karakteristik Array

<ol type="a">
  <li>Mempunyai batasan dari pemesanan alokasi memory (Statis)</li>
  <li>Mempunyai type data sama (homogen)</li>
  <li>Dapat diakses secara acak</li>
</ol>

Tiga hal yang harus diketahui dalam mendeklarasikan array:

<ol type="a">
  <li>Tipe data array</li>
  <li>Nama variable array</li>
  <li>Subskrip/index array</li>
</ol>

## Jenis Array

1. Array Dimensi Satu (One Dimensional Array)  
    Sebuah vektor yang menggambarkan data dalam suatu urutan

   Penggambaran secara logika:

   | Element Array   | A[1] | A[2] | A[3] | A[4] | A[5] |
   | --------------- | ---- | ---- | ---- | ---- | ---- |
   | Subscript/Index | 0    | 1    | 2    | 3    | 4    |

```txt
Pemetaan Array Dimensi 1__________________________

> Rumus: @A[i] = B + (i-1) * L

Keterangan:
@A[i]   : Posisi Array yang dicari
B       : Posisi awal index di memory komputer
I       : Subskrip/indeks array yang dicari
L       : Ukuran/Besar memory suatu type data
```

2. Array Dimensi Dua (Two Dimensional Array)  
   Untuk menterjemahkan matrik pada pemrograman

   Penggambaran secara logika:

   | y\x | 0       | 1       | 2       |
   | --- | ------- | ------- | ------- |
   | 0   | A[0][0] | A[1][0] | A[2][0] |
   | 1   | A[0][1] | A[1][1] | A[2][1] |
   | 2   | A[0][2] | A[1][2] | A[2][2] |

```txt
Pemetaan Array Dimensi 2__________________________

a. Secara Kolom per Kolom (Column Major Order/CMO)

    > @M[i][j] = M[0][0] + [(j-1) * K + (i-1)] * L

b. Secara Baris per Baris (Row Major Order/RMO)

    > @M[i][j] = M[0][0] + [(i-1) * N + (j-1)] * L

Keterangan:
@M[i][j] : Posisi Array yang dicari
M[0][0]  : Posisi alamat awal index
array,I  : Posisi alamat awal index
j        : kolom
L        : Ukuran memory type data
K        : Banyaknya elemen per kolom
N        : Banyaknya elemen per baris
```
