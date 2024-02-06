# Data Representating

Komputer menggunakan dan memanipulasi data untuk perhitungan aritmatika, pemrosesan data, dan operasi logika. Tipe data yang digunakan dalam komputer digital diklasifiasikan:

1. Data Numerik  
   merepresentasikan integer, pecahan, real, dan desimal berkode biner
2. Data Logikal  
   Digunakan oleh operasi logika seperti OR, AND, COMPLEMENT, COMPARE dan SHIFT
3. Data Bit Tunggal  
   Digunakan oleh operasi seperti SET, CLEAR, dan TEST
4. Data Alfanumerik
   Digunalan untuk memanipulasi string oleh instruksi seperti MOVE dan SEARCH

<center>

```mermaid
flowchart LR
A[<b>Langkah 1</b>\n Ketikkan huruf A] --> B[<b>Langkah 2</b>\n Sinal elektronik huruf A\n dikirim ke unit pemrosesan]
B --> C[<b>Langkah 3</b>\n Sinyal elektronik huruf A\n dikonversi ke dalam kode\n biner ASCII 01000001\n dan disimpan dalam\n memori untuk diproses]
C --> D[<b>Langkah 4</b>\n Kode biner huruf A dikonversi\n ke dalam format citra dan\n ditampilkan melalui alat output]
D --> A

```

</center>

## Representasi Integer

Hanya bilangan biner yang dapat merepresentasikan bilangan integer direpresentasikan selain oleh nilai bilangannya dan tambahan tanfa (Signed Integer). Berikut tipe-tipe representasi integer:

1. Representasi Sing dan Magnitude  
    Merepresentasikan bilangan integer negatif. Bit yang paling kiri diidentifikasikan sebagai tanda (sign). Jika bit paling kiri adalah **nol** maka bilangan tersebut **positif**. Jika bit paling kiri adalah **satu** maka bilangan tersebut **negatif**.

   Contoh:
    <p>+18<sub>10</sub> = 00010010<sub>2</sub></p>
    <p>-18<sub>10</sub> = 10010010<sub>2</sub></p>

   **A. Penjumlahan** pada Sign-Magnitude mempunyai aturan:

   1. Sign tidak dijumlahan, hanya magnitude
   2. Buang carry out dari bit yang paling kiri
   3. Jumlahkan yang sign-nya sama
   4. Sign hasil = sign penambah

   Contoh penjumlahan 4 bit:

$$
   \begin{align*}
   &\hspace{0.5em}  \text{0 0010 (2)} \\
   &\hspace{0.5em}  \text{0 0101 (5)} \\
   &\text{─────── +}   \\
   &\hspace{0.5em}  \text{0 0111 (7)} \\
   \end{align*}
$$

$$
   \begin{align*}
   &\hspace{0.5em}  \text{1 1011 (-11)} \\
   &\hspace{0.5em}  \text{1 0100 (-4)} \\
   &\text{──────── +}   \\
   &\hspace{0.5em}  \text{1 1111 (-15)} \\
   \end{align*}
$$

**B. Pengurangan** pada Sign-magnitude mempunyai aturan:

1.  Lakukan pengurangan jika sign sama
2.  Jika sign tidak sama, ubah soal ke penjumlahan

Contoh pengurangan:

$$
   \begin{align*}
   &\hspace{0.5em}  \text{0 10100 (20)} \\
   - &\hspace{0.5em} \text{0 00101 (5)} \\
   \hline
   &\hspace{0.5em}  \text{0 01111 (15)} \\
   \end{align*}
$$

$$
   \begin{align*}
   &\hspace{0.5em}  \text{1 1011 (-11)} \\
   + &\hspace{0.5em}  \text{1 0100 (-4)} \\
   \hline
   &\hspace{0.5em}  \text{1 0111 (-7)} \\
   \end{align*}
$$

Kelemahan Sign-Magnitude:  
 Penambahan dan pengurangan memerlukan pertimbanggan baik tanda bilangan maupun nilai relatifnya. Ada dua representasi bilangan nol, yaitu

   <p>+0<sub>10</sub> = 00000000<sub>2</sub></p>
   <p>-0<sub>10</sub> = 10000000<sub>2</sub></p>

