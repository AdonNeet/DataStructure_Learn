# Number System

Suatu cara untuk mewakili besaran dari suatu item fisik. Konsep dasarnya dikarakteristikan oleh basis (radix), absolute digit, dan posisi (place) value.

<table align="center">
   <tr>
      <th style="text-align:center" colspan="2">A x B<sup>n</sup></times></th>
   </tr>
   <tr>
      <td>A</td>
      <td>Absolut digit</td>
   </tr>
   <tr>
      <td>B</td>
      <td>Base (radix)</td>
   </tr>
   <tr>
      <td>n</td>
      <td>Position value</td>
   </tr>
</table>

Basis yang digunakan sistem bilangan tergantung dari jumlah nilai bilangan yang dipergunakan.

1. Sistem Bilangan Desimal  
    Sistem bilangan yang menggunakan basis 10 (deca).  
   &Sigma; simbol bilangan = [0,1,2,3,4,5,6,7,8,9]
   <p>Contoh: 762,15<sub>10</sub></p>

  <table align="center">
     <tr>
      <th style="text-align:center" colspan="2">A x 10<sup>n</sup></times></th>
     </tr>
  </table>

2. Sistem Bilangan Biner  
   Sistem bilangan yang menggunakan basis 2 (binary).  
   &Sigma; simbol bilangan = [0,1]
   <p>Contoh: 10010011<sub>2</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2">A x 2<sup>n</sup></times></th>
      </tr>
   </table>

3. Sistem Bilangan Oktal  
   Sistem bilangan yang menggunakan basis 8 (octal).  
   &Sigma; simbol bilangan = [0,1,2,3,4,5,6,7]
   <p>Contoh: 347<sub>8</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2">A x 8<sup>n</sup></times></th>
      </tr>
   </table>

4. Sistem Bilangan Hexadecimal  
   Sistem bilangan yang menggunakan basis 16 (hexa).  
   &Sigma; simbol bilangan = [0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F]
   <p>Contoh: A78<sub>16</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2">A x 16<sup>n</sup></times></th>
      </tr>
   </table>

## Satuan Data

Komputer bekerja dengan sistem biner berupa 0 dan 1 (bit). Bit merupakan satuan data terkecil dalam sistem komputer. Bit dapat digunakan untuk menyusun berbagai karakter. Karakter itu dinyatakan dengan 8-bit atau 16-bit.

1. Byte
   Merupakan satuan yang digunakan untuk menyatakan sebuah karakter pada sistem ASCII atau EBCDIC.  
   1 Byte = 8 bit
2. Kilobyte (KB)
   Digunakan untuk berkas gambar berukuran kecil.  
   1 Kilobyte = 1024 byte
3. Megabyte (MB)
   Digunakan untuk menyatakan kapasitas RAM pada PC.  
   1 MB = 1024KB = 1.048.576 byte
4. Gigabyte (GB)
   Digunakan untuk menyatakan kapasitas harddisk dalam PC.  
   1 GB = 1024 MB = 1.073.741.824 byte
5. Terabyte (TB)
   Digunakan untuk menyakatan kapasitas harddisk dalam mainframe.  
   1 TB = 1024 GB = 1.009.511.627.776 byte
6. Petabyte (PB)  
   1 PB = 1024 TB

## Sistem Pengkodean

Sistem yang digunakan untuk mengkodekan berbagai karakter. Data disimpan dalam memori yang menempati posisi 1 byte, ini menggunakan kombinasi dari digit Biner. Komputer berbeda dalam menggunakan kode biner untuk mewakili sebuah karakter.

1. BCD (Binary Coded Decimal)  
   Merupakan kode biner yang digunakan hanya untuk mewakili nilai digit desimal saja. Sebuah karakter BCD dinyatakan dengan 4 bit karakter yang tersedia sebanyak 10 angka (0,1,2,3,4,5,6,7,8,9). Digunakan pada komputer generasi pertama.
2. EBCDIC (Extended Binary Coded Decimal Interchange Code)  
   EBCDIC dikembangkan oleh IBM, ini diterapkan pada berbagai komputer mainframe. Sebuah karakter dinyatakan dengan 8 bit. Karakter yang tersedia sebanya 28 = 226 karakter. Digunakan pada komputer generasi ketiga.
