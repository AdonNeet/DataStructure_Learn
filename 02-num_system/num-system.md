# Number System

Suatu cara untuk mewakili besaran dari suatu item fisik. Konsep dasarnya dikarakteristikan oleh basis (radix), absolute digit, dan posisi (place) value.

<table align="center">
   <tr>
      <th style="text-align:center" colspan="2"><h3>A x B<sup>n</sup></h3></th>
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
      <th style="text-align:center" colspan="2"><h2>A x 10<sup>n</sup></h2></th>
     </tr>
  </table>

2. Sistem Bilangan Biner  
   Sistem bilangan yang menggunakan basis 2 (binary).  
   &Sigma; simbol bilangan = [0,1]
   <p>Contoh: 10010011<sub>2</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2"><h2>A x 2<sup>n</sup></h2></th>
      </tr>
   </table>

3. Sistem Bilangan Oktal  
   Sistem bilangan yang menggunakan basis 8 (octal).  
   &Sigma; simbol bilangan = [0,1,2,3,4,5,6,7]
   <p>Contoh: 347<sub>8</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2"><h2>A x 8<sup>n</sup></h2></th>
      </tr>
   </table>

4. Sistem Bilangan Hexadecimal  
   Sistem bilangan yang menggunakan basis 16 (hexa).  
   &Sigma; simbol bilangan = [0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F]
   <p>Contoh: A78<sub>16</sub></p>

   <table align="center">
      <tr>
         <th style="text-align:center" colspan="2"><h2>A x 16<sup>n</sup></h2></th>
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
            <td rowspan="8" style="text-align:center;width:180px"><p align="center">Hasil di samping adalah:<br><b>11 0101<sub>2</sub> = 53<sub>10</sub></b></p></td>
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

3. Bilangan Desimal ke Oktal  
   Membagi bilangan desimal dengan 8 (basis oktal) sampai tidak bisa dibagi lagi. Cara yang digunakan sama dengan biner.
   <p>Contoh: 147<sub>10</sub></p>

      <table align="center">
         <tr>
            <td width="70px"><p align="right">147<br>8:</td>
            <td width="70px"></td>
            <td rowspan="7"><p>Ditullis dari bawah ke atas: <br> <b><span style="color: red;">223</span></b> <br>Maka hasilnya... <br> 147<sub>10</sub> = <b><span style="color: red;">223<sub>8</sub></span></b></p></td>
         </tr>
         <tr>
            <td><p align="right">18<br>8:</td>
            <td><p align="left">sisa  <b><span style="color: red;">3</span></b></p></td>
         </tr>
         <tr>
            <td><p align="right"><b><span style="color: red;">2</span></b></p></td>
            <td><p align="left">sisa  <b><span style="color: red;">2</span></b></p></td>
         </tr>
      </table>

4. Bilangan Oktal ke Desimal  
   Mengalikan masing-masing bit oktal dalam bilangan sesuai dengan radix dan position value-nya.
   <p>Contoh: 371<sub>8</sub></p>

      <table align="center">
         <tr>
            <th>bit ke-?</th>
            <th colspan="2" width="150px"><p align="center">371<sub>8</sub></p></th>
            <td rowspan="8" style="text-align:center;width:180px"><p align="center">Hasil di samping adalah:<br><b>371<sub>8</sub> = 249<sub>10</sub></b></p></td>
         </tr>
         <tr>
            <td><p align="center">0</p></td>
            <td><p align="center">1 x 8<sup>0</sup></p></td>
            <td><p align="center">1</p></td>
         </tr>
         <tr>
            <td><p align="center">1</p></td>
            <td><p align="center">7 x 8<sup>1</sup></p></td>
            <td><p align="center">56</p></td>
         </tr>
         <tr>
            <td><p align="center">2</p></td>
            <td><p align="center">3 x 8<sup>2</sup></p></td>
            <td><p align="center">192</p></td>
         </tr>
         <tr>
            <td colspan="2"><p align="right">Jumlah</p></td>
            <td><p align="center">249</p></td>
         </tr>
      </table>