2. Representasi Komplemen Satu (One's Complement)  
   Komplemen pada dasarnya merubah bentuk pengurangan menjadi pertambahan. Komplementasi bilangan biner dengan cara mengubah 1 menjaddi 0 dan 0 menjadi 1. Contoh:
   <p align="center">00110110 = 11001001</p>

3. Representasi Komplemen Dua (Two's Complement)  
   Dibentuk dengan mengambil komplemen satu dari bilangannya dan dengan menambahkan 1 pada posisi paling kanan. Contoh desimal 49 (biner) menjadi bentuk komplemen dua:

$$
   \begin{align*}
   &\hspace{0.5em} \text{110001} \\
   &\hspace{0.5em} \text{001110} \quad \rightarrow \text{bentuk komplemen ke-1} \\
   &\hspace{0.5em} \quad \quad \text{ 1} \\
   &\text{────── +}   \\
   &\hspace{0.5em} \text{001111} \quad \rightarrow \text{bentuk komplemen ke-2} \\
   \end{align*}
$$

## Penjumlahan Biner

Penjumlahan bilangan biner dilakukan sama seperti penjumlahan bilangan desimal. Operasi pengurangan, perkalian dan pembagian seperti yang dilakukan pada komputer dan kalkulator digital sesungguhnya menggunakan penjumlahan sebagai operasi dasarnya.

Ada 4 kondisi dalam penjumlahan bilangan biner:  
0 + 0 = 0  
1 + 0 = 1  
0 + 1 = 1  
1 + 1 = 0 (_carry out_ 1)

_carry out_ menandakan hasilnya tidak bisa memuat lebih dari 1, tetapi disimpan ke dalam kolom sebelah yang lebih tinggi nilainya (digit paling kiri yang diabaikan)

### Penjumlahan Biner dengan Komplemen Dua

Ada beberapa kasus yang dapat dilakukan dengan komplemen dua:

1. **Kasus 1: Dua Bilangan Positif**  
   Penjumlahan dilakukan secara langsung

$$
   \begin{align*}
   &\hspace{0.9em}  \text{8} \quad\quad\quad\quad\quad\quad \text{1000} \\
   &\hspace{0.9em}  \text{4} \quad\quad\quad\quad\quad\quad \text{0100} \\
   &\text{─── +}  \quad \rightarrow \quad \text{──── +}  \\
   &\hspace{0.5em}  \text{12} \quad\quad\quad\quad\quad\quad \text{1100} \\
   \end{align*}
$$

2. **Kasus 2: Bilangan Positif dan Negatif yang lebih kecil**  
   Misal: 8 + (-4)  
   Bilangan -4 akan diubah ke dalam bentuk komplemen dua, sehingga biner 4 (0100) menjadi:

$$
   \begin{align*}
   &\hspace{0.5em} \text{1011} \quad \rightarrow \text{Komplemen satu} \\
   & - - - \\
   &\hspace{0.5em} \text{1011} \\
   &\hspace{2.1em} \text{1} \\
   &\text{──── +} \\
   &\hspace{0.5em} \text{1100} \quad \rightarrow \text{Komplemen dua} \\
   \end{align*}
$$

Jadi penjumlahannya adalah:

$$
   \begin{align*}
   &\hspace{0.9em}  \text{8} \hspace{6.9em} \text{1000} \\
   &\hspace{0.7em}  \text{-4} \hspace{6.9em} \text{1100} \\
   &\text{─── +}  \quad \rightarrow \quad \hspace{0.5em} \text{───── +}  \\
   &\hspace{1em}  \text{4} \hspace{6.2em} \text{1 0100} \quad \text{(digit paling kiri diabaikan)} \\
   \end{align*}
$$

3. **Kasus 3: Bilangan Positif dan Negatif yang lebih besar**  
   Misal: 8 + (-11)  
   Bilangan -11 akan diubah ke dalam bentuk komplemen dua, sehingga biner 11 (1101) menjadi:

$$
   \begin{align*}
   &\hspace{0.5em} \text{0010} \quad \rightarrow \text{Komplemen satu} \\
   & - - - \\
   &\hspace{0.5em} \text{0010} \\
   &\hspace{2.1em} \text{1} \\
   &\text{──── +} \\
   &\hspace{0.5em} \text{0011} \quad \rightarrow \text{Komplemen dua} \\
   \end{align*}
$$

Jadi penjumlahannya adalah:

$$
   \begin{align*}
   &\hspace{1.3em}  \text{8} \hspace{6em} \text{1000} \\
   &\hspace{0.5em}  \text{-11} \hspace{6em} \text{0011} \\
   &\text{─── +}  \quad \rightarrow \quad \hspace{0.5em} \text{──── +}  \\
   &\hspace{1em}  \text{-3} \hspace{6em} \text{1011} \quad \text{(bentuk biner dari -3)} \\
   \end{align*}
$$

4. **Kasus 4: Dua Bilangan Negatif**  
   Misal: -8 + (-7)  
   Bilangan -8 dan -7 akan diubah ke dalam bentuk komplemen dua, jadi biner 8 (1000) dan 7 (0111) menjadi:

$$
   \begin{align*}
   &\hspace{0.5em} \text{0111} \hspace{5em} \text{1000} \quad \rightarrow \text{Komplemen satu} \\
   & - - - - - - - - - - - \\
   &\hspace{0.5em} \text{0111} \hspace{5em} \text{1000} \\
   &\hspace{2.1em} \text{1} \hspace{6.4em} \text{1} \\
   &\text{──── +} \hspace{3em} \text{──── +}  \\
   &\hspace{0.3em} \boxed{1000} \hspace{4.2em} \boxed{1001} \quad \rightarrow \text{Komplemen dua} \\
   \end{align*}
$$

jadi penjumlahannya adalah:

$$
   \begin{align*}
   &\hspace{1em}  \text{-8} \hspace{6.8em} \text{1000} \\
   &\hspace{1em}  \text{-7} \hspace{6.8em} \text{1001} \\
   &\text{─── +}  \quad \rightarrow \quad \hspace{0.5em} \text{───── +}  \\
   &\hspace{0.4em}  \text{-15} \hspace{6.2em} \text{1 0001} \quad \text{(digit paling kiri diabaikan)} \\
   \end{align*}
$$