3. ASCII (American Standard Code for Information Interchange)  
   ASCII dikembangkan oleh ANSI (American National Standard Institute). Sebuah karakter ASCII dinyatakan dengan 8 bit. Karakter yang tersedia sebanyak 256 karakter, meliputi huruf, angka, dan spesial karakter, termasuk simbol Yunani dan karakter grafis.
4. Unicode  
   Sebuah karakter Unicode dinyatakan dengan 16 bit. Karakter yang tersedia sebanyak 65.536 karakter, meliputi huruf, angka, dan spesial karakter, termasuk simbol Yunani, karakter grafis, simbol Arab dan Cina.

## Konversi Bilangan

1. Bilangan Desimal ke Biner
   Membagi bilangan desimal dengan 2 (basis biner) sampai tidak bisa dibagi lagi. Kemudian sisa pembagian diurutkan dari bawah ke atas dalam format 8 bit.
   <p>Contoh: 89<sub>10</sub></p>

   <table align="center">
      <tr>
         <td width="70px"><p align="right">89<br>2:</td>
         <td width="70px"></td>
         <td rowspan="7"><p>Ditullis dari bawah ke atas: <br> <b><span style="color: red;">1011001</span></b> Karena penulisan <br> dengan 8 bit, sehingga <br> 89<sub>10</sub> = <b><span style="color: red;">0101 1001<sub>2</sub></span></b></p></td>
      </tr>
      <tr>
         <td><p align="right">44<br>2:</td>
         <td><p align="left">sisa  <b><span style="color: red;">1</span></b></p></td>
      </tr>
      <tr>
         <td><p align="right">22<br>2:</td>
         <td><p align="left">sisa  <b><span style="color: red;">0</span></b></p></td>
      </tr>
      <tr>
         <td><p align="right">11<br>2:</td>
         <td><p align="left">sisa  <b><span style="color: red;">0</span></b></p></td>
      </tr>
      <tr>
         <td><p align="right">55<br>2:</td>
         <td><p align="left">sisa  <b><span style="color: red;">1</span></b></p></td>
      </tr>
      <tr>
         <td><p align="right">2<br>2:</td>
         <td><p align="left">sisa  <b><span style="color: red;">1</span></b></p></td>
      </tr>
      <tr>
         <td><p align="right"><b><span style="color: red;">1</span></b></p></td>
         <td><p align="left">sisa  <b><span style="color: red;">0</span></b></p></td>
      </tr>
   </table>

2. Bilangan Biner ke Desimal
   Mengalikan masing-masing bit biner dalam bilangan sesuai dengan radix dan position value-nya.
      <p>Contoh: 11 0101<sub>2</sub></p>

      <table align="center">
         <tr>
            <th>bit ke-?</th>
            <th colspan="2" width="150px"><p align="center">110101<sub>2</sub></p></th>
            <td rowspan="8" style="text-align:center;width:180px">Hasil di samping adalah:<br><b>11 0101<sub>2</sub> = 53<sub>10</sub></b> </td>
         </tr>
         <tr>
            <td><p align="center">0</p></td>
            <td><p align="center">1 x 2<sup>0</sup></p></td>
            <td><p align="center">1</p></td>
         </tr>
         <tr>
            <td><p align="center">1</p></td>
            <td><p align="center">0 x 2<sup>1</sup></p></td>
            <td><p align="center">0</p></td>
         </tr>
         <tr>
            <td><p align="center">2</p></td>
            <td><p align="center">1 x 2<sup>2</sup></p></td>
            <td><p align="center">4</p></td>
         </tr>
         <tr>
            <td><p align="center">3</p></td>
            <td><p align="center">0 x 2<sup>3</sup></p></td>
            <td><p align="center">0</p></td>
         </tr>
         <tr>
            <td><p align="center">4</p></td>
            <td><p align="center">1 x 2<sup>4</sup></p></td>
            <td><p align="center">16</p></td>
         </tr>
         <tr>
            <td><p align="center">5</p></td>
            <td><p align="center">1 x 2<sup>5</sup></p></td>
            <td><p align="center">32</p></td>
         </tr>
         <tr>
            <td colspan="2"><p align="right">Jumlah</p></td>
            <td><p align="center">53</p></td>
         </tr>
      </table>

   > Under Construction