5. Bilangan Desimal ke Hexadecimal  
   Membagi bilangan desimal dengan 16 (basis hexa) sampai tidak bisa dibagi lagi. Cara yang digunakan sama dengan bilangan biner.
   <p>Contoh: 123<sub>10</sub></p>

      <table align="center">
         <tr>
            <td width="70px"><p align="right">123<br>16:</td>
            <td width="70px"></td>
            <td rowspan="7"><p>Sisa 11 dikodekan menjadi <b>B</b> <br>Ditullis dari bawah ke atas: <br> <b><span style="color: red;">7B</span></b> <br>Maka hasilnya... <br> 123<sub>10</sub> = <b><span style="color: red;">7B<sub>16</sub></span></b></p></td>
         </tr>
         <tr>
            <td><p align="right"><b><span style="color: red;">7</span></b></p></td>
            <td><p align="left">sisa  <b><span style="color: red;">11</span></b></p></td>
         </tr>
      </table>

6. Bilangan Hexadecimal ke Desimal  
   Mengalikan masing-masing bit hexa dalam bilangan sesuai dengan rdix dan position valuenya.
   <p>Contoh: 8F<sub>16</sub></p>

      <table align="center">
         <tr>
            <th>bit ke-?</th>
            <th colspan="2" width="150px"><p align="center">8F<sub>16</sub></p></th>
            <td rowspan="8" style="text-align:center;width:180px"><p align="center">Hasil di samping adalah:<br><b>8F<sub>16</sub> = 143<sub>10</sub></b></p></td>
         </tr>
         <tr>
            <td><p align="center">0</p></td>
            <td><p align="center">F x 16<sup>0</sup></p></td>
            <td><p align="center">15</p></td>
         </tr>
         <tr>
            <td><p align="center">1</p></td>
            <td><p align="center">8 x 16<sup>1</sup></p></td>
            <td><p align="center">128</p></td>
         </tr>
         <tr>
            <td colspan="2"><p align="right">Jumlah</p></td>
            <td><p align="center">143</p></td>
         </tr>
      </table>

7. Bilangan Biner ke Oktal  
   Membagi digit biner tersebut ke dalam tiga digit dari kanan. Ketiga digit tersebut kemudian dikonversikan menjadi desimal.
   <p>Contoh: 1010 1011<sub>2</sub></p>

      <table align="center">
         <tr>
            <td width="70">Biner</td>
            <td width="70"><p align="center">10</p></td>
            <td width="70"><p align="center"><span style="color:red">101</span></p></td>
            <td width="70"><p align="center"><span style="color:green">011</span></p></td>
            <td rowspan="2"><p>Maka hasilnya... <br><b>1010 1011<sub>2</sub> = 253<sub>8</sub></b></p></td>
         </tr>
         <tr>
            <td width="70">Desimal</td>
            <td width="70"><p align="center">2</p></td>
            <td width="70"><p align="center">5</p></td>
            <td width="70"><p align="center">3</p></td>
         </tr>
      </table>

8. Bilangan Oktal ke Biner  
   Mengkonversikan setiap satu digit oktal menjadi tiga digit biner.
   <p>Contoh: 71<sub>8</sub></p>

      <table align="center">
         <tr>
            <td width="70">Oktal</td>
            <td width="70"><p align="center">7</p></td>
            <td width="70"><p align="center">1</p></td>
            <td rowspan="2"><p>Maka hasilnya... <br><b>71<sub>8</sub> = 0011 1001<sub>2</sub></b></p></td>
         </tr>
         <tr>
            <td width="70">Biner</td>
            <td width="70"><p align="center">111</p></td>
            <td width="70"><p align="center">001</p></td>
         </tr>
      </table>

9. Bilangan Biner ke Hexadecimal  
   Membagi digit biner ke dalam empat digit dari kanan. Keempat digit tersebut dikonversikan menjadi desimal.
   <p>Contoh: 1010 1011<sub>2</sub></p>

      <table align="center">
         <tr>
            <td width="70">Biner</td>
            <td width="70"><p align="center"><span style="color:red">1010</span></p></td>
            <td width="70"><p align="center"><span style="color:green">1011</span></p></td>
            <td rowspan="3"><p>Maka hasilnya... <br><b>1010 1011<sub>2</sub> = AB<sub>16</sub></b></p></td>
         </tr>
         <tr>
            <td width="70">Desimal</td>
            <td width="70"><p align="center">10</p></td>
            <td width="70"><p align="center">11</p></td>
         </tr>
         <tr>
            <td width="70">Hexa</td>
            <td width="70"><p align="center">A</p></td>
            <td width="70"><p align="center">B</p></td>
         </tr>
      </table>

10. Bilangan Hexadecimal ke Biner  
    Mengkonversikan setiap satu digit heca menjadi empat digit biner. Untuk mempermudah dapat mengkonversikan dahulu ke desimal.
    <p>Contoh: 8F<sub>16</sub></p>

      <table align="center">
         <tr>
            <td width="70">Hexa</td>
            <td width="70"><p align="center">8</p></td>
            <td width="70"><p align="center">F</p></td>
            <td rowspan="3"><p>Maka hasilnya... <br><b>8F<sub>16</sub> = 1000 1111<sub>2</sub></b></p></td>
         </tr>
         <tr>
            <td width="70">Desimal</td>
            <td width="70"><p align="center">8</p></td>
            <td width="70"><p align="center">15</p></td>
         </tr>
         <tr>
            <td width="70">Biner</td>
            <td width="70"><p align="center">1000</p></td>
            <td width="70"><p align="center">1111</p></td>
         </tr>
      </table>

11. Bilangan Oktal ke Hexadecimal  
    Konversi tidak dapat dilakukan secara langsung, tetapi harus dikonversikan terlebih dahulu ke Desimal atau Biner.
    <p>Contoh: 243<sub>8</sub></p>

      <table align="center">
         <tr>
            <td width="85">Oktal</td>
            <td width="70"><p align="center">2</p></td>
            <td width="70" colspan="2"><p align="center">4</p></td>
            <td width="70"><p align="center">3</p></td>
            <td rowspan="5"><p>Maka hasilnya... <br><b>8F<sub>16</sub> = 143<sub>10</sub></b></p></td>
         </tr>
         <tr>
            <td width="85">Biner</td>
            <td width="70"><p align="center">0<span style="color:red">10</span></p></td>
            <td width="70" colspan="2"><p align="center"><span style="color:red">10</span><span style="color:green">0</span></p></td>
            <td width="70"><p align="center"><span style="color:green">011</span></p></td>
         </tr>
         <tr>
            <td width="85"><i>merge it</i></td>
            <td width="70" colspan="2"><p align="center">1010</p></td>
            <td width="70" colspan="2"><p align="center">0011</p></td>
         </tr>
         <tr>
            <td width="85">Desimal</td>
            <td width="70" colspan="2"><p align="center">10</p></td>
            <td width="70" colspan="2"><p align="center">3</p></td>
         </tr>
         <tr>
            <td width="85">Hexa</td>
            <td width="70" colspan="2"><p align="center">A</p></td>
            <td width="70" colspan="2"><p align="center">3</p></td>
         </tr>
      </table>

12. Bilangan Hexadecimal ke Oktal  
    Konversi tidak dapat dilakukan secara langsung, tetapi harus dikonversikan terlebih dahulu ke Desimal atau Biner dengan konversi dari Oktal ke Hexa.
    <p>Contoh: 8F<sub>16</sub></p>

      <table align="center">
         <tr>
            <td width="70">Hexa</td>
            <td width="70" colspan="2"><p align="center">8</p></td>
            <td width="70" colspan="2"><p align="center">F</p></td>
            <td rowspan="5"><p>Maka hasilnya... <br><b>8F<sub>16</sub> = 217<sub>8</sub></b></p></td>
         </tr>
         <tr>
            <td width="70">Desimal</td>
            <td width="70" colspan="2"><p align="center">8</p></td>
            <td width="70" colspan="2"><p align="center">15</p></td>
         </tr>
         <tr>
            <td width="70">Biner</td>
            <td width="70" colspan="2"><p align="center">10<span style="color:red">00</span></p></td>
            <td width="70" colspan="2"><p align="center"><span style="color:red">1</span><span style="color:green">111</span></p></td>
         </tr>
         <tr>
            <td width="70"><i>split it</i></td>
            <td width="70"><p align="center">10</p></td>
            <td width="70" colspan="2"><p align="center">001</p></td>
            <td width="70"><p align="center">111</p></td>
         </tr>
         <tr>
            <td width="70">Oktal</td>
            <td width="70"><p align="center">2</p></td>
            <td width="70" colspan="2"><p align="center">1</p></td>
            <td width="70"><p align="center">7</p></td>
         </tr>
      </table>
